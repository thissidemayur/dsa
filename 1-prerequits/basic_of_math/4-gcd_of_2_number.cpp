/*
Given two integers N1 and N2, find their greatest common divisor.

Example 1:
Input: N1 = 9, N2 = 12

Output: 3
Explanation:
Factors of 9: 1, 3, 9
Factors of 12: 1, 2, 3, 4, 6, 12
Common Factors: 1, 3
Greatest common factor: 3 (GCD)

Example 2:
Input: N1 = 20, N2 = 15

Output: 5
Explanation:
Factors of 20: 1, 2, 4, 5, 10, 20
Factors of 15: 1, 3, 5, 15
Common Factors: 1, 5
Greatest common factor: 5 (GCD)
*/

#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int  gcd_of_2_num_brute_force(int n1, int n2) {
    int minval= min(n1,n2);
    int gcd_num;
    for(int i=1; i<=minval;i++) {
        if (n1%i==0 && n2%i ==0) {
            gcd_num = i;
        }
    }

    return gcd_num;

}

int  gcd_of_2_num_better_approch(int n1, int n2) {
    int minval= min(n1,n2);
    for(int i=minval; i>0;i--) {
        if (n1%i==0 && n2%i ==0) {
            return i;
        }

    }


    return 1;

}

// optimial solution by eculeidean algoritham;
int gcd_of_2_num_optimal_approch(int n1, int n2){

}


int main() {
    cout <<" =======  BRUTE FORCE ======= "<<endl;
     int gcd1=gcd_of_2_num_brute_force(9,12);
    cout<< "GCD: "<<gcd1 <<endl;
     int gcd2=gcd_of_2_num_brute_force(24,12);
    cout<< "GCD: "<<gcd2 <<endl;


     cout <<" =======  Better Approch ======= "<<endl;
     int gcd3 = gcd_of_2_num_better_approch(9,12);
    cout<< "GCD: "<<gcd3 <<endl;
     int gcd4=gcd_of_2_num_better_approch(24,12);
    cout<< "GCD: "<<gcd4 <<endl;
    
    
    return 0;
}