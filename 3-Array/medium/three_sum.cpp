
#include <bits/stdc++.h>
using namespace std;

/*
Problem: 3 Sum
Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

Notice that the solution set must not contain duplicate triplets.


Example 1:

Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation:
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

Example 2:

Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

Example 3:

Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

*/

vector<vector<int>> threeSum(vector<int> arr)
{
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    int n=arr.size();
    
    for(int i=0;i<n-2;i++){
        if(i>0 && arr[i]==arr[i-1]) continue;

        int p1=i+1;
        int p2=n-1;

        while(p1<p2) {
            int sum=arr[i]+arr[p1]+arr[p2];
            if(sum ==0) {
                ans.push_back({arr[i],arr[p1],arr[p2]});

                // skip duplication, after find valid triplet
                while(p1 < p2 &&  arr[p1] == arr[p1+1]) continue;
                while (p1 < p2 && arr[p2] == arr[p2- 1]) continue;
                p2--;
                p1++;
            }else if(sum>0) {
                p2--;
            }else {
                p1++;
            }
        }
    }
    return ans;
}

void print2DVector(vector<vector<int>> vec)
{
    cout << "[ ";
    for (size_t i = 0; i < vec.size(); ++i)
    {
        cout << "[";
        for (size_t j = 0; j < vec[i].size(); ++j)
        {
            cout << vec[i][j];
            if (j < vec[i].size() - 1)
                cout << ",";
        }
        cout << "]";
        if (i < vec.size() - 1)
            cout << ",";
    }
    cout << " ]" << endl;
}

int main(){

    vector<int> arr = {-1, 0, 1, 2, -1, -4};
     vector<vector<int>> result1 = threeSum(arr) ;
    print2DVector(result1);

    return 0;
}