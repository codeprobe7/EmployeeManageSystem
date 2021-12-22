#pragma once
#include "Employee.h"

class Administrator
{
    int CurrentEmployee = 0;
    Employee **EmployeeList  = new Employee*[10];
    
    
public:
    void AddEmployee (Employee* Employee);
    void ShowEmployeeSataus();
    void Run();
};
