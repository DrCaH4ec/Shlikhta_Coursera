/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file 	stats.c
 * @brief 	C-file for first assesment task on course
 *
 * This file should solve next tasks:
 *
 * 	- Find:
 * 		Maximum
 * 	 	Minimum
 * 	  	Mean
 * 	  	Median
 *  - Sort array
 *  - Print array
 *  - Print statistics(print all subparagraphs from Find)
 *
 * @author 	Alexandr Shlikhta
 * @date 	Jun 04 2020
 *
 */



#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

int main(void) {

        unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                      114, 88,   45,  76, 123,  87,  25,  23,
                                      200, 122, 150, 90,   92,  87, 177, 244,
                                      201,   6,  12,  60,   8,   2,   5,  67,
                                        7,  87, 250, 230,  99,   3, 100,  90};


        printf("\nUnsorted array\n");
        printf("##############\n\n");
        print_array(test, SIZE);
        printf("\nSorted array\n");
        printf("############\n\n");
        sort_array(test, SIZE);
        print_array(test, SIZE);

        printf("\n");
        print_statistics(test, SIZE);                                

        return 0;
}

void print_array(unsigned char *array, unsigned int size)
{
        for(unsigned int i = 0; i < size; ++i)
                printf("%d'th element is \t%d\n", i, array[i]);
}


int compare(const void * x1, const void * x2)
{
        return ( *(unsigned char*)x1 - *(unsigned char*)x2 );
}


void sort_array(unsigned char *array, unsigned int size)
{
        qsort(array, size, sizeof(unsigned char), compare);
}


unsigned char find_maximum(unsigned char *array, unsigned int size)
{
        unsigned char max = array[0];

        while(size > 0)
                if(array[--size] > max)
                        max = array[size];

        return max;
}


unsigned char find_minimum(unsigned char *array, unsigned int size)
{
        unsigned char min = array[0];

        while(size > 0)
                if(array[--size] < min)
                        min = array[size];

        return min;
}


unsigned char find_mean(unsigned char *array, unsigned int size)
{
        long sum = 0;
        unsigned int tmp_size = size;

        while(tmp_size > 0)
                sum += array[--tmp_size];

        return round((double)sum / (double)size);
}


unsigned char find_median(unsigned char *array, unsigned int size)
{
        unsigned char *tmp_arr = malloc(sizeof(unsigned char) * size);
        unsigned char res;

        for(unsigned int i = 0; i < size; ++i)
                tmp_arr[i] = array[i];

        sort_array(tmp_arr, size);

        if(size%2 != 0)
                res = tmp_arr[size / 2 - 1];
        else
                res = round((double)(tmp_arr[size / 2] + tmp_arr[size / 2 - 1]) / 2.0);

        free(tmp_arr);

        return res;
}


void print_statistics(unsigned char *array, unsigned int size)
{
        
        printf("---------STATISTICS---------\n");
        printf("############################\n");
        printf("Max of array is \t%d\n", find_maximum(array, size));
        printf("Min of array is \t%d\n", find_minimum(array, size));
        printf("Mean of array is \t%d\n", find_mean(array, size));
        printf("Median of array is \t%d\n", find_median(array, size));
        printf("############################\n");
}