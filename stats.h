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

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Add Brief Description of Function Here>
 *
 * <Add Extended Description Here>
 *
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 * @param <Add InputName> <add description here>
 *
 * @return <Add Return Informaiton here>
 */


/**
 * This function just find a max element of array "array" with "size" elements
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Max element of given array
 */
unsigned char find_maximum(unsigned char *array, uint size);


/**
 * This function just find a min element of array "array" with "size" elements
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Min element of given array
 */
unsigned char find_minimum(unsigned char *array, uint size);


/**
 * This function just find a mean value of array "array" with "size" elements
 * 
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 * 
 * @return       Mean value of given array which is rounded to the nearest integer
 */
unsigned char find_mean(unsigned char *array, uint size);


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
unsigned char find_median(unsigned char *array, uint size);


/**
 * This function prints to terminal the statistics of an array "array" including 
 * minimum, maximum, mean, and median
 *
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 */
void print_statistics(unsigned char *array, uint size);


/**
 * This function prints array "array" to terminal
 *
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 */
void print_array(unsigned char *array, uint size);


/**
 * This function sorts array "array" from the largest to the smallest element.
 * It means that 	array[0] = the largest
 * 					array[size-1] = the smallest
 *
 * @param  array Pointer to first element of array of unsigned char type
 * @param  size  Amount of elements in array
 */
void sort_array(unsigned char *array, uint size);

#endif /* __STATS_H__ */
