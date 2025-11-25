/*
	Name: P1-ex3.cpp
	Author: Giovanni Tonsa
	Date: 25/11/25 10:32
	Description: Resolução do 3° exercicio da P1
*/

# include <stdio.h>

main()
{
	int contAl, contT;
	contAl = contT = 0;
	float nota, mediaT, somaNotas;
	
	do
	{
		printf("\n\nCalculo da media da Turma: %d\n", contT + 1);
		puts("=================================");
		somaNotas = 0;
		mediaT = 0.0;
		contAl = 0;
		while(contAl < 5)
		{
			contAl++;
			printf("Nota %d do Aluno: ", contAl);
			scanf("%f", &nota);
			somaNotas = somaNotas + nota;
		}
		mediaT = somaNotas / contAl;
		printf("\nMedia da turma: %.2f", mediaT);
		
	contT++;
	}while(contT < 3);
}

