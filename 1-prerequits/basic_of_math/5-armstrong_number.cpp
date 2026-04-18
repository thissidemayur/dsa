/*
Problem Statement:Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

Example 1:
Input:N = 153
Output:True
Explanation: 1^3+5^3+3^3 = 1 + 125 + 27 = 153
                                        
Example 2:
Input:N = 371                
Output: True
Explanation: 3^3+7^3+1^3 = 27 + 343 + 1 = 371

*/
#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int num) {
    int total_digit= to_string(num).length();
    int sum = 0 ;
    int n=num;
    while(n>0) {
        int digit = n%10;
        sum += pow(digit,total_digit);
        n/=10;
    }
    return sum== num;
}

int main(){
    bool isArm1 = isArmstrong(153);
    cout <<"Armstrong: "<< isArm1 << endl;

    bool isArm2 = isArmstrong(371);
     cout <<"Armstrong: "<< isArm2 << endl;

       bool isArm3= isArmstrong(123);
     cout <<"Armstrong: "<< isArm3 << endl;

    return 0;
}