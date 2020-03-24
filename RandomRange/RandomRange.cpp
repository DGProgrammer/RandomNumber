#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstdint>
#include <time.h>   

int range(int& min, int& max)
{
	srand(time(NULL)); //Inicializamos semilla random (include time.h)

	int difference = max - min + 1; //Calculamos la diferencia que hay entre max y min 
	//para cuando le sumemos min no pase del max, y le sumamos 1 para incluir el maximo

	int random = rand() % difference + min; //Sacamos el random de 0 a la diferencia y le sumamos el minimo
	return random;
}

int main()
{
	int min, max, random; //Creamos variables min, max y random

	printf("Dime un numero minimo: \n");
	scanf("%d", &min); //Pedimos un minimo
	do
	{
		printf("Dime un numero maximo: \n");
		scanf("%d", &max); //Pedimos un maximo
	} while (max <= min); //Nos aseguramos que el valor que nos da es mayor que el minimo


	random = range(min, max);//Pedimos el valor random
	printf("El numero random es: %d", random);//Imprimimos el valor random

}