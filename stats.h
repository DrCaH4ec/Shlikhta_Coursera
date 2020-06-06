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
 * @file 	stat.h
 * @brief 	Header file for first assesment task on course
 *
 * 	This file consis of declaration and documentation of functions 
 * 	which are using in this "project".
 *
 * @author 	Alexandr Shlikhta
 * @date 	Jun 04 2020
 *
 */
#ifndef __STATS_H__
#define __STATS_H__
 

/**
 * This function just find a max element of array "array" with "size" elements
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Max element of given array
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);


/**
 * This function just find a min element of array "array" with "size" elements
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Min element of given array
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);


/**
 * This function just find a mean value of array "array" with "size" elements
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Mean value of given array which is rounded to the nearest integer
 */
unsigned char find_mean(unsigned char *array, unsigned int size);


/**
 * This function just find a median of array "array" with "size" elements.
 * If "size" is paired and median isn't integer -> median will be rounded to
 * nearest integer
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Median of given array which is rounded to the nearest integer
 */
unsigned char find_median(unsigned char *array, unsigned int size);


/**
 * This function prints to terminal the statistics of an array "array" including 
 * minimum, maximum, mean, and median
 *
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 */
void print_statistics(unsigned char *array, unsigned int size);


/**
 * This function prints array "array" to terminal
 *
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 */
void print_array(unsigned char *array, unsigned int size);


/**
 * This function sorts array "array" from the largest to the smallest element.
 * It means that 	array[0] = the largest
 * 		        array[size-1] = the smallest
 *
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 */
void sort_array(unsigned char *array, unsigned int size);


/**
 * This function compares 2 arguments and set any_val to one of three states
 *         x1 < x2 -> any_val < 0
 *         x1 = x2 -> any_val = 0
 *         x1 > x2 -> any_val > 0
 * @param  x1 First argument to compare
 * @param  x2 Second argument to compare
 * @return    any_val
 */
int compare(const void * x1, const void * x2);

#endif /* __STATS_H__ */
