#include <iostream>
using namespace std;

// 1 2 3 4
//   2 3 4 
//     3 4
//       4 

int main(){
    int n;
    cout << "Enter n :";
    cin >> n;

    int i = 1;
    while(i <= n){
        //print spaces
        int j = 1;
        while(j < i){
            cout << "   ";
            j++;
        }

        // print starts
        int start = n;
        int num = i;
        while(start >= i){
            cout << (num) << "  ";
            start--;
            num++;
        }
        cout << endl;
        i++;
    }
    return 0;
}