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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param the array of data and length
 * @return Null
 */
void print_statistics(unsigned char array[],unsigned int length);
/**
 * @brief A function that prints the array to the screen.
 *
 * @param the array of data and length
 * @return Null
 */
void print_array(unsigned char array[], unsigned int length);
/**
 * @brief Given anrray of data and a length, returns the median value.
 *
 * @param the array of data and length
 * @return an unsigned char result of median value
 */
unsigned char find_median(unsigned char array[], unsigned int length);
/**
 * @brief Given anrray of data and a length, returns the mean value.
 *
 * @param the array of data and length
 * @return an unsigned char result of mean value
 */
unsigned char find_mean(unsigned char array[], unsigned int length);
/**
 * @brief Given anrray of data and a length, returns the maximum value.
 *
 * @param the array of data and length
 * @return an unsigned char result of maximum value
 */
unsigned char find_maximum(unsigned char array[], unsigned int length);
/**
 * @brief Given anrray of data and a length, returns the minimum value.
 *
 * @param the array of data and length
 * @return an unsigned char result of minimum value
 */
unsigned char find_minimum(unsigned char array[], unsigned int length);
/**
 * @brief Given anrray of data and a length, sorts the arrya from largest to smallest.
 *
 * @param the array of data and length
 * @return Null
 */
void sort_array(unsigned char array[], unsigned int length);

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


#endif /* __STATS_H__ */
