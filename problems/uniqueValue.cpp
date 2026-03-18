#include<iostream>
using namespace std;

int uniqueNumber(int arr[], int n, int ans){
    for(int i = 0; i < n; i++){
        ans = ans ^ arr[i];
    }
    return ans;
}

int main(){
    int arr[5] = {4,3,2,4,2};
    int size = 5;
    int ans = 0;
    cout << uniqueNumber(arr, size, ans);
    
    return 0;
}