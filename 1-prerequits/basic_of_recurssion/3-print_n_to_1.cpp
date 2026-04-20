#include<iostream>
using namespace std;

/*
Print N to 1 using Recursion

Problem Description: Given an integer N, write a program to print numbers from N to 1.

Examples
Input: N = 4
Output: 4, 3, 2, 1
Explanation: All the numbers from 4 to 1 are printed.

Input: N = 1
Output: 1
Explanation: This is the base case.

*/

void print_n_to_1_using_forward_recurssion(int val) {
    if (val < 1) {
        return;
    }
    cout << val <<" ";
    print_n_to_1_using_forward_recurssion(val-1);
}

void print_n_to_1_using_backtracking(int val)
{
    if (val < 1)
    {
        return;
    }
    print_n_to_1_using_backtracking(val - 1);
    cout << val <<" ";
}

int main(){

    print_n_to_1_using_forward_recurssion(5);
    cout<<endl;
    print_n_to_1_using_forward_recurssion(1);
    cout << endl;

    print_n_to_1_using_forward_recurssion(10);
    cout << endl;



    // backtracking
    print_n_to_1_using_backtracking(5);
    cout << endl;
    print_n_to_1_using_backtracking(1);
    cout << endl;

    print_n_to_1_using_backtracking(10);
    cout << endl;

    return 0;
}