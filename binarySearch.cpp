#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int x)
{
    int l = 0;
    int r = n;

    while (l <= r)
    {
        cout << "array: ";
        for (int i = l; i <= r; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << "left: " << l << endl;
        cout << "right: " << r << endl;

        int mid = floor((l + r) / 2);
        cout << "mid: " << mid << endl;

        if (x == arr[mid])
        {
            return mid;
        }

        if (x < arr[mid])
        {
            r = mid - 1;
        }

        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 50, 70, 90, 125, 200};

    cout << "Enter the number to find: " << endl;
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, n - 1, x);

    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is at index " << result << endl;
    }
}