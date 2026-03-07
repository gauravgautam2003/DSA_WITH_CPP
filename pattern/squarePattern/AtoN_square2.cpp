#include <iostream>
using namespace std;

// A B C
// B C D
// C D E

// i+j+'A'-2

int main(){
    int n;
    cout << "Enter n :";
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            char ch = i + j + 'A' - 2;
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}