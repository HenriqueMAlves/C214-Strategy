#include <stdio.h>
#include <stdint.h>
#include "BubbleSort.h"
#include "Main.h"
#include "Utils.h"
#include "QuickSort.h"
#include "InsertionSort.h"

typedef void algorithmType(int16_t* data, uint16_t len);

algorithmType *sort[NUM_MAX_ALGORITHM] = {
	bubbleSortConstructor,
	insertionSortConstructor,
	quickSortConstructor
};

#ifndef TEST //Necess�rio para utilizar o ceedling
int main(void)
{
	uint8_t selectedAlgorithm = QUICK_SORT;
	uint8_t i;
    int16_t numbers[6] = { 5, 3, 2, 4, 0, 1 };
    int16_t letters[6] = { 'F', 'Z', 'K', 'B', 'S', 'H'};

    sort[selectedAlgorithm](letters, 6);

    printf("\n\nresult --> ");
    for(i=0; i<6; i++)
		  printf(DATATYPE, letters[i]);

    return 0;
}
#endif
