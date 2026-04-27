#include <bits/stdc++.h>
using namespace std;
/**

Write a function that reverses a string. The input string is given as an array of characters s.

You must do this by modifying the input array in-place with O(1) extra memory.




Example 1:

Input: s = ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:

Input: s = ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]

*/

void reverse_string(string s) {
   int p1=0;
   int p2=s.length()-1;


   while(p1<=p2) {
    swap(s[p1++],s[p2--]);
   }
   cout << "Reversed String: " << s <<endl;

}

int main() {

    reverse_string("hello");
    reverse_string("hunny");
    reverse_string("kese ho...");
     return 0;
}