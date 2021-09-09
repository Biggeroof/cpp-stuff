#include <bits/stdc++.h>

using namespace std;

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int driver[] = {2, 3, 4, 10, 40};
    int x = 10;
    int n = sizeof(driver) / sizeof(driver[0]);

    int result = linearSearch(driver, n, x);

    if (result == -1)
    {
        cout << "Element is not present in array" << endl;
    }
    else
    {
        cout << "Element is at index " << result << endl;
    }
}
