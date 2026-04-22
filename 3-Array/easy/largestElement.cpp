/*
Problem Statement: Given an array, we have to find the largest element in the array.

Example 1:
Input:
 arr[] = {2, 5, 1, 3, 0}
Output:
 5
Explanation:

5 is the largest element in the array.

Example 2:
Input:
 arr[] = {8, 10, 5, 7, 9}
Output:
 10

*/

#include<bits/stdc++.h>
using namespace std;

void largestElement(vector<int>& arr){
    int max=arr[0];
    for(int i=1; i<arr.size();i++){
        if(max<arr[i]) {
            max=arr[i];
        }
    }
    cout << "Largest: "<<max<<endl;
}

int main(){
    vector<int> arr = {1,5,3,0,99,9,12,453};
    largestElement(arr);
}