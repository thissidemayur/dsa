/*
Print all Divisors of a given Number


17

Problem Statement: Given an integer N, return all divisors of N.
A divisor of an integer N is a positive integer that divides N without leaving a remainder. In other words, if N is divisible by another integer without any remainder, then that integer is considered a divisor of N.


Input: N = 36
Output: [1, 2, 3, 4, 6, 9, 12, 18, 36]  
Explanation: The divisors of 36 are 1, 2, 3, 4, 6, 9, 12, 18, 36.

Input: N = 12
Output: [1, 2, 3, 4, 6, 12]
Explanation: The divisors of 12 are 1, 2, 3, 4, 6, 12.


*/
#include<bits/stdc++.h>
using namespace std;
void print_all_divisor(int num) {
    cout <<"[";
    for(int i=1; i<=num/2;i++){
        if(num%i==0){
            cout <<i<<", ";
        }
    }
    cout << num<<  "]" <<endl;
}

int main(){
    print_all_divisor(36);
    print_all_divisor(18);
    print_all_divisor(9);
    print_all_divisor(24);
    print_all_divisor(12);
    print_all_divisor(6);
}