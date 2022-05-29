#include <stdio.h>
#include <stdint.h>
#include "InsertionSort.h"
#include "Main.h"

void insertionSortConstructor(int16_t* data, uint16_t len)
{
	printf("Insertion Sort selected...\n");
	insertionSort(data, len);
}

void insertionSort(int16_t* data, uint16_t len)
{
	uint16_t i, k; 
	int16_t j;
	int16_t aux = 0;
	
	for (i = 1; i < len; i++)
	{
		aux = data[i];
		j = i-1;
		
		while ((j >= 0) && (aux < data[j]))
		{
		    data[j+1] = data[j];
		    data[j] = aux;
		    j--;
		}
		
		printf("[%d] ", i);
		for(k=0; k<len; k++)
		{
			printf(DATATYPE, data[k]);
			printf(" ");
		}
		printf("\n"); 
	}
}