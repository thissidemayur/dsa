#include <bits/stdc++.h>
using namespace std;

void hash_fn()
{
    cout << "Enter Size of Array: ";

    int  n;
    cin >> n;
    int arr[n];

    cout << "Enter element in array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    // precompute;
   map<int,int> mp;
   for (int i=0;i<n;i++){
    mp[arr[i]]++;
   }

    int q;
    cout << "No of query: ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter number: ";
        cin >> number;
        cout << mp[number] << endl;
    }
}


int main(){
    hash_fn();
    return 0;
}
