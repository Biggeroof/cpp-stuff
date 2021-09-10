#include <vector>
#include <iostream>

using namespace std;

void sort(vector<int>& bar);
void mergeSort(vector<int>&left,vector<int>& right,vector<int>& bars);

int main() {

    vector<int> nums;
    time_t t;
    
    srand((unsigned) time(&t));

    //changing i changes the size of the vector
    for (size_t i = 0; i < 50; i++)
    {
        //generating random nums
        
        nums.push_back(rand() % 1000);
    }

    cout << "before sort: ";
    for (size_t i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;

    sort(nums);

    cout << "After sort: ";
    for (size_t i = 0; i < nums.size(); i++)
        cout << nums[i] << " ";
    cout << endl;
}

//can count resursive depths on ur own if you dont understand how it works
void sort(vector<int>& bar) {
    /* this function divides the unsorted list at the midpoint into sublists and returns 2 sublists - left and right
    takes overall O(log n) time*/

    //if the size of the vector is 1 then just return (stop conditon for splitting the subarrays)
    if (bar.size() <= 1) return;

    //calulcating midpoint and declaring the left and right vectors
    int mid = bar.size() / 2;
    vector<int> left;
    vector<int> right;

    //adding those elements from each size of the array into the vector
    //size_t is used here instead of int as it is used to represent sizes
    for (size_t j = 0; j < mid; j++)
        left.push_back(bar[j]);
    for (size_t j = 0; j < (bar.size()) - mid; j++)
        right.push_back(bar[mid + j]);
    
    cout << "left side: ";
    for (size_t i = 0; i < left.size(); i++)
        cout << left[i] << " ";
    cout << endl;

    //keeps sorting the left side until there is only 1 element left in the subarrays (goes down 1 depth each time called)
    sort(left);

    cout << "right side: ";
    for (size_t i = 0; i < right.size(); i++)
        cout << right[i] << " ";
    cout << endl;

    //keeps sorting the right side until there is only 1 element left in the subarrays (goes down 1 depth each time called)
    sort(right);

    
    cout << "called merge sort" << endl;
    //merges the arrays at the current recursive depth (this makes it go back up 1 depth since the function ends here)
    //at depth of 1 "bar" refers to the original vector
    mergeSort(left, right, bar);
    
}

void mergeSort(vector<int>& left, vector<int>& right, vector<int>& bars)
{
    /* Sorts a list in ascending order and returns a new sorted list. 
    This takes O(n log n) time  (the overall sorting process) merge runs in linear time and split step takes log n time*/

    int nL = left.size();
    int nR = right.size();
    int i = 0, j = 0, k = 0;
    //i is used to iterate through the bars(original vector) vector
    // j is for the left and k is for the right

    //this is true as long as the subarrays are the same size (as it will exit early if 1 subarray is longer than the other). 
    //This is fixed in the 2 while loops below
    while (j < nL && k < nR) 
    {
        //if left[0] is greater than right[0], then the left[0] value is added to the new vector
        if (left[j] <= right[k]) {
            bars[i] = left[j];
            j++;
        }
        //if left[0] is less than right[0], then the right[0] value is added to the new vector
        else {

            bars[i] = right[k];
            k++;
        }
        i++;
    }

    // if right list is shorter than the left list, then the remaining elements from the left list are added in
    while (j < nL) {
        
        bars[i] = left[j];
        j++; i++;
    }
    // if left list is shorter than the right list, then the remaining elements rfom the right list are added in
    while (k < nR) {
        
        bars[i] = right[k];
        k++; i++;
    }
        cout << "current array: ";
        for (size_t i = 0; i < bars.size(); i++)
        cout << bars[i] << " ";
        cout << endl;
}