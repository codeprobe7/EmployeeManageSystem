#include "Class/Administrator.h"
#include "Class/AIntermediate.h"
#include "Class/AJunior.h"


int main(int argc, char* argv[])
{
    Administrator Admin;
    Admin.AddEmployee(new Employee("Jun", 20, Junior));
    Admin.Run();

    return 0;
}
