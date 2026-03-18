#include <iostream>
using namespace std;


void swapAlternate(int arr[], int size){
    for(int i = 0; i < size; i+=2){
        if(i+1 < size){
            swap(arr[i], arr[i+1]);
        }
    }
}
int main(){
    int arr[6] = {4, 5, 2, 3, 1, 6};
    int size = 6;
    swapAlternate(arr, size);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}