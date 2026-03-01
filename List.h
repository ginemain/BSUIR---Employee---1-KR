#ifndef ListH
#define ListH

#include "Employee.h"
#include <string>

struct Node
{
    Employee data;
    Node *next;
};

class List
{
private:
    Node *head;

public:
    List();

    void add(Employee e);       // �������� ����������
    bool remove(String fio);    // ������� �� ���
    Employee *find(String fio); // ����� �� ���

    String showAll();               // �������� ���� ������
    String byDepartment(int dep);   // ������ �� ������
    String byExperience(int years); // ������ �� �����

    void saveToFile(String filename);   // ��������� � ����
    void loadFromFile(String filename); // ��������� �� �����
};

#endif
