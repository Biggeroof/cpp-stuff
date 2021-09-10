#include <bits/stdc++.h>

using namespace std;

void quickSort(vector<int>& bar, int l, int r);
int partition(vector<int>& bar, int l, int r);

void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  
int main()
{
    vector<int> nums;

    srand((unsigned) time(NULL));

    for(size_t i = 0; i < 10; i++)
    {
        nums.push_back(rand() % 1000);
    }

    quickSort(nums, 0, nums.size() - 1);

    cout << "Sorted array: \n"; 
    for (int i = 0; i < nums.size(); i++) 
        cout << nums[i] << " "; 
    cout << endl; 

}

void quickSort(vector<int>& bar, int l, int r)
{
    if(l < r)
    {
        //partition index
        int pi = partition(bar, l, r);

        quickSort(bar, l, pi - 1);
        quickSort(bar, pi + 1, r);
    }
}

int partition(vector<int>& bar, int l, int r)
{
    int pivot = bar[r];
    int i = (l - 1);

    for(int j = l; j < r; j++)
    {
        if(bar[j] < pivot)
        {
            i++;
            swap(&bar[i], &bar[j]);
        }
    }
    swap(&bar[i+1], &bar[r]);
    return (i + 1);
}