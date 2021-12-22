#pragma once
#include <string>
#include <iostream>
#include "../Enum/Grade.h"

class Employee
{
    
protected:

    std::string Name = "Null";
    int Age = 0;
    EGrade Grade = Junior;
    float Salary = 0;
    bool Hired = false;
    
    const float BaseSalary = 1000;

    void UpdateSalary();

    friend class Administrator;
    
public:
    Employee()
    {
    }

    Employee(std::string _Name, int _Age, EGrade _Grade)
    {
        Name = _Name;
        Age = _Age;
        Grade = _Grade;
        UpdateSalary();
        Hired = true;
    }

    Employee(const Employee* _Employee)
    {
        Name = _Employee->Name;
        Age = _Employee->Age;
        Grade = _Employee->Grade;
        Salary = _Employee->Salary;
        Hired = _Employee->Hired;
    }

    virtual ~Employee()
    {
    }
};
