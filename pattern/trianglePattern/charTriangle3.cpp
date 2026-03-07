#include<iostream>
using namespace std;

// A  
// B  C  
// D  E  F  
// G  H  I  J  

int main(){

    int n; 
    cout << "Enter n : ";
    cin >> n;

    char ch = 'A';
    for(int i = 1; i <= n;i++){
        for(int j = 1; j <= i; j++){
            cout << ch << "  ";
            ch += 1;
        }
        cout << endl;
    }
    return 0;
}