#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x)
{
    if (l <= r)
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

        // If the element is present at the middle
        // itself
        if (arr[mid] == x)
            return mid;

        // If element is smaller than mid, then
        // it can only be present in left subarray
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Else the element can only be present
        // in right subarray
        return binarySearch(arr, mid + 1, r, x);
    }

    // We reach here when element is not
    // present in array
    return -1;
}

int main()
{
    int arr[] = {2, 3, 4, 10, 40, 50, 70, 90, 125, 200};

    cout << "Enter the number to find: " << endl;
    int x;
    cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, 0, n - 1, x);

    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is at index " << result << endl;
    }
}
