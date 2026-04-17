#include<bits/stdc++.h>
using namespace std;

void addNumBy10_passByValue(int a) {
    a +=10;
}

void addNumBy10_PassByRefernce(int & b){
    b +=10;
}

int main() {
    int a=10;
    int b=10;
    cout <<"Pass by Refrecnce: "<<endl;
    addNumBy10_PassByRefernce(a);
    cout << "A: "<<a<<endl;

        cout <<"Pass by Value: "<<endl;
    addNumBy10_passByValue(b);
    cout<< "B: "<<b<<endl;
}