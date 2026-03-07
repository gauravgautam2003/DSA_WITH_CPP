#include<iostream>
using namespace std;

// 1
// 1 2
// 1 2 3
// 1 2 3 4

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    int i = 0;
    while(i < n){
        int j = 0;
        while(j <= i){
            cout << (j + 1) << "  ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}