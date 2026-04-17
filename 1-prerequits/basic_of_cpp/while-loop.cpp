#include<iostream>
using namespace std;

int main(){
    int n=10;
    int factorial = 1;
    while(n>0){
        factorial*=n;
        n--;
    }
    cout <<"Factorial of 10: "<< factorial <<endl;
    return 0;
}