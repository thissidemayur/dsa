/*
Problem Statement: Given an array, we have to find the 2nd largest element in the array.

Example 1:
Input:
 arr[] = {2, 5, 1, 3, 0}
Output:
 3
Explanation:

3 is the largest element in the array.

Example 2:
Input:
 arr[] = {8, 10, 5, 7, 9}
Output:
 9

*/

#include <bits/stdc++.h>
using namespace std;

void secondLargestElement(vector<int> &arr)
{
    int max = arr[0];
    int sec_max;
    for (int i = 1; i < arr.size(); i++)
    {
        if (max < arr[i])
        {
            sec_max=max;
            max = arr[i];
        }else if(sec_max <arr[i]){
            sec_max=arr[i];
        }
    }
    cout << "2nd Largest: " << sec_max << endl;
}

int main()
{
    vector<int> arr = {1111, 5, 3, 23420, 99, 9, 12, 453};
    secondLargestElement(arr);
}