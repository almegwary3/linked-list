/*

Given a number N
. Print "I love Recursion" N
 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number N
 (1≤N≤100)
 .

Output
Print "I love Recursion" N
 times.

Example
Input
3
Output
I love Recursion
I love Recursion
I love Recursion

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