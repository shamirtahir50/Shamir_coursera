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
 * @file stats.h
 * @brief Function declarations for statistical analysis
 *
 * This header file contains declarations for functions used to perform
 * statistical analysis on data.
 *
 * @author Shamir Tahir
 * @date 19/02/24
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints statistics of an array including minimum, maximum, mean, and median
 *
 * This function takes an array of unsigned char data items and its length,
 * then prints the minimum, maximum, mean, and median of the data set.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 */
void print_statistics(unsigned char *array, unsigned int size);

/**
 * @brief Prints an array of data to the screen
 *
 * This function takes an array of unsigned char data items and its length,
 * then prints the array to the screen.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 */
void print_array(unsigned char *array, unsigned int size);

/**
 * @brief Finds the median value of an array
 *
 * This function takes an array of unsigned char data items and its length,
 * then returns the median value.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 * @return Median value of the array
 */
unsigned char find_median(unsigned char *array, unsigned int size);

/**
 * @brief Finds the mean value of an array
 *
 * This function takes an array of unsigned char data items and its length,
 * then returns the mean value.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 * @return Mean value of the array
 */
unsigned char find_mean(unsigned char *array, unsigned int size);

/**
 * @brief Finds the maximum value of an array
 *
 * This function takes an array of unsigned char data items and its length,
 * then returns the maximum value.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 * @return Maximum value of the array
 */
unsigned char find_maximum(unsigned char *array, unsigned int size);

/**
 * @brief Finds the minimum value of an array
 *
 * This function takes an array of unsigned char data items and its length,
 * then returns the minimum value.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 * @return Minimum value of the array
 */
unsigned char find_minimum(unsigned char *array, unsigned int size);

/**
 * @brief Sorts an array from largest to smallest
 *
 * This function takes an array of unsigned char data items and its length,
 * then sorts the array from largest to smallest.
 *
 * @param array Pointer to the data array
 * @param size Size of the array
 */
void sort_array(unsigned char *array, unsigned int size);

#endif /* __STATS_H__ */
