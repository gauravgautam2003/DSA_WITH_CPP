#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

void sort_012(int arr[], int n){
    int left = 0;
    int mid = 0;
    int right = n - 1;

    while(mid < right){
        if(arr[mid] == 0){
            swap(arr[mid], arr[left]);
            mid++;
            left++;
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid], arr[right]);
            right--;
        }
    }
}

int main(){
    int arr[8] = {0,2,1,0,2,1,0,0};
    int size = 8;
    sort_012(arr, size);
    printArray(arr, size);
    return 0;
}