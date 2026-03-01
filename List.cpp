#include "List.h"
#include <fstream>
#include <sstream>
#include <SysUtils.hpp>     // ��� StrToDate � DateToStr
#include <Vcl.StdCtrls.hpp> // ��� AnsiString

using namespace std;

List::List()
{
    head = nullptr;
}

// ���������� ���������� � ������ ������
void List::add(Employee e)
{
    Node *n = new Node;
    n->data = e;
    n->next = head;
    head = n;
}

// �������� ���������� �� ���
bool List::remove(String fio)
{
    Node *cur = head, *prev = nullptr;

    while (cur)
    {
        if (cur->data.fio == fio)
        {
            if (prev)
                prev->next = cur->next;
            else
                head = cur->next;

            delete cur;
            return true;
        }
        prev = cur;
        cur = cur->next;
    }
    return false;
}

// ����� ���������� �� ���
Employee *List::find(String fio)
{
    Node *cur = head;
    while (cur)
    {
        if (cur->data.fio.Pos(fio) > 0)
            return &cur->data;
        cur = cur->next;
    }
    return nullptr;
}

// �������� ���� �����������
String List::showAll()
{
    Node *cur = head;
    String s;

    while (cur)
    {
        s += cur->data.fio + " | �����: " +
             IntToStr(cur->data.department) +
             " | " + cur->data.position +
             " | ����: " +
             IntToStr(cur->data.getExperience()) +
             "\r\n";

        cur = cur->next;
    }
    return s;
}

// ������ �� ������
String List::byDepartment(int dep)
{
    Node *cur = head;
    String s;
    while (cur)
    {
        if (cur->data.department == dep)
            s += cur->data.fio + " | " + cur->data.position + "\r\n";
        cur = cur->next;
    }
    return s;
}

// ������ �� �����
String List::byExperience(int years)
{
    Node *cur = head;
    String s;
    while (cur)
    {
        if (cur->data.getExperience() >= years)
            s += cur->data.fio + " | " + cur->data.position + "\r\n";
        cur = cur->next;
    }
    return s;
}

// �������� �� ����������
void List::loadFromFile(String filename)
{
    ifstream file(filename.c_str());
    if (!file.is_open())
        return;

    head = nullptr; // ������� ������ ����� ���������
    string line;

    while (getline(file, line))
    {
        stringstream ss(line);
        string fioStr, posStr, dateStr, depStr;
        int dep;

        getline(ss, fioStr, '|');
        getline(ss, depStr, '|');
        dep = stoi(depStr);
        getline(ss, posStr, '|');
        getline(ss, dateStr);

        TDate dt;
        try
        {
            dt = StrToDate(String(dateStr.c_str())); // ���� � ������� ��.��.����
        }
        catch (...)
        {
            dt = Date(); // ���� ���� ��������, ������ �������
        }

        Employee e(String(fioStr.c_str()), dep, String(posStr.c_str()), dt);
        add(e);
    }

    file.close();
}

// ����������
void List::saveToFile(String filename)
{
    ofstream file(filename.c_str(), ios::out);
    if (!file.is_open())
        return;

    Node *cur = head;
    while (cur)
    {
        // ������������ ��� UnicodeString � AnsiString ����� �������
        AnsiString fio = cur->data.fio;
        AnsiString pos = cur->data.position;
        AnsiString date = FormatDateTime("dd.mm.yyyy", cur->data.startDate);

        file << fio.c_str() << "|"
             << cur->data.department << "|"
             << pos.c_str() << "|"
             << date.c_str() << endl;

        cur = cur->next;
    }

    file.close();
}
