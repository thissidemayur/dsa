#include<iostream>
using namespace std;

int main(){
    int marks;
    cout<< "Enter marks: ";
    cin >> marks;
    if(marks<30) {
        cout<<"Grade Fail" <<endl;
    }else if (marks >= 30 && marks<50) {
        cout << "Grade Fair" <<endl;
    }else if (marks >=50 && marks < 80) {
        cout << "Grade Above Average"<<endl;
    }else {
        cout <<"Intelligent";
    }
}