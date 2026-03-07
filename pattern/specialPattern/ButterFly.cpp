#include <iostream>
using namespace std;

//  *                    * 
//  *  *              *  * 
//  *  *  *        *  *  * 
//  *  *  *  *  *  *  *  * 
//  *  *  *  *  *  *  *  * 
//  *  *  *        *  *  * 
//  *  *              *  * 
//  *                    *

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;

    for(int i = 1; i <= n; i++){
        // print 1st triangle of number
        for(int j = 1; j <= i; j++){
            cout <<" * ";
        }
        // print 2st triangle of stars
        for(int j = 1; j <= n - i; j++){
            cout << "   ";
        }
        // print 3st triangle of stars
        for(int j = 1; j <= n - i; j++){
            cout << "   ";
        }
        // print 4st triangle of reverse number
        for(int j = 1; j <= i; j++){
            cout <<" * ";
        }
        cout << endl;
    }
    for(int i = 1; i <= n; i++){
        // print 1st triangle of number
        for(int j = n - i + 1; j >= 1 ; j--){
            cout <<" * ";
        }
        // print 2st triangle of stars
        for(int j = 1; j <= i - 1; j++){
            cout << "   ";
        }
        // print 3st triangle of stars
        for(int j = 1; j <= i - 1; j++){
            cout << "   ";
        }
        // print 4st triangle of reverse number
        for(int j = 1; j <= n - i + 1; j++){
            cout <<" * ";
        }
        cout << endl;
    }
    return 0;
}