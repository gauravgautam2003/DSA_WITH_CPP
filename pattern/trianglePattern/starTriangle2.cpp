#include <iostream>
using namespace std;

//       * 
//     * *
//   * * *
// * * * *

int main(){
    int n;
    cout << "Enter n :";
    cin >> n;

    int i = 1;
    while(i <= n){
        //print spaces
        int j = n;
        while(j > i){
            cout << "   ";
            j--;
        }

        // print starts
        int start = 1;
        while(start <= i){
            cout << " * ";
            start++;
        }
        cout << endl;
        i++;
    }
    return 0;
}