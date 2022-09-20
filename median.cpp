#include <iostream>
#include <vector>

#include "computeMedian.h"

using namespace std;



void promptAndRead (double* numbers, int& N)
{
    cout << "Enter one or more non-negative floating point numbers, separated by blanks.\n";
    cout  << "Indicate the end of the list by entering a negative value.\n";
    cout << "Numbers? " << flush;
    read (cin, numbers, N);
}

int main (int argc, char** argv)
{
    double numbers[8];
    int N = 0;
    promptAndRead(numbers, N);
    double median = computeMedian(numbers, N);
    cout << "The median average of these numbers is " << median << endl;
    return 0;
}

