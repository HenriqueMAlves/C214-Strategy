#include <stdio.h>
#include <stdint.h>
#include "InsertionSort.h"
#include "Main.h"

/*********************************************************************************
 * Adapta a função de ordenação para o formato de "algorithmType"
 * 
 * @param data: ponteiro para o buffer que deve ser ordenado
 * @param len: Tamanho do buffer que será ordenado
 ********************************************************************************/
void insertionSortContructor(int16_t* data, uint16_t len)
{
	printf("Insertion Sort selected...\n");
	insertionSort(data, len);
}

/*********************************************************************************
 * Ordena um vetor de inteiros ou caracteres utilizando o algoritmo insertion sort
 * 
 * @param data: ponteiro para o buffer que deve ser ordenado
 * @param len: Tamanho do buffer que será ordenado
 ********************************************************************************/
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