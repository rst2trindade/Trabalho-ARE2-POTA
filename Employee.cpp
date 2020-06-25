#include "Employee.h"

Employee::Employee(std::string name,std::string last_name,std::string role,int age,float salary,int id)
    :name_(name),last_name_(last_name),role_(role),age_(age),salary_(salary), id_(id){};

std::string Employee::GetName(){
    return name_;
}

std::string Employee::GetLastName(){
    return last_name_;
}

std::string Employee::GetRole(){
    return role_;
}

int Employee::GetAge(){
    return age_;
}

float Employee::GetSalary(){
    return salary_;
}
int Employee::GetId(){
    return id_;
}

void Employee::PrintEmployee(){
    std::cout << "Nome:"<<name_<<std::endl;
    std::cout << "Sobre nome:"<<last_name_<<std::endl;
    std::cout << "Cargo:"<<role_<<std::endl;
    std::cout << "idade:"<<age_<<std::endl;
    std::cout << "Salario:"<<salary_<<std::endl;
    std::cout << "ID:"<<id_<<std::endl;

}