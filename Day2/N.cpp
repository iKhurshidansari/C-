#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << char(ch + 32);
    }
    if (ch >= 'a' && ch <= 'z')
    {
        cout << char(ch - 32);
    }
    return 0;
}



/* using functions
int main(){
    char x;
    cin >> x;
    if(islower(x))
        cout << (char)toupper(x) << endl;
    else
        cout << (char)tolower(x) << endl;
    return 0;
}






/* Given a letter X. If the letter is lowercase print the letter after converting it from lowercase letter to uppercase letter.
 Otherwise print the letter after converting it from uppercase letter to lowercase letter

https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N*/