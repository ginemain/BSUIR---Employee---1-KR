#ifndef EmployeeH
#define EmployeeH

#include <System.hpp>

class Employee
{
public:
    String fio;
    int department;
    String position;
    TDate startDate;

    Employee();
    Employee(String f, int d, String p, TDate date);

    int getExperience(); // ���� � �����
};

#endif