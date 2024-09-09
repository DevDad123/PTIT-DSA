#include <iostream>
#include <string>
using namespace std;

inline int m(string &s)
{
    int res = 0;
    for(char &i : s)
    {
        if(i == '6') i = '5';
        res = res * 10 + i - '0';
    }
    return res;
}

inline int M(string &s)
{
    int res = 0;
    for(char &i : s)
    {
        if(i == '5') i = '6';
        res = res * 10 + i - '0';
    }
    return res;
}

int main()
{
    int t = 1;
    string a, b;
    while(t--)
    {
        cin >> a >> b;
        cout << m(a) + m(b) << ' ' << M(a) + M(b) << endl;
    }
    return 0;
}