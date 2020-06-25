#pragma once

#include "Employee.h"

//repartir e ordenar por idade em modo decrescente 
int PartitionAge(Employee *employee,int start,int end){
    int pivot = employee[end].GetAge();

    //P-index indicar o indice do pivo
    int P_index=start;

    Employee aux; //variavel auxiliar 
    
    //se os valores forem maior que o pivo, são adicionado para frente

    for(int i=start;i<end;i++){
    	if(employee[i].GetAge()>pivot){
            aux=employee[i];
            employee[i]=employee[P_index];
            employee[P_index]=aux;
            P_index++;
        }
     }
     //adicionar o pivo na posicao certa
      aux=employee[end];
      employee[end]=employee[P_index];
      employee[P_index]=aux;
    
     //retornar o indice do pivor 
     return P_index;
 }

 int PartitionSalary(Employee *employee,int start,int end){
    int pivot = employee[end].GetSalary();

    //P-index indicar o indice do pivo
    int P_index=start;

    Employee aux; //variavel auxiliar 
    
    //se os valores forem maior que o pivo, são adicionado para frente

    for(int i=start;i<end;i++){
    	if(employee[i].GetSalary()>pivot){
            aux=employee[i];
            employee[i]=employee[P_index];
            employee[P_index]=aux;
            P_index++;
        }
     }
     //adicionar o pivo na posicao certa
      aux=employee[end];
      employee[end]=employee[P_index];
      employee[P_index]=aux;
    
     //retornar o indice do pivor 
     return P_index;
 }

 int PartitionID(Employee *employee,int start,int end){
    int pivot = employee[end].GetId();

    //P-index indicar o indice do pivo
    int P_index=start;

    Employee aux; //variavel auxiliar 
    
    //se os valores forem maior que o pivo, são adicionado para tras

    for(int i=start;i<end;i++){
    	if(employee[i].GetId() <= pivot){
            aux=employee[i];
            employee[i]=employee[P_index];
            employee[P_index]=aux;
            P_index++;
        }
     }
     //adicionar o pivo na posicao certa
      aux=employee[end];
      employee[end]=employee[P_index];
      employee[P_index]=aux;
    
     //retornar o indice do pivor 
     return P_index;
 }

 void Quicksort(Employee *employee,int start,int end, int typeQuick){
     int P_index =0;

    if(start<end){
        switch (typeQuick){
        case 1:
            P_index=PartitionAge(employee,start,end);
            Quicksort(employee,start,P_index-1,1);
            Quicksort(employee,P_index+1,end,1);
            break;

        case 2:
            P_index=PartitionSalary(employee,start,end);
            Quicksort(employee,start,P_index-1,2);
            Quicksort(employee,P_index+1,end,2);
            break;

        case 3:
            P_index=PartitionID(employee,start,end);
            Quicksort(employee,start,P_index-1,3);
            Quicksort(employee,P_index+1,end,3);
            break;        

        default:
            P_index=PartitionAge(employee,start,end);
            Quicksort(employee,start,P_index-1,1);
            Quicksort(employee,P_index+1,end,1);
            break;
        }
    }
}
