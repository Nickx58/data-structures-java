/*
* Insertion Sort
*/

#include <iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    int temp, i, j;
    for (i = 1; i < n; i++)
    {
        temp = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > temp)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = temp;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {2, 1, 4, 3, 6, 5, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Sorting:" << '\n';
    printArray(arr, size);
    insertionSort(arr, size);
    cout << "After Sorting:" << '\n';
    printArray(arr, size);
    return 0;
}