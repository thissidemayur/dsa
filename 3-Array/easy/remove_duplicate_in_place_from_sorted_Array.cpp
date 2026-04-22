/*
Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold the final result. It does not matter what you leave beyond the first k elements.


Input: arr[]=[1,1,2,2,2,3,3]
Output: [1,2,3,_,_,_,_]
Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning [1,2,3] in the beginning of the array.


Input: arr[]=[1,1,1,2,2,3,3,3,3,4,4]
Output: [1,2,3,4,_,_,_,_,_,_,_]
Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning [1,2,3,4] in the beginning of the array.

*/

#include<bits/stdc++.h>
using namespace std;


void remove_duplicate_in_place_sorted_array(vector<int> & arr){
    int p1=0;
    int p2=1;
    int n=arr.size();
    int small = arr[0];
    int large= arr[n];
    if(arr.size()==1) {
        cout<< arr[0];
        return;
    }

    while (p2<n-1) {
        if(arr[p1] == arr[p2]) {
            p2++;
        }else if (arr[p1]<arr[p2]){
            p1++;
            swap(arr[p1],arr[p2]);
            p2++;

        }
    }

    for(int num:arr){
        cout << num << " ";
    }
    cout << endl;
}

int removeDuplicates(vector<int> &nums)
{

    if(nums.empty()) return 0;

    int i=0;

    for (int j=1;j<nums.size();j++){
        if(nums[j] != nums[i]) {
            i++;
            nums[i]=nums[j];
        }
    }
    return i;


}
    int main()
    {
        vector<int> arr = {1, 1, 2, 2, 2, 3, 3,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,6,7,8,8,8,9};
        // remove_duplicate_in_place_sorted_array(arr);
        int size = removeDuplicates(arr);
        for(int i=0;i<=size;i++) {
            cout << arr[i]<<" ";
        }
        cout<<endl;
    }
