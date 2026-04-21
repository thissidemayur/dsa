
/*
array = [1, 2, 1, 3, 12]
find frequency of
[1, 3, 4, 2, 10]
*/

#include<bits/stdc++.h>
using namespace std;

void array_hash(){
    // add element in string
    cout << "Size of array: ";
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxVal = *max_element(arr,arr+n);

    // precompute
    int hash[maxVal+1]= {0};
    for (int i=0;i<n;i++) {
        hash[arr[i]]++;
    }

    // query
    int q;
    cout << "enter no of query: ";
    cin >>q;

    while(q--){
        int number;
        cout << "Enter query: ";
        cin >> number;
        if(number<=maxVal)
            cout << hash[number] << endl;
        else cout << 0 <<endl;
    }
}
int main() {

    array_hash();


    return 0;

}