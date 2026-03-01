#include "List.h"
#include <fstream>
#include <sstream>
#include <SysUtils.hpp>  // для StrToDate и DateToStr
#include <Vcl.StdCtrls.hpp> // для AnsiString

using namespace std;

List::List() {
    head = nullptr;
}

// добавление сотрудника в начало списка
void List::add(Employee e) {
    Node* n = new Node;
    n->data = e;
    n->next = head;
    head = n;
}

// удаление сотрудника по ФИО
bool List::remove(String fio) {
    Node *cur = head, *prev = nullptr;

    while(cur) {
        if(cur->data.fio == fio) {
            if(prev) prev->next = cur->next;
            else head = cur->next;

            delete cur;
            return true;
        }
        prev = cur;
        cur = cur->next;
    }
    return false;
}

// поиск сотрудника по ФИО
Employee* List::find(String fio) {
    Node* cur = head;
    while(cur) {
        if(cur->data.fio.Pos(fio) > 0)
            return &cur->data;
        cur = cur->next;
    }
    return nullptr;
}

// показать всех сотрудников
String List::showAll() {
    Node* cur = head;
    String s;

    while(cur) {
        s += cur->data.fio + " | Отдел: " +
             IntToStr(cur->data.department) +
             " | " + cur->data.position +
             " | Стаж: " +
             IntToStr(cur->data.getExperience()) +
             "\r\n";

        cur = cur->next;
    }
    return s;
}

// фильтр по отделу
String List::byDepartment(int dep) {
    Node* cur = head;
    String s;
    while(cur) {
        if(cur->data.department == dep)
            s += cur->data.fio + " | " + cur->data.position + "\r\n";
        cur = cur->next;
    }
    return s;
}

// фильтр по стажу
String List::byExperience(int years) {
	Node* cur = head;
	String s;
	while(cur) {
		if(cur->data.getExperience() >= years)
			s += cur->data.fio + " | " + cur->data.position + "\r\n";
		cur = cur->next;
	}
	return s;
}

// загрузка из текстового
void List::loadFromFile(String filename) {
	ifstream file(filename.c_str());
    if(!file.is_open()) return;

    head = nullptr; // очищаем список перед загрузкой
	string line;

	while(getline(file, line)) {
		stringstream ss(line);
		string fioStr, posStr, dateStr, depStr;
        int dep;

		getline(ss, fioStr, '|');
		getline(ss, depStr, '|'); dep = stoi(depStr);
		getline(ss, posStr, '|');
		getline(ss, dateStr);

		TDate dt;
        try {
            dt = StrToDate(String(dateStr.c_str())); // дата в формате дд.мм.гггг
        } catch(...) {
            dt = Date(); // если дата неверная, ставим текущую
        }

        Employee e(String(fioStr.c_str()), dep, String(posStr.c_str()), dt);
        add(e);
    }

    file.close();
}

// сохранение
void List::saveToFile(String filename) {
    ofstream file(filename.c_str(), ios::out);
    if(!file.is_open()) return;

    Node* cur = head;
    while(cur) {
        // конвертируем все UnicodeString в AnsiString перед записью
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

