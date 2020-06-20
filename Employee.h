#pragma once

#include <string>
#include <iostream>

class Employee {
public:
    Employee(std::string name,std::string last_name,std::string role,long cpf,float salary);
    Employee() = default;
    ~Employee() = default;
    std::string GetName();
    void SetName(std::string name);
    std::string GetLastName();
    void SetLastName(std::string last_name);
    std::string GetRole();
    void SetRole(std::string role);
    long GetCpf();
    void SetCpf(long cpf);
    float GetSalary();
    void SetSalary(float salary);

    void PrintEmployee();
    
private:
    std::string name_ = "";
    std::string last_name_ = "";
    std::string role_ = "";
    long cpf_ = 0;
    float salary_ = 0;
};
