/*
Problem Statement: Given a string, check if the string is palindrome or not. A string is said to be palindrome if the reverse of the string is the same as the string.

Example 1:
Input: Str =  “ABCDCBA”
Output: Palindrome
Explanation: String when reversed is the same as string.

Example 2:
Input: Str = “TAKE U FORWARD”
Output: Not Palindrome
Explanation: String when reversed is not the same as string.

*/
#include <bits/stdc++.h>

using namespace std;

void isPallidrome(string s)
{
    int p1 = 0;
    int p2 = s.length() - 1;

    while (p1 < p2)
    {
        if (s[p1] != s[p2])
        {
            cout << "NOT PALIDROME\n";
            return;
        }
        p1++;
        p2--;
    }
    cout << "PALIDROME\n";
}

void isPallidrome_opt(string s)
{
    int n = s.length();

    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            cout << "NOT PALINDROME\n";
            return;
        }
    }
    cout << "PALIDROME\n";
}

bool isPaliidrome_recursion(int i, string s){
    if(i>=s.length()/2) return true;

    if(s[i]!=s[s.length()-1-i]) {
        return false;
    }

    return isPaliidrome_recursion(i+1,s);
}

void printBool(bool b){
    if (b==true){
        cout << "PALIDROME\n";
    }else{
        cout << "NOT PALINDROME\n";
    }
}

int main()
{

    isPallidrome("ABCDCBA");
    isPallidrome("TAKE U FORWARD");

    isPallidrome_opt("ABCDCBA");
    isPallidrome_opt("TAKE U FORWARD");

    bool b1 = isPaliidrome_recursion(0,"ABCDCBA");
    bool b2 = isPaliidrome_recursion(0,"TAKE U FORWARD");
    printBool(b1);
    printBool(b2);

    return 0;
}