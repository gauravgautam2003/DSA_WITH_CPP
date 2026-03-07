#include <iostream>
using namespace std;

// A B C D 
// A B C D 
// A B C D 
// A B C D 

int main(){
    int n;
    cout << "Enter n :";
    cin >> n;

    int i = 1;
    while(i <= n){
        char ch = 'A';
        int j = 1;
        while(j <= n){
            cout << ch << " ";
            ch = ch + 1;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}