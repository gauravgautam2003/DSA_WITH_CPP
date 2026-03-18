#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int target){
    int left = 0;
    int right = size - 1;

    int mid = left + (right - left)/2;

    while(left <= right){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }

        mid = left + (right - left)/2;
    }
    return -1;
}

int main(){
    int arr[10] = {2,3,5,7,9,12,14,15,25,35};
    int size = 10;
    int target;

    cout << "Enter the target value which digit you want to find from arr : ";
    cin >> target;

    int result = binarySearch(arr, size, target);

    cout << "target is :" << result <<endl;
    return 0;
}