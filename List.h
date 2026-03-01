#ifndef ListH
#define ListH

#include "Employee.h"
#include <string>


struct Node {
    Employee data;
    Node* next;
};

class List {
private:
    Node* head;

public:
    List();

    void add(Employee e);               // добавить сотрудника
    bool remove(String fio);            // удалить по ФИО
    Employee* find(String fio);         // найти по ФИО

    String showAll();                   // показать весь список
    String byDepartment(int dep);       // фильтр по отделу
    String byExperience(int years);     // фильтр по стажу

    void saveToFile(String filename);   // сохранить в файл
    void loadFromFile(String filename); // загрузить из файла
};

#endif
