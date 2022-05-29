#include <stdio.h>
#include <stdint.h>
#include "BubbleSort.h"
#include "Main.h"

void bubbleSortContructor(int16_t* data, uint16_t len)
{
	printf("Bubble Sort selected...\n");
	bubbleSort(data, len);
}

void bubbleSort(int16_t* data, uint16_t len) 
{
    uint16_t i, j, aux;

    for(i = 1; i < len; i++) 
    {
        printf("\n[%d] ", i);

        for(j = 0; j < len - 1; j++) 
        {

            if(data[j] > data[j + 1]) 
            {
                aux = data[j];
                data[j] = data[j + 1];
                data[j + 1] = aux;
            }
            printf(DATATYPE, data[j]);
            printf(", ");
        }
        printf(DATATYPE, data[j]);
    }
}