#include <array>
#include <algorithm>
#include <iostream>
#include <vector>

#include "computeMedian.h"
#include "ordering.h"

using namespace std;


/**
 * Read a series of non-negative numbers from in, placing them into
 * numbers in ascending order.  Input ends at the first negative value.
 * 
 * @param in the input stream from which to read
 * @param numbers the sequence of numbers that have been read,
 *                sorted into ascending order
 * @param N the number of numbers read in.
 */
void read (std::istream& in, double* numbers, int& N)
{
    N = 0;
    double d = 0.0;
    while (true)
    {
        in >> d;
        if (d < 0.0) break;
        numbers[N] = d;
        ++N;
        shiftIntoPosition(numbers, numbers+N);
    }
}


/**
 * Compute the median average of a sorted sequence of numbers.
 * 
 * @param numbers the sequence of numbers
 * @param N the number of numbers in the sequence
 */
double computeMedian (const double* numbers, int N)
{
    if (N % 2 == 0)
    {
        int mid = N / 2;
        return (numbers[mid-1] + numbers[mid]) / 2.0;
    }
    else
    {
        return numbers[N / 2];
    }
}
