#include <stdio.h>
#include <stdlib.h>

//BUBBLE SORT ALGORITHM integers.

void sort(int array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size -1; j++ ) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void print_array(int array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
}