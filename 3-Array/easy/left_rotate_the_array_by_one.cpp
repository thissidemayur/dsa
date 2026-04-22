/*
Problem Statement: Given an integer array nums, rotate the array to the left by one.

Note: There is no need to return anything, just modify the given array.

Example 1:
Input:
 nums = [1, 2, 3, 4, 5]
Output:
 [2, 3, 4, 5, 1]
Explanation:
 Initially, nums = [1, 2, 3, 4, 5]
Rotating once to the left results in nums = [2, 3, 4, 5, 1].



*/

#include<bits/stdc++.h>
using namespace std;

void leftRotate(vector<int>&arr){
    int startElem=arr[0];
    for(int i=1;i<arr.size();i++){
        arr[i-1] = arr[i];
    }
    arr[arr.size()-1]=startElem;


    for(int num: arr){
        cout << num << " ";
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {1,2,3,4,5,6,7};
    leftRotate(arr);
}
