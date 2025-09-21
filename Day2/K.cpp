#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min({a, b, c}) << " " << max({a, b, c}) << endl;
    return 0;
}
/*or we can solve it without using min() and max() functions

int main()
{
    int A, B, C;
    cin >> A >> B >> C;

    int min = A;
    if (B < min)
        min = B;
    if (C < min)
        min = C;

    int max = A;
    if (B > max)
        max = B;
    if (C > max)
        max = C;

    cout << min << " " << max << endl;
    return 0;
}


/* Given 3 numbers A, B and C, Print the minimum and the maximum numbers.
Input
Only one line containing 3 numbers A, B and C ( - 105 ≤ A, B, C ≤ 105)

Output
Print the minimum number followed by a single space then print the maximum number.
https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K*/