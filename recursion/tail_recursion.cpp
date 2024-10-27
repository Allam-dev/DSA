// tail recursion:
// A recursive function is said to be tail recursive
// ⚠️ if the recursive call is the last thing done by the function.
// ⚠️  There is no need to keep record of the previous state.

// non-tail recursion:
// A recursive function is said to be non - tail recursive if the recursive call is not the
// last thing done by the function.After returning back, there is some something left to evaluate.


#include<iostream>
using namespace std;

// Non-tail recursive function to calculate factorial
int factorial(int n)
{
    if (n == 0 || n == 1)
        return 1;

    // The recursive call isn't the last operation
    // There's a multiplication after the recursive call returns
    return n * factorial(n - 1);
}

// Tail recursive version of factorial
int factorialTail(int n, int accumulator = 1)
{
    if (n == 0 || n == 1)
        return accumulator;

    // The recursive call is the last operation
    // No pending operations after recursion
    return factorialTail(n - 1, n * accumulator);
}

// Non-tail recursive function to calculate sum of digits
int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    // Addition happens after recursive call returns
    return (n % 10) + sumOfDigits(n / 10);
}

// Tail recursive version of sum of digits
int sumOfDigitsTail(int n, int sum = 0)
{
    if (n == 0)
        return sum;

    // Recursive call is the last operation
    return sumOfDigitsTail(n / 10, sum + (n % 10));
}


int main(){
    cout << factorialTail(5) << endl;
}