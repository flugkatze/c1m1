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
 * @file <stats.c> 
 * @brief <Functions that can analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set. >
 *
 * <Add Extended Description Here>
 *
 * @author <Yuxiang Zhao>
 * @date <2019-05-06>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */
  print_statistics(test, SIZE);
  print_array(test, SIZE);

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char array[],unsigned int size) {
	unsigned char median = find_median(array,size);
	unsigned char mean = find_mean(array,size);
	unsigned char maximum = find_maximum(array,size);
	unsigned char minimum = find_minimum(array,size);
	printf("The median is: %d\n",median);
	printf("The mean is: %d\n",mean);
	printf("The maximum is: %d\n",maximum);
	printf("The minimum is: %d\n",minimum);
}
void print_array(unsigned char array[],unsigned int size) {
	int i;
	for(i = 0; i < size; i++){
		printf("%d\n",array[i]);
	}
}
unsigned char find_median(unsigned char array[], unsigned int size) {
	sort_array(array,size);
	return(array[size/2]);
}
unsigned char find_mean(unsigned char array[], unsigned int size) {
	int i;
	unsigned int sum = 0;

	for (i = 0; i < size; i++){
		sum += array[i];
	}
	return(sum/size);
}
unsigned char find_maximum(unsigned char array[], unsigned int size) {
	sort_array(array,size);
	return(array[0]);
}
unsigned char find_minimum(unsigned char array[], unsigned int size) {
	sort_array(array,size);
	return(array[size-1]);
}
void sort_array(unsigned char a[],unsigned int len) {
	//Implement Bubble sort
	int i = 0, j = 0, tmp;
	for (i = 0; i < len; i++) {
	     for (j = 0; j < len - i - 1; j++) {
	         if (a[j] < a[j + 1]) { 
	             tmp = a[j];
	             a[j] = a[j + 1];
	             a[j + 1] = tmp;
	          }
	     }
	}
}
