#include "Employee.h"

void Employee::UpdateSalary() 
{
    switch(Grade)
    {
    case Junior:
        Salary = BaseSalary * 1.0f;
        break;
    case Intermediate:
        Salary = BaseSalary * 1.5f;
        break;
    case Senior:
        Salary = BaseSalary * 2.0f;
        break;
        default: Salary = BaseSalary;
        break;
    }
}


