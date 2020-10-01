#include "employee.h"
#include "department.h"
void Department::add_employee(const Employee &new_employee)
{
    number_of_employees_++;
    employees_link_.Append(new_employee); //add information into employees link
}
void Department::set_department_info(string name, int budget)
{
    department_name_ = name;
    budget_ = budget;
}
Department &Department::operator=(Department department)
{
    employees_link_ = department.employees_link_; //operator = got overloaded in LinkList.h
    department_name_ = department.department_name_;
    budget_ = department.budget_;
    number_of_employees_ = department.number_of_employees_;
}
bool Department::delete_employee_by_id(int employee_id)
{
    if (employees_link_.Locate(employee_id) != NULL) // now the CurNode is what we want
    {
        employees_link_.DeleteCurNode();
        return true;
    }
    else
        return false;
}