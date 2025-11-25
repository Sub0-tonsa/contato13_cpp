/*
	Name: P1-ex4.cpp
	Author: Giovanni Tonsa
	Date: 25/11/25 10:59
	Description: resolução do 4° exercico da P1
*/

# include <stdio.h>

main()
{
	int x, b, pim, i, cont;
	x = 0; b = 3; pim = 25;
	
	for(i = 4; b < pim; i = i +1)
	{
		x = x + i;
		b = b + 2;
		pim = pim - x;
		cont++;
	}
	printf("x: %d", x);
	printf("\nb: %d", b);
	printf("\npim: %d", pim);
	printf("\nQtas vezes passou no laco: %d", cont);
}

