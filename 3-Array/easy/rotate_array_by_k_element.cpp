/*
    Rotate array by K elements

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.



Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]
Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5]

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2]
Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]


*/

#include <bits/stdc++.h>
using namespace std;

// o(n) tc and sc
void shift_element_by_x_brute_force(vector<int> &arr, int k)
{   k = k % arr.size();
    int shiftElement = arr.size() - k;
    vector<int> dup(arr.size());

    int idx=0;
    for(int i=shiftElement;i<arr.size();i++){
        dup[idx++] = arr[i];

    }
    for(int i=0 ; i<shiftElement;i++ ){
        dup[idx++] = arr[i];
    }
   
    

    for(int num:dup) {
        cout << num << " ";
    }
    cout<<endl;
}


// o(n)- tc and o(1) sc
void shift_element_by_x(vector<int> arr,int k){
    int n = arr.size();
    k=k%n;

    reverse(arr.begin(),arr.end());
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());

    for (int num : arr)
    {
        cout << num << " ";
    }
    cout << endl;
}

    int
    main()
{
    vector<int> arr1 = {1, 2, 3, 4, 5, 6, 7};
    shift_element_by_x_brute_force(arr1, 1);
    shift_element_by_x_brute_force(arr1, 2);
    shift_element_by_x_brute_force(arr1, 3);
    shift_element_by_x_brute_force(arr1, 4);
    shift_element_by_x_brute_force(arr1, 5);
    shift_element_by_x_brute_force(arr1, 6);
     shift_element_by_x_brute_force(arr1, 7);
    shift_element_by_x_brute_force(arr1, 8);

    shift_element_by_x(arr1,1);
    shift_element_by_x(arr1, 2);
    shift_element_by_x(arr1, 3);
    shift_element_by_x(arr1, 4);
    shift_element_by_x(arr1, 5);
    shift_element_by_x(arr1, 6);
    shift_element_by_x(arr1, 7);
    shift_element_by_x(arr1, 8);
    shift_element_by_x(arr1, 9);
    shift_element_by_x(arr1, 10);

    return 0;
}
