#include "Employee.h"

Employee::Employee(std::string name,std::string last_name,std::string role,long cpf,float salary)
    :name_(name),last_name_(last_name),role_(role),cpf_(cpf),salary_(salary){};

std::string Employee::GetName(){
    return name_;
}

void Employee::SetName(std::string name){
    name_ = name;
}

std::string Employee::GetLastName(){
    return last_name_;
}

void Employee::SetLastName(std::string last_name){
    last_name = last_name_;
}

std::string Employee::GetRole(){
    return role_;
}

void Employee::SetRole(std::string role){
    role = role_;
}

long Employee::GetCpf(){
    return cpf_;
}

void Employee::SetCpf(long cpf){
    cpf = cpf_;
}

float Employee::GetSalary(){
    return salary_;
}

void Employee::SetSalary(float salary){
    salary = salary_;
}

void Employee::PrintEmployee(){
    std::cout << "Nome:"<<name_<<std::endl;
    std::cout << "Sobre nome:"<<last_name_<<std::endl;
    std::cout << "Cargo:"<<role_<<std::endl;
    std::cout << "CPF:"<<cpf_<<std::endl;
    std::cout << "Salario:"<<salary_<<std::endl;
}