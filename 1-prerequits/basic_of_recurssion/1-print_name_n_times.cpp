#include<iostream>
using namespace std;

/*
Print Name N times using Recursion

Problem Description: Given an integer N, write a program to print your name N times.

EXAMPLE: 
Input: N = 3
Output: Ashish Ashish Ashish
Explanation: Name is printed 3 times.

Input: N = 1
Output: Ashish
Explanation: Name is printed once.
*/

void print_name_n_times(int times) {
    if( times <=0 ) {
        return;
    }
    cout << "Ashish ";

    if (times == 1)
    {
        return;
    }

    print_name_n_times(times-1);
    cout<< endl;
}

void print_names_n_times_2nd_method(string name, int count, int n) {
    //  base condition
    if(count ==n) return;
    cout << name << " ";
    print_names_n_times_2nd_method(name,count+1,n);
}


int main(){
    print_name_n_times(4);
    print_name_n_times(1);
    print_name_n_times(0);


    //
    cout <<endl;
    print_names_n_times_2nd_method("mayur",0,5);
    cout << endl;
    print_names_n_times_2nd_method("modak", 0, 1);
    print_names_n_times_2nd_method("shankar", 0, 0);

    return 0;
}