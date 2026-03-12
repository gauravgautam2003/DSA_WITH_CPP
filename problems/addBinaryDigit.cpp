#include<iostream>
using namespace std;

int main() {

    int a, b;
    cout << "Enter first binary number: ";
    cin >> a;

    cout << "Enter second binary number: ";
    cin >> b;

    int ans = 0;
    int carry = 0;
    int place = 1;
    //if a = 2, b = 3
    while(a != 0 || b != 0 || carry != 0) { //  (2!=0, 3!=0, 1!=0)T ,(0!=0, 0!=0,2!=0)T, (0!=0, 0!=0,1!=0)T,  (0!=0, 0!=0,1!=0)F terminate

        int bit1 = a % 10; // 2, 0, 0
        int bit2 = b % 10; // 3, 0, 0

        int sum = bit1 + bit2 + carry; // 5, 2, 1

        int resultBit = sum % 2; //1 ,0, 1
        carry = sum / 2; // 2 , 1, 0

        ans = ans + resultBit * place; // 0+1*1=1,  1+0*10  =  1, 01 + 1 *100 = 101
        place = place * 10;  // 10, 100, 1000

        a = a / 10; // 0, 0, 0
        b = b / 10; // 0, 0, 0
    }

    cout << "Binary Sum = " << ans << endl; // 101

    return 0;
}