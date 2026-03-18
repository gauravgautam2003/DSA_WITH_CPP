  #include <iostream>
  using namespace std;

bool linearSearch(int arr[], int size, int key){
    for(int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int arr[10] = {4,2,5,12,6,8,23,1,9,7};
    int size = 10;
    cout << "Enter the key for searching : ";
    int key;
    cin >> key;

    bool found = linearSearch(arr, size, key);

    if( found ){
        cout << "key is found : ";
    }else{
        cout << "key is not found : ";
    }
    return 0;
}