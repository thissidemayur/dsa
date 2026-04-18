#include <bits/stdc++.h>
using namespace std;

/*
Check if a number is prime or not


14

Problem Statement: Given an integer N, check whether it is prime or not. A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2..

Examples

Example 1:
Input:N = 2

Output:True

Explanation: 2 is a prime number because it has two divisors: 1 and 2 (the number itself).

Example 2:
Input:N =10
Output: False

Explanation: 10 is not prime, it is a composite number because it has 4 divisors: 1, 2, 5 and 10.
*/

bool check_prime_brute_force(int num)
{
    if (num <= 1) return false;
    if (num == 2) return true;
    int cnt = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
    {
        return true;
    }
    return false;
}

bool check_prime_good_approch(int num)
{
    if (num<=1) return false;
    if(num ==2) return true;
    int cnt = 0;
    for (int i = 1; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            cnt++;
        }
    }
    cnt++;
    if (cnt == 2)
    {
        return true;
    }
    return false;
}

bool check_prime_optimial_approch(int num)
{

    if (num <= 1)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}

int main()
{

    cout << " ========== BRUTE FORCE ========== " << endl;
    bool is_prime1 = check_prime_brute_force(49);
    cout << "is prime: " << is_prime1 << endl;
    bool is_prime2 = check_prime_brute_force(100);
    cout << "is prime: " << is_prime2 << endl;
    bool is_prime3 = check_prime_brute_force(0);
    cout << "is prime: " << is_prime3 << endl;
    bool is_prime4 = check_prime_brute_force(11);
    cout << "is prime: " << is_prime4 << endl;

    cout << " ========== Good APPROCH ========== " << endl;
    bool is_prime5 = check_prime_good_approch(49);
    cout << "is prime: " << is_prime5 << endl;
    bool is_prime6 = check_prime_good_approch(100);
    cout << "is prime: " << is_prime6 << endl;
    bool is_prime7 = check_prime_good_approch(0);
    cout << "is prime: " << is_prime7 << endl;
    bool is_prime8 = check_prime_good_approch(11);
    cout << "is prime: " << is_prime8 << endl;

    cout << " ========== OPTIMIAL APPROCH ========== " << endl;
    bool is_prime9 = check_prime_optimial_approch(49);
    cout << "is prime: " << is_prime9 << endl;
    bool is_prime10 = check_prime_optimial_approch(100);
    cout << "is prime: " << is_prime10 << endl;
    bool is_prime11 = check_prime_optimial_approch(0);
    cout << "is prime: " << is_prime11 << endl;
    bool is_prime12 = check_prime_optimial_approch(11);
    cout << "is prime: " << is_prime12 << endl;
}

/*
✅ The Real Math (Precise, No Hand-waving)

If:
    n=a×b
Then:
    Either a ≤ √n OR b ≤ √n (at least one must be small)

Because:

⬇️
a≤ sqrt(n) ​or b≤ sqrt(n)
If both were greater than √n:
    a>sqrt(n)
​,b>n
​⇒a×b>n
    ​

⇒a×b>n
*/