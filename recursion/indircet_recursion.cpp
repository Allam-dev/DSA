// WAP to print numbers from 1 to 10 in such a way that when number is odd, add 1 and when number is even, subtract 1.

// WAP = write a program

// =====================================
// indircet recursion :
// A function(let say fun) is called indirect recursive if it calls another
// function(let say fun2) and then fun2 calls fun directly or indirectly.
// =====================================

#include <iostream>

using namespace std;

void foor_loop_solution();
void odd(int);
void even(int);
int main()
{
    cout << "-- foor loop solution\n";
    foor_loop_solution();
    cout << endl;

    cout << "-- indirect recursion start with odd\n";
    odd(1);
    cout << endl;

    cout << "-- indirect recursion start with even\n";
    even(1);

    return 0;
}

void foor_loop_solution()
{
    for (int i = 1; i < 11; i++)
    {
        if (i % 2 == 0)
            cout << i - 1 << '\t';
        else
            cout << i + 1 << '\t';
    }
}

void odd(int n)
{
    if (n <= 10)
    {
        cout << n + 1 << '\t';
        even(++n);
    }
    return;
}

void even(int n)
{
    if (n <= 10)
    {
        cout << n - 1 << '\t';
        odd(++n);
    }
    return;
}