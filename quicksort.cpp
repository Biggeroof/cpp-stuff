#include <bits/stdc++.h>

using namespace std;

void quickSort(vector<int>& bar, int l, int r);
int partition(vector<int>& bar, int l, int r);
  
int main()
{
    vector<int> nums;

    srand((unsigned) time(NULL));

    for(size_t i = 0; i < 8; i++)
    {
        nums.push_back(rand() % 1000);
    }

    cout << "Original array: \n"; 
    for (int i = 0; i < nums.size(); i++) 
        cout << nums[i] << " "; 
    cout << endl; 

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
        //quicksorts the left side
        quickSort(bar, l, pi - 1);
        //quicksorts the right side
        quickSort(bar, pi + 1, r);
    }
}

int partition(vector<int>& bar, int l, int r)
{
    cout << "Current array(1): \n"; 
    for (int i = 0; i < r + 1; i++) 
        cout << bar[i] << " "; 
    cout << endl;
    //creates pivot on right ()
    int pivot = bar[r];
    //index of smaller element and indicates the correct position of the pivot (numbers lower than it to the left and numbers higher than it to the right)
    int i = (l - 1);

    //r = 1, i = -1
    //
    for(int j = l; j < r; j++)
    //iterates from left to right of the arrray
    {
        //if the element at j is less than the pivot increase i by 1 and swap i and j
        if(bar[j] < pivot)
        {
            i++;
            swap(bar[i], bar[j]);
        }
    }
    //place the pivot at the correct location by swapping i + 1 and the pivot
    swap(bar[i+1], bar[r]);
    //return the index of the pivot
    
    cout << "Current array(2): \n"; 
    for (int i = 0; i < r + 1; i++) 
        cout << bar[i] << " "; 
    cout << endl;
    return (i + 1);
}