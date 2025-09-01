#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int x=a,y=b,z=c;
    if(a>b) swap(a,b);
    if(b>c){
        swap(b,c);
        if(a>b) swap(a,b);
    }
    cout << a << endl << b << endl << c << endl;
    cout << endl;
    cout << x << endl << y << endl << z << endl;
}

/*Given three numbers A, B, C. Print these numbers in ascending order followed by a blank line and then the values in the sequence as they were read.

Input
Only one line containing three numbers A, B, C ( - 106  ≤  A, B, C  ≤  106)

Output
Print the values in ascending order followed by a blank line and then the values in the sequence as they were read.
Example
Input
3 -4 2
Output
-4
2
3

3
-4
2
*/
