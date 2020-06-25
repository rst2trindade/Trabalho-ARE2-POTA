#pragma once

#include <string>
#include <iostream>

class Employee {
public:
    Employee(std::string name,std::string last_name,std::string role,int age,float salary,int id);
    Employee() = default;
    ~Employee() = default;
    std::string GetName();
    std::string GetLastName();
    std::string GetRole();
    int GetAge();
    float GetSalary();
    int GetId();

    void PrintEmployee();
    
private:
    std::string name_ = "";
    std::string last_name_ = "";
    std::string role_ = "";
    int age_ = 0;
    float salary_ = 0;
    int id_ = 0;

};
