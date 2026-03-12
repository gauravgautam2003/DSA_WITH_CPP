#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n :";
    cin >> n;
    return (n > 0) && (n & (n-1) == 0) && (n%3 == 1);
    
}