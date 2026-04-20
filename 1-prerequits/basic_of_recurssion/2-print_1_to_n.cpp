#include<bits/stdc++.h>
using namespace std;

/*
Print 1 to N using Recursion

Problem Description: Given an integer N, write a program to print numbers from 1 to N.

Input: N = 4
Output: 1, 2, 3, 4
Explanation: All the numbers from 1 to 4 are printed.

Input: N = 1
Output: 1
Explanation: This is the base case.
*/

void print_1_to_n_using_forward_recurssion(int cnt,int n){
    cout << cnt << " ";
    if(cnt == n) return;

    print_1_to_n_using_forward_recurssion(cnt + 1, n);
}

void print_1_to_n_using_backtracking(int cnt, int n)
{
    if (cnt > n)
        return;

    print_1_to_n_using_backtracking(cnt + 1, n);
    cout << cnt <<" ";
}

int main(){

    print_1_to_n_using_forward_recurssion(1, 10);
    cout<<endl;
    print_1_to_n_using_forward_recurssion(1, 40);
    cout << endl;

    // backtracking
    print_1_to_n_using_backtracking(1, 10);
    cout << endl;
    print_1_to_n_using_backtracking(1, 40);
    cout << endl;
    return 0;

}