#include "unittest.h"
#include "ordering.h"
#include <array>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>

#include "computeMedian.h"

using namespace std;


UnitTest(testRead) {
    string input ("12 4.0 7.5 -1.0 ");
    istringstream in (input);

    double nums[8];
    int N = 5;
    read (in, nums, N);

    assertThat (N, isEqualTo(3));
    assertThat (nums[0], isEqualTo(4.0));
    assertThat (nums[1], isEqualTo(7.5));
    assertThat (nums[2], isEqualTo(12));
}

UnitTest(testMedianOdd) {
    double input[] = {2.0, 4.0, 6.0, 8.0, 10.0};

    assertThat (computeMedian(input, 5), isEqualTo(6.0));
}

UnitTest(testMedianEven) {
    double input[] = {2.0, 4.0, 6.0, 8.0, 10.0, 12.0};

    assertThat (computeMedian(input, 6), isEqualTo(7.0));
}
