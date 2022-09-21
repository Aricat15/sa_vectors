#include <iostream>
#include <vector>

#include "computeMedian.h"

using namespace std;



void promptAndRead (vector<double>& numbers)
{
    cout << "Enter one or more non-negative floating point numbers, separated by blanks.\n";
    cout  << "Indicate the end of the list by entering a negative value.\n";
    cout << "Numbers? " << flush;
    read (cin, numbers);
}

int main (int argc, char** argv)
{
   vector<double> numbers;
    promptAndRead(numbers);
    double median = computeMedian(numbers);
    cout << "The median average of these numbers is " << median << endl;
    return 0;
}

