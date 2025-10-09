/*
For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)nn

Your task is to calculate f(n) for a given integer n.

Input
The single line contains the positive integer n (1 ≤ n ≤ 1015).

Output
Print f(n) in a single line.

Examples
Input
4
Output
2
Input
5
Output
-3
Note
f(4) =  - 1 + 2 - 3 + 4 = 2

f(5) =  - 1 + 2 - 3 + 4 - 5 =  - 3

*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    // int x = -1 + 2 - 3 + pow(-1, y) * y;
    for (long long i = 1; i < n + 1; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        else
        {
            sum -= i;
        }
    }
    cout << sum << endl;
}