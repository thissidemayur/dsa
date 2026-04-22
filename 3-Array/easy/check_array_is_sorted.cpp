/*
Problem Statement: Given an array of size n, write a program to check if the given array is sorted in (ascending / Increasing / Non-decreasing) order or not. If the array is sorted then return True, Else return False.

Example 1:
Input: N = 5, array[] = {1,2,3,4,5}
Output: True.
Explanation: The given array is sorted i.e Every element in the array is smaller than or equals to its next values, So the answer is True.

Example 2:
Input: N = 5, array[] = {5,4,6,7,8}
Output: False.
Explanation: The given array is Not sorted i.e Every element in the array is not smaller than or equal to its next values, So the answer is False.
Here element 5 is not smaller than or equal to its future elements.
*/

#include<bits/stdc++.h>
using namespace std;


bool check_if_aray_is_sorted(vector<int>&arr){
   for(int i=1;i<arr.size();i++){
    if(arr[i-1] > arr[i] ) {
        return false;
    }
   } 
   return true;
}

int main(){
    vector<int> arr = {1,2,3,4,0,6};
    cout << check_if_aray_is_sorted(arr)<<endl;

    vector<int> arr1 = {5, 5, 6, 7, 8};
    cout << check_if_aray_is_sorted(arr1) << endl;
}