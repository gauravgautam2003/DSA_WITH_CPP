#include <iostream>
using namespace std;

// 1  2  3  4  4  3  2  1  
// 1  2  3  *  *  3  2  1
// 1  2  *  *  *  *  2  1
// 1  *  *  *  *  *  *  1

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        // print 1st triangle of number
        for(int j = 1; j <= n - i + 1; j++){
            cout << j << "  ";
        }
        // print 2st triangle of stars
        for(int j = 1; j <= i-1; j++){
            cout << "*  ";
        }
        // print 3st triangle of stars
        for(int j = 1; j <= i-1; j++){
            cout << "*  ";
        }
        // print 4st triangle of reverse number
        for(int j = n - i + 1; j  >= 1; j--){
            cout << j << "  ";
        }
        cout << endl;
    }
    return 0;
}