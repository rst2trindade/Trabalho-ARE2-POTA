#include <iostream>

#include "Employee.h"
#include "QuickSort.h"

    Employee employee[13] ={
    Employee("Rafael","trindade","desenvolvedor J",25,2500.0,19),
    Employee("Ronaldo","Costa","desenvolvedor P",46,12500.0,11),
    Employee("Kayqe","Dantes","Rercursos Humanos",31,6000.0,9),
    Employee("Ana","Souza","Designer",21,3000.0,7),
    Employee("Flavio","Pinto","Gerente ",48,16000.0,26),
    Employee("Joana","Pinheiro","Scrum Master",41,12500.0,18),
    Employee("Bruno","Ferreira","desenvolvedor S",33,5500.0,4),
    Employee("Hannah","Marialva","Designer",27,3000.0,6),
    Employee("Zildo","Lombarte","tecnico redes",19,1200.0,36),
    Employee("Marcos","Pontes","Gestor chefe",53,32000.0,1),
    Employee("Lucio","Porfirio","tecninco infra",18,1200.0,3),
    Employee("Elza","Simões","desenvolvedor J",26,2500.0,75),
    Employee("Matheus","Bentes","desenvolvedor J",22,2500.0,43)};

void PrintVet(Employee* employee, int size){
    for (int i = 0; i < size; i++){
        std::cout <<"\nEmpregado:"<<std::endl;
        employee[i].PrintEmployee();
    } 
}

int main(){

   std::cout <<"\nOrdenação usando QuickSort\n" << std::endl;
    std::cout <<"\nLista de Empregados\n" << std::endl;
    PrintVet(employee , 13);

    std::cout <<"\nOrdenados por ID(crescente)\n" << std::endl;
    Quicksort(employee,0,12,3);
    PrintVet(employee , 13);

    std::cout <<"\nOrdenados por Salario(decrescente)\n" << std::endl;
    Quicksort(employee,0,12,2);
    PrintVet(employee , 13);

    std::cout <<"\nOrdenados por Idade(decrescente)\n" << std::endl;
    Quicksort(employee,0,12,1);
    PrintVet(employee , 13);

    return 0;
}
