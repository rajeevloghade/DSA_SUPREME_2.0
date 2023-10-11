#include <iostream>
using namespace std;

int factorial(int number) {

  // base case
  if (number == 0 || number == 1)
    return 1;

  // recursive call
  return number * factorial(number - 1);
}
void printCounting(int number) {

  // base case
  if (number == 1) {
    cout << 1 << " ";
    return;
  }
  cout << number << " ";
  // recursive call
  printCounting(number - 1);
}

int powerFunction(int number) {
  // base case
  if (number == 0)
    return 1;
  // recursive call
  return 2 * powerFunction(number - 1);
}

int getSum(int number) {
  // base case
  if (number == 1) {
    return 1;
  }
  return number + getSum(number - 1);
}

int fibonacci(int number) {

  // base case
  if (number == 0)
    return 0;
  if (number == 1)
    return 1;

  // recursive call
  return fibonacci(number - 1) + fibonacci(number - 2);
}

int climbingStairs(int number) {

  // base case
  if (number == 1)
    return 1;
  if (number == 2)
    return 2;

  // recursive call
  return climbingStairs(number - 1) + climbingStairs(number - 2);
}
int main() {
  int number;
  cout << "Please enter number: ";
  cin >> number;

  cout << "Factorial of " << number << " is : " << factorial(number) << endl
       << endl;

  cout << "printCounting : ";
  printCounting(number);
  cout << endl << endl;

  cout << "Power of 2^" << number << " is : " << powerFunction(number) << endl
       << endl;

  cout << "Sum of " << number << " till 1 is : " << getSum(number) << endl
       << endl;

  cout << "Fibonacci of " << number << " is : " << fibonacci(number) << endl
       << endl;

  cout << "Climbing stairs of " << number << " is : " << climbingStairs(number)
       << endl
       << endl;

  return 0;
}