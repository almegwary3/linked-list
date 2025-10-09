/*Given a number X. Determine in which of the following intervals the number X belongs to:

[0,25], (25,50], (50,75], (75,100]

Note:

if X belongs to any of the above intervals print "Interval " followed by the interval.
if X does not belong to any of the above intervals print "Out of Intervals".
The symbol '(' represents greater than.
The symbol ')' represents smaller than.
The symbol '[' represents greater than or equal.
The symbol ']' represents smaller than or equal.
For example:

[0,25] indicates numbers between 0 and 25.0000, including both.

(25,50] indicates numbers greater than 25: (25.00001) up to 50.0000000.

Input
Only one line containing a number X ( - 1000 ≤ X ≤ 1000).

Output
Print the answer to the problem above.

Examples
Input
25.1
Output
Interval (25,50]
Input
25.0
Output
Interval [0,25]
Input
100.0
Output
Interval (75,100]
Input
-25.2
Output
Out of Intervals*/

#include <iostream>
using namespace std;

// int main()
// {
//     double X;
//     cin >> X;

//     if (X >= 0 && X <= 25)
//     {
//         cout << "Interval [0,25]" << endl;
//     }
//     else if (X > 25 && X <= 50)
//     {
//         cout << "Interval (25,50]" << endl;
//     }
//     else if (X > 50 && X <= 75)
//     {
//         cout << "Interval (50,75]" << endl;
//     }
//     else if (X > 75 && X <= 100)
//     {
//         cout << "Interval (75,100]" << endl;
//     }
//     else
//     {
//         cout << "Out of Intervals" << endl;
//     }

//     return 0;
// }
int add(int num)
{
  if(num==0)
  {
  return 0;
  }
  return num + add(num-1);
}

int main()
{
    int a;
    cin>>a;
   cout<< add(a);
    return 0;
}