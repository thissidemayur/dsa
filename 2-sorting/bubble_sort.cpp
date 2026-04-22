#include<bits/stdc++.h>
using namespace std;


void bubbleSort(vector<int> &arr){
    int n= arr.size();
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
              swap(arr[j],arr[j+1]);
            }
        }
        cout <<endl;
    }


    // print
    for ( int num: arr){
        cout << num << " " ;
    }

}

int main(){
    vector<int> arr1 = {6,2,3,4,1,5};
    bubbleSort(arr1);
    vector<int> arr2 = {13, 46, 24, 52, 20, 9};
    bubbleSort(arr2);
}