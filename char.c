#include <stdio.h>
#include <stdlib.h>

//BUBBLE SORT ALGORITHM characters.

void sort(char array[], int size) {
    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size -1; j++ ) {
            if(array[j] > array[j+1]) {
                char temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

void print_array(char array[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%c ", array[i]);
    }
}