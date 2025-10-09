/*
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
InputCopy
ApPLe
OutputCopy
ApPLe
InputCopy
konjac
OutputCopy
Konjac
*/ 
#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main()
{
    string word;
    cin>> word;
    for(int i=0 ; i<word.length() ; i++)
    {
        if( isupper(word[0]))
        {
            cout<<word<<endl;
            break;
        }
    }
    for(int j=0 ; j<word.length() ; j++)
    {
        if(islower(word[0]))
        {
            char y=(toupper(word[0]));
            cout<<y<<word.substr(1)<<endl;
            break;
        }
    }
    
}