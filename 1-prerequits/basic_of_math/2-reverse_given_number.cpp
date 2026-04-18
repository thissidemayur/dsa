/*
Problem Statement: Given an integer N return the reverse of the given number.

Note: If a number has trailing zeros, then its reverse will not include them. For e.g , reverse of 10400 will be 401 instead of 00401.
*/

# include<iostream>
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

int main(){
    int rev1=reverse_digit(123456789);
    cout << "Reverse: "<<rev1<<endl;


     int rev2=reverse_digit(12345600);
    cout << "Reverse: "<<rev2<<endl;
    return 0;
}