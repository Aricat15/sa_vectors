#ifndef COMPUTE_MEDIAN_H
#define COMPUTE_MEDIAN_H

#include <iostream>

/**
 * Read a series of non-negative numbers from in, placing them into
 * numbers in ascending order.  Input ends at the first negative value.
 * 
 * @param in the input stream from which to read
 * @param numbers the sequence of numbers that have been read,
 *                sorted into ascending order
 * @param N the number of numbers read in.
 */
void read (std::istream& in, double* numbers, int& N);


/**
 * Compute the median average of a sorted sequence of numbers.
 * 
 * @param numbers the sequence of numbers
 * @param N the number of numbers in the sequence
 */
double computeMedian (const double* numbers, int N);


#endif

