/*
Check if a number is Palindrome or Not


18

Problem Statement: Given an integer N, return true if it is a palindrome else return false.

A palindrome is a number that reads the same backward as forward. For example, 121, 1331, and 4554 are palindromes because they remain the same when their digits are reversed.


Example 1:
Input:N = 4554
Output:Palindrome Number
Explanation: The reverse of 4554 is 4554 and therefore it is palindrome number
         

*/

#include<iostream>
using namespace std;


int reverse_digit(int num){
    int lastDigit=0;
    int reverse=0;
    while(num>0) {
        lastDigit = num%10;
        reverse = reverse*10 + lastDigit;
        num = num/10; 
    }
    return reverse;

}
bool checkPallidrome(int num){
    int reverse = reverse_digit(num);
    if(num == reverse) return true;
    return false;
}

int main(){
    bool valid1=checkPallidrome(4554);
    cout << "Valid Palidrome: "<< valid1 <<endl;

    bool valid2=checkPallidrome(7789);
    cout << "Valid Palidrome: "<< valid2 <<endl;
    return 0;
}