#include<bits/stdc++.h>
using namespace std;


/*

Problem Statement: Given an integer N. Print the Fibonacci series up to the Nth term.


Example 1:
Input: N = 5
Output: 0 1 1 2 3 5
Explanation: 0 1 1 2 3 5 is the fibonacci series up to 5th term.(0 based indexing)

Example 2:
Input: 6
Output: 0 1 1 2 3 5 8
Explanation: 0 1 1 2 3 5 8 is the fibonacci series upto 6th term.(o based indexing)

*/

void print_fibo_brute(int n){
    if(n==0) {
        cout << 0<< "\n";
        return;
    }
    if(n==1) {
        cout << 0 << " " << 1 << "\n";
       return;
    }
    int n1=0;
    int n2=1;
    cout << n1 << " "<< n2 << " ";
    for (int i = 3; i <= n; i++)
    {
        int n3 = n1+n2;
        cout << n3 << " ";
        n1=n2;
        n2=n3;
    }
    cout <<endl;
}

int print_fibo_recursion(int n){
    if(n<=1){
        return n;
    }

    int last = print_fibo_recursion(n-1);
    int slast = print_fibo_recursion(n-2);
    return last+slast;
}
int main(){
    print_fibo_brute(4);
    print_fibo_brute(6);
    // print_fibo_brute(7);
    // print_fibo_brute(8);

    cout<<endl;
    cout << print_fibo_recursion(4) <<endl;
    cout<< print_fibo_recursion(6) << endl;

        return 0;
}