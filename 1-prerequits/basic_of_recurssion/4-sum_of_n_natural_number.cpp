#include<bits/stdc++.h>
using namespace std;

/*
Sum of first N Natural Numbers


Problem Statement: Given a number ‘N’, find out the sum of the first N natural numbers .

Examples
Input: N=5
Output: 15
Explanation: 1+2+3+4+5=15

Input: N=6
Output: 21
Explanation: 1+2+3+4+5+6=15

*/

int sum_of_n_num_using_recurssion(int num) {
    if (num == 0){
        return 0;
    }
    return num + sum_of_n_num_using_recurssion(num-1);
}

int main(){
    cout << sum_of_n_num_using_recurssion(10);
    cout <<endl;

    cout << sum_of_n_num_using_recurssion(5);
    cout << endl;

    cout << sum_of_n_num_using_recurssion(100);
    cout << endl;

}