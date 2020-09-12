#include <iostream>
using namespace std;

bool twoNumberSum(int arr[], int size, int target)
{
	int start = 0;
	int end = size - 1;
	while (start < end)
	{
		int sum = arr[start] + arr[end];
		if (sum == target)
		{
			return true;
		}
		else if (sum < target)
		{
			start++;
		}
		else
		{
			end--;
		}
	}
	return false;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = sizeof(arr) / sizeof(arr[0]);
	if (twoNumberSum(arr, size, 9))
	{
		cout << "Array has two element with the given sum";
	}
	else
	{
		cout << "Array doesn't have two elements with given sum";
	}
	cout << endl;
	return 0;
}