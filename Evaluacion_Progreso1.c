/*Realice un programa en el que dado n números naturales, determine y escriba qué porcentaje son pares y que porcentaje son primos.
Por ejemplo:
Entrada: 4 5 6 2 1 -5 9 8
Salida: Pares: 50 %, Primos: 25%*/
//Incluir la biblioteca stdio.h
#include <stdio.h>

int main(){
    int n = 0, pares=0, primos=0, i, total=0, numerospares=0, numerosprimos=0;
    int par=0, primo=0, porcentajepar=0, porcentajeprimo=0;
    do{
       //Pedir al usuario los valores, y comprobar que quiera seguir con el programa
       printf("Por favor ingrese un numero: ");
       scanf("%d",&n);
       total++;
        if(n%2==0){
            par++;
        }
        for(int c = 1;c <= n;c++){
            if(n%c==0){
                primo++;
            }
        }   
       printf("\ndesea continuar?, pulse 1 para seguir y 0 para parar: ");
       scanf("%d",&i);
    }while(i!=0);
    porcentajepar = (par*100)/total;
    porcentajeprimo = (primo*100)/total;
    printf("Porcentaje pares %d%", porcentajepar);
    printf("\nPorcentaje primos %d%", porcentajeprimo);
    return 0;
}