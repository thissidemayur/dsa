#include <bits/stdc++.h>
using namespace std;

// Given array of positive integers and target k, find the length of the longest subarray whose sum is less than or equal to k.

void length_of_largest_subarray(vector<int> arr, int sum)
{
    int low = 0;
    int currentSum = 0;
    int cnt = 0;

    for (int high = 0; high < arr.size(); high++)
    {
        currentSum += arr[high]; // expand window

        while (currentSum > sum)
        {                           // window invalid
            currentSum -= arr[low]; // shrink from left
            low++;
        }
        // window is valid here — sum <= k
        cnt = max(cnt, high - low + 1); // track max length
    }
    cout << "Longest subarray length: " << cnt << endl;
}

int main(){

    vector<int> arr = {10, 5, 2, 7, 1};

    length_of_largest_subarray(arr,15);
    return 0;
}
