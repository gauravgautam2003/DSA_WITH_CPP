#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter the value of n : ";
    cin >> n;

    int ans = 0;
    int place = 1;
    // if n=5
    while(n != 0){ // 5, 2, 1, 0 => false print ans
        int bit = n & 1; // 1, 0 ,1
        ans = ans + bit*place; // 0+1*1=1, 1+0*10=1, 01 + 1*100 = 101
        place = place*10; // 10, 100, 1000
        n = n >> 1;// 2, 1, 0
        
    }

    cout << "Answer is :" << ans << endl; // 101
} 