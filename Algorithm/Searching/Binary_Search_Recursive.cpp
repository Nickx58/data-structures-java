/*
* Binary Search Resurcive
*/

#include <iostream>
using namespace std;

int binarySearch(int arr[], int left, int right, int x)
{
    if (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (x < arr[mid])
        {
            return binarySearch(arr, left, mid - 1, x);
        }
        else
        {
            return binarySearch(arr, mid + 1, right, x);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10, 12};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size - 1;
    int element;
    cout << "Enter element to search: " << flush;
    cin >> element;
    int result = binarySearch(arr, left, right, element);
    if (result != -1)
    {
        cout << element << " Found in the array" << '\n';
    }
    else
    {
        cout << "Not Found" << '\n';
    }
    return 0;
}