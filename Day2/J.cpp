#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if(a%b==0 || b%a==0)
        cout << "Multiples" << endl;
    else
        cout << "No Multiples" << endl;
    return 0;
}

/* Given two numbers A and B. Print "Multiples" if A is multiple of B or vice versa. Otherwise print "No Multiples".

Input
Only one line containing two numbers A, B (1  ≤  A, B  ≤  106)

Output
Print "Multiples" or "No Multiples" corresponding to the read numbers.
Note
***A is said to be Multiple of B if B is divisible by A.

Question Link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/J

*/
