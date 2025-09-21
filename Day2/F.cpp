#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a, b;
    cin >> a >> b;
    cout << (a % 10) + ( b % 10) << endl;
}
/*Given two numbers N and M. Print the summation of their last digits.

Input
Only one line containing two numbers N, M (0 ≤ N, M ≤ 1018).

Output
Print the answer of the problem.

Example : a= 13, b = 12

last digit in the first number is 3 and last digit in the second number is 2.

So the answer is: (3 + 2 = 5)
*/