#include <bits/stdc++.h>
using namespace std;


void character_hashing_lowercase(){
    cout << "Enter string: ";

    string s;
    cin >>s;

    // precompute;
    int hash[26] {0};
    for (int i=0; i< s.size();i++){
        hash[s[i]-'a']++;

    }

    int q;
    cout <<"No of query: ";
    cin >> q;
    while(q--){
        char c;
        cout << "Enter character: ";
        cin >> c;
        if (c>='a' && c<='z') {
            cout << hash[c-'a'] <<endl;
        }else{
            cout << 0 <<endl;
        }
    }
}

void character_hashing_upperCase(){
    cout << "Enter string: ";
    string s;
    cin >> s;

    // precompute
    int hash[26] = {0};
    for (int i=0 ; i<s.size();i++){
        hash[s[i]-'A']++;
    }

    int q;
    cout << "No of query: ";
    cin >> q;
    while (q--)
    {
        char c;
        cout << "Enter character: ";
        cin >> c;
        if (c >= 'A' && c <= 'Z')
        {
            cout << hash[c - 'A'] << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}


void character_hashing_having_both_lower_upper_case(){
    cout << "Enter string: ";
    string s;
    cin >> s;


    // precompute
    int hash[256] = {0};
    for (int i=0; i<s.size();i++){
         hash[s[i]]++;
    }

    int q;
    cout << "No of query: ";
    cin >> q;

    while (q--)
    {
        char c;
        cout << "Enter character: ";
        cin >> c;
        if (c >= '0' && c <= '256')
        {
            cout << hash[c ] << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}
int main(){
    character_hashing_lowercase();
    character_hashing_upperCase();
    character_hashing_having_both_lower_upper_case();
}
