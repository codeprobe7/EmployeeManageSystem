#include "Administrator.h"

void Administrator::AddEmployee(Employee* Employee)
{
    EmployeeList[CurrentEmployee] = Employee;
    CurrentEmployee++;
}

void Administrator::ShowEmployeeSataus()
{
    for(int i = 0; i < CurrentEmployee; i++)
    {
        std::cout << "Name : " << EmployeeList[i]->Name << " Age : " << EmployeeList[i]->Age << " Grade : " << EmployeeList[i]->Grade <<
            " Salary : " << EmployeeList[i]->Salary << " Hired : " << (EmployeeList[i]->Hired ? "TRUE" : "FALSE") << std::endl;
    }
}

void Administrator::Run()
{
    AddEmployee(new Employee ("Jun", 20, Junior));
    AddEmployee(new Employee ("Inter", 20, Intermediate));
    ShowEmployeeSataus();
}
