#include<bits/stdc++.h>
using namespace std;
/*
Problem — Two Sum on Sorted Array:
Given a sorted array of integers and a target value, return the indices (1-indexed) of the two numbers that add up to the target. Exactly one solution exists. You may not use the same element twice.
Input:  arr = [2, 7, 11, 15], target = 9
Output: [1, 2]  // arr[0] + arr[1] = 2 + 7 = 9

*/

void two_sum_on_sorted_array(vector<int>arr,int target){
    int p1=0;
    int p2=arr.size()-1;
    while(p1<p2){
        if(arr[p1]+arr[p2]> target){
            p2--;
        }else if (arr[p1]+arr[p2]<target) {
            p1++;
        }else if(arr[p2]+arr[p1] == target)  {
            cout<< "Indexs: " << p1<< " "<<p2 <<endl;
            cout << "values: "<<arr[p1] << " " << arr[p2] <<endl;
            return;
        }
    }
    cout << -1 << endl;
}

void two_sum_on_sorted_array_brute_force(vector<int> arr, int target)
{
    for(int i=0;i<arr.size()-1;i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j] == target){
                cout << "Indexs: " << i << " " << j << endl;

                cout << "values: "<< arr[i] << " "<<arr[j] <<endl;
                return;
            }
        }
    }
}

    int
    main()
{
    vector<int> arr = {2, 7, 11, 15};
    two_sum_on_sorted_array(arr,9);
    two_sum_on_sorted_array_brute_force(arr,9);
}