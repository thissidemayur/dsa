#include<bits/stdc++.h>
using namespace std;


int count_all_digit_in_number(int num){
    int value = num;
    int count =0;

    while(value>0) {
        count++;
        value=value/10;

    }
    cout << "Value: "<<value<<endl;
    return count;

}

int main(){
    int num1=12345;
    int val = count_all_digit_in_number(num1);
    cout<<"Value: "<<val<< endl;

     int num2=1234567890;
    int val2 = count_all_digit_in_number(num2);
    cout<<"Value: "<<val2<< endl;
    return 0;
}