// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     string w;
//     cin >> w;
//      w[0]=toupper(w[0]);

//     for (int i = 1 ; i < w.length() ; i++ ){

//         if(isupper(w[i]))
//         {
//             w[i] = tolower(w[i]);
//         }

//     }

//     cout << w;
// }
#include <bits/stdc++.h>
using namespace std;

int main(){
    string w;
    cin >> w;

    int i;

    for(i = 1; i < w.length(); i++){
        if(islower(w[i])){
            break;
        }
    }

    if(i == w.length()){
        for(int j = 0; j < w.length(); j++){
            if(isupper(w[j]))
                w[j] = tolower(w[j]);
            else
                w[j] = toupper(w[j]);
        }
    }

    cout << w;
}