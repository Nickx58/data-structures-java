#include <iostream>
#include <vector>
using namespace std;

vector<int> v;

void find_first(int arr[], int size, int x)
{
    int left = 0;
    int right = size - 1;
    int result = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            right = mid - 1;
        }
        else if (x < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    v.push_back(result);
}

void find_last(int arr[], int size, int x)
{
    int left = 0;
    int right = size - 1;
    int result = -1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == x)
        {
            result = mid;
            left = mid + 1;
        }
        else if (x < arr[mid])
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    v.push_back(result);
}

int main()
{
    int arr[] = {5, 7, 7, 8, 8, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x;
    cout << "Enter a number to be searched" << endl;
    cin >> x;
    find_first(arr, size, x);
    find_last(arr, size, x);
    cout << v[0] << " " << v[1] << endl;
    return 0;
}