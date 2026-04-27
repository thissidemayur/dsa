
#include<bits/stdc++.h>
using namespace std;

/*
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.
Notice that you may not slant the container


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

Example 2:

Input: height = [1,1]
Output: 1


*/

void container_with_most_water(vector<int>arr){
    if(arr.size()==1) {
        cout << "Invalid"<<endl;
        return;
    }
    int p1=0;
    int p2=arr.size()-1;
    int max_val=0;

    while(p1<p2){
        int interval=p2-p1;
        int min_val=min(arr[p1],arr[p2]);
        int container = interval * min_val;
        max_val = max(container, max_val);
        if(arr[p1]>arr[p2]){
            p2--;
        }else if (arr[p1]<arr[p2]){
            p1++;
        } else{
            p1++;
            p2--;
        }
    }

    cout << "max_value: "<< max_val <<endl;
}


int main(){
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    container_with_most_water(arr);
    vector<int> arr1 = {1, 1};
    container_with_most_water(arr1);
}