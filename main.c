//Programa 5 Resta de dos numeros decimales float  resta=num1-num2
#include <stdio.h>//Libreria para entrada y salida de datos

int main()
{//inicia main
    //Entrada
    printf("Suma de numeros decimales float");
     float num1;
     float num2;
     float resta;
     printf("\nCaptura numero decimal 1:");
      scanf("%f",&num1);//guarda el valor capturado por teclado de tipo decimal flotante 
     printf("\nCaptura nuemro decimal 2:");
      scanf("%f",&num2);//guarda el valor capturado por teclado de tipo decimal flotante
      //proceso
      resta=num1-num2;//operacion resta
     //salida
     printf("Resta es :%.1f",resta);
    return 0;
}//termina main
