#include <bits/stdc++.h>
using namespace std;

// find maximum SUM among all subarrays of SIZE EXACTLY k

void max_subarray_sum_k(vector<int>arr,int k){
    int maxSum = INT_MIN;
    int currentSum=0;
    int low=0;

    for(int high=0;high<arr.size();high++){
        currentSum += arr[high];
        if (high-low+1 == k) {
            maxSum = max(maxSum,currentSum);
            currentSum -= arr[low];
            low++;
        }
    }

    cout << "SUM: " << maxSum << endl;
}

int main(){
    vector<int> arr = {2, 1, 5, 1, 3, 2};
    max_subarray_sum_k(arr,3);
}