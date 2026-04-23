#include<bits/stdc++.h>
using namespace std;

void moveZeros_bruteForce(vector<int>&arr){
    vector<int>dup(arr.size());
    int cnt;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            cnt++;
        }
    }

    int j=0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != 0)
        {
           dup[j++] = arr[i];
        }
    }

    int traveled = arr.size() - cnt;
    for(int i=traveled;i<arr.size();i++){
        dup[i] = 0;
    }

    for(int cnt : dup){
        cout << cnt << " ";
    }
    cout << endl;

}

void moveZeros(vector<int>&arr){

    int j=-1; // pointer point to zeros
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j = i;
            break;
        }
    }

    // 
    for(int i=j+1; i<arr.size(); i++) {
        if(arr[i]!=0){
            swap(arr[i],arr[j++]);

        }
    }
}


int main(){
    vector<int> arr1 = {0,0,0,1, 0, 2, 3, 0, 4, 0, 1};
     moveZeros_bruteForce(arr1);
moveZeros(arr1);
}