// Bubble Sort efficent Implementation
#include<iostream>
using namespace std;

void print(int arr[], int size) {
    for(int i = 0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

void bubble(int arr[], int size, bool isSorted) {
    while(!isSorted) {
        isSorted = true;
        for(int i = 0; i<size; i++) {
            if(arr[i] > arr[i+1]) {
                swap(arr[i], arr[i+1]);
                isSorted = false;
            }
        }
        size--;
    }
}

int main() {
    int arr[] = {1,3,2,5,7,6,4,10,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int lastSorted = size - 1;
    bool isSorted = false;
    print(arr, size);
    bubble(arr,lastSorted,isSorted);
    print(arr, size);
    return 0;
}
