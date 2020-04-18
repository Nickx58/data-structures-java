/*
* Binay search Iterative
*/
#include<iostream>
using namespace std;

bool binarySearch(int arr[], int size, int x) {
    int left = 0;
    int right = size - 1;
    while(left <= right) {
        int mid = left + ((right - left)/2);
        if (arr[mid] == x) {
            return true;
        } else if (x < arr[mid]) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }

    }
    return false;
}

int main() {
    int arr[] = {1,2,3,4,5,6,7,9,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 121;
    int result = binarySearch(arr, size, x);
    if (result == 1) {
        cout <<"Element Found "<<'\n';
    } else {
        cout <<"Not Found "<<'\n';
    }
    return 0;
}
