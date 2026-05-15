#include<bits/stdc++.h>
using namespace std;




int main(){

    // unordered_map
    unordered_map<string,int> mp;

    // insertion 
    mp["Mayur"] = 99;
    mp.insert({"Bhawani",100});
    int mayur_score= mp["Mayur"];
    cout << "Mayur score: "<< mayur_score <<endl;

    // updation
    mp["Mayur"] =100;
    cout << "Updated Mayur Score: "<< mp["Mayur"]<<endl;

    // Count- key exist or not; return 1 if exists else return 0;
    if(mp.count("Mayur Pal")) {
        cout << "Present"<<endl;
    }else{
        cout << "Not Present" <<endl;
    }

    // find- key exist or not; return an itereator. if it hits .end() the key doesnot exist
    if(mp.find("Mayur") != mp.end()) {
        cout << "Present" <<endl;
    } else {
        cout << "Not Present" << endl;
    }

    // Delete Element
    mp.erase("Mayur");
    if (mp.find("Mayur") != mp.end())
    {
        cout << "Present" << endl;
    }
    else
    {
        cout << "Not Present" << endl;
    }
    mp["Mayur"] = 99;
    
    // size 
    int totalElements = mp.size();
    cout << "Total Element in MP: "<< totalElements<<endl;


    // clear- empty the entire map
    mp.clear();
    cout << "Total ELement in MP after clear: "<< mp.size()<<endl;
    // mp.clear()

    // loop through map

    mp["Mayur"] = 99;
    mp.insert({"Bhawani", 100});
    for(const auto& pair: mp) {
        cout << pair.first << " scored: "<< pair.second <<endl;
    }
}