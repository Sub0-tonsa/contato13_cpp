/*
	Name: P1-ex1.cpp
	Author: Giovanni Tonsa
	Date: 25/11/25 09:44
	Description: Correção do primeiro exercício da primeira avaliação
*/

# include <stdio.h>

main()
{
	float altAZ, larAZ, altPA, larPA;
	int qtdAZ = 0;
	float areaAZ, areaPA;
	altAZ = larAZ = altPA = larPA = 0.0;
	areaAZ = areaPA = 0.0;
	
	// Azulejo - medida em centímetros
	printf("Altura do Azulejo: ");
	scanf("%f", &altAZ);
	printf("Largura do Azulejo: ");
	scanf("%f", &larAZ);
	areaAZ = (altAZ / 100) * (larAZ / 100);
	
	// Parede - medida em metros
	printf("Altura da parede: ");
	scanf("%f", &altPA);
	printf("Largura da parede: ");
	scanf("%f", &larPA);
	areaPA = altPA * larPA;
	
	// conversão
	//areaPA = areaPA * 10000;
	
	// Quantidade de Azulejo
	qtdAZ = areaPA / areaAZ;
	printf("Para revestir uma parede de %.1f X %.1f serao necessarios %d de azulejos", altPA , larPA , qtdAZ);
	
}
