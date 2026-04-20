#include<bits/stdc++.h>
using namespace std;
vector<int> reverse_array_brute_force(vector<int> &arr)
{
    int n = arr.size()-1;
    vector<int> result(n+1); 

    for (int i = 0; i <=n; i++)
    {
        result[i] = arr[n  - i];
    }

    return result;
}

void reverse_array_better_approch(vector<int> &arr){
    int p1=0;
    int p2 = arr.size()-1;

     while(p1<p2) {
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;

     }
}

void reverse_array_built_in(vector<int> &arr){
    reverse(arr.begin(),arr.end());
}

void print_array(vector<int> &arr){
    for (int num : arr)
    {
        cout << num << " ";
    }
    cout <<endl;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7};
    vector<int> rev = reverse_array_brute_force(arr);
    print_array(arr);
    print_array(rev);
    reverse_array_better_approch(arr);
    print_array(arr);
    reverse_array_built_in(arr);
    print_array(arr);

}