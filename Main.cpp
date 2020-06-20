#include <iostream>

#include "Employee.h"

void PrintVet(Employee* employee, int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout <<"\nEmpregado:"<<std::endl;
        employee[i].PrintEmployee();
    }
    
}

int main(){

    Employee employee[13] ={
    Employee("Rafael","trindade","desenvolvedor J",99422183006,2500.0),
    Employee("Ronaldo","Costa","desenvolvedor P",47756878086,12500.0),
    Employee("Kayqe","Dantes","Rercursos Humanos",77053400034,6000.0),
    Employee("Ana","Souza","Designer",50306503000,3000.0),
    Employee("Flavio","Pinto","Gerente ",22732450090,16000.0),
    Employee("Joana","Pinheiro","Scrum Master",55460690072,12500.0),
    Employee("Bruno","Ferreira","desenvolvedor S",81832603067,5500.0),
    Employee("Hannah","Marialva","Designer",41988830095,3000.0),
    Employee("Zildo","Lombarte","tecnico redes",86168122028,1200.0),
    Employee("Marcos","Pontes","Gestor chefe",60986307041,32000.0),
    Employee("Lucio","Porfirio","tecninco infra",60986307041,1200.0),
    Employee("Elza","Simões","desenvolvedor J",33382573091,2500.0),
    Employee("Matheus","Bentes","desenvolvedor J",21346481040,2500.0)};

    PrintVet(employee , 13);


    return 0;
}
