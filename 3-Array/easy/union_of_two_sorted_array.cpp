/*
Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.

The union of two arrays can be defined as the common and distinct elements in the two arrays.



Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5}

Input:n = 10,m = 7,arr1[] = {1,2,3,4,5,6,7,8,9,10}arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}


*/


#include<bits/stdc++.h>
using namespace std;

void union_of_sorted_array(vector<int>arr1, vector<int> arr2){
    int size1=arr1.size();
    int size2=arr2.size();
    
    int p1=0;
    int p2=0;

    vector<int>union_arr;

    while(p1<size1 && p2<size2){
        if(arr1[p1] > arr2[p2]){
            union_arr.push_back(arr2[p2]);
            p2++;
        }else if (arr1[p1] < arr2[p2]){
            union_arr.push_back(arr1[p1]);
            p1++;
        }else {
            union_arr.push_back(arr1[p1]);
            p1++;
            p2++;
        }
    }

    // if arr1>arr2
    while(p2<size2){
        union_arr.push_back(arr2[p2++]);
    }

    // if arr2<arr1
    while(p1<size1){
        union_arr.push_back(arr1[p1++]);
    }

    for (int cnt : union_arr){
        cout << cnt << " ";
    }
    cout<<endl;
} 

int main(){
    vector<int> arr1 = {1, 2, 3, 4, 5};
    vector<int> arr2 = {2, 3, 4, 4, 5};

    union_of_sorted_array(arr1,arr2);
    
    return 0;
}