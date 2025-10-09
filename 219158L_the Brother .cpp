/*Given two person names.

Each person has {"the first name" + "the second name"}

Determine whether they are brothers or not.

Note: The two persons are brothers if they share the same second name.

Input
First line will contain two Strings F1, S1 which donates the first and second name of the 1st person.

Second line will contain two Strings F2, S2 which donates the first and second name of the 2nd person.

Output
Print "ARE Brothers" if they are brothers otherwise print "NOT".

Examples
InputCopy
bassam ramadan
ahmed ramadan
Output
ARE Brothers
Input
ali salah
ayman salah
OutputCopy
ARE Brothers
Input
ali kamel
ali salah
Output
NOT

*/
#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main()
{
    string F1, S1;
    cin >> F1 >> S1;
    string F2, S2;
    cin >> F2 >> S2;
    if (S1 == S2)
    {
        cout << "ARE Brother" << endl;
    }
    else
    {
        cout << "NOT" << endl;
    }
}