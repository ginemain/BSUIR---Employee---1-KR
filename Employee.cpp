#include "Employee.h"
#include <System.DateUtils.hpp>

Employee::Employee() {}

Employee::Employee(String f, int d, String p, TDate date) {
    fio = f;
    department = d;
    position = p;
    startDate = date;
}

int Employee::getExperience() {
    TDate now = Date();
    return YearsBetween(now, startDate);
}