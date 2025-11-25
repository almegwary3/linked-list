/*
Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
Input
5
Output
1
2
3
4
5

*/
#include <iostream>
using namespace std;

void return_word(int N)
{
    if (N == 0)
    {
        return;
    }

    return_word(N - 1);
    cout << N << endl;
}

int main()
{
    int N;
    cin >> N;

    return_word(N);
    return 0;
}