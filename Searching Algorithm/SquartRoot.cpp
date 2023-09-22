#include <iostream>
using namespace std;

int mySqrt(int x)
{

    int start = 0;
    int end = x;
    int mySqrt = -1;

    while (start <= end)
    {
        long long int mid = start + (end - start) / 2;
        // check if mid itself is an answer
        if (mid * mid == x)
        {
            return mid;
        }
        else if (mid * mid < x)
        {
            // if mid * mid is less than x(number)
            // then store answer and check in right side of an array
            mySqrt = mid;
            start = mid + 1;
        }
        else
        {
            // if mid * mid is greater than x(number)
            // check in left side of an array
            end = mid - 1;
        }
    }
    return mySqrt;
}

int main()
{

    int x;
    cout << "Please enter your value : ";
    cin >> x;
    cout << "SQRT of " << x << " is : " << mySqrt(x) << endl;

    return 0;
}

/**
Square Root of Number by Binary Search

Time Complexity :  O(log n)
Space Complexity : O(1)

*/