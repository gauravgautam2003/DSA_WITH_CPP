#include <iostream>
using namespace std;

// A B C D 
// E F G H
// I J K L
// M N O P

int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;

    char ch = 'A';
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }
    return 0;
}