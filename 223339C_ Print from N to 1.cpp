/*
Given a number N. Print all numbers from N to 1 separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
Input
4
Output
4 3 2 1
Note
Make sure don't print any leading or trailing spaces.

*/
#include <iostream>
using namespace std;

void return_word(int N)
{
    if (N == 0)
    {
        return;
    }

    cout << N ;
     if (N > 1)
        cout << " ";
    return_word(N - 1);
}

int main()
{
    int N;
    cin >> N;

    return_word(N);
    return 0;
}