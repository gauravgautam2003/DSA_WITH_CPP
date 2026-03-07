#include<iostream>
using namespace std;

// A
// A B
// A B C
// A B C D

int main(){

    int n; 
    cout << "Enter n : ";
    cin >> n;

    for(int i = 1; i <= n;i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++){
            cout << ch << "  ";
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}