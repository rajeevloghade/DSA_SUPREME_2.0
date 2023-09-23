#include <iostream>
using namespace std;

int getQuotient(int divisor, int dividend)
{

    int start = 0;
    int end = dividend; // search space till dividend
    int quotient = -1;

    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        // (divisor * quotient + remainder == dividend)
        // (divisor * quotient < dividend) (remainder is not into the picture)
        if (divisor * mid == dividend)
        {
            return mid;
        }
        else if (divisor * mid < dividend)
        {
            // store quotient and then check in right side of an array
            quotient = mid;
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return quotient;
}

int main()
{
    int divisor = 8;
    int dividend = 65;

    int quotient = getQuotient(abs(divisor), abs(dividend));

    // if any of these is negative number
    if ((divisor < 0 && dividend > 0) || (divisor > 0 && dividend < 0))
    {
        quotient = 0 - quotient;
    } // if any of these is zero number
    else if ((divisor == 0) || (dividend == 0))
    {
        quotient = 0;
    }
    cout << "Quotient is : " << quotient << endl;
    return 0;
}

/**
Get Quotient by Binary Search

Time Complexity :  O(log n) (n is dividend here)
Space Complexity : O(1)

*/