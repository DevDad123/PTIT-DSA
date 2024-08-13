#include <iostream>
#include <string>
using namespace std;

void sinh(string s , int n){
    int ok = 0;
    for(int i = n - 1 ; i >= 0 ; i--){
        if(s[i] == '0'){
            s[i] = '1';
            ok = 1;
            for(int j = i + 1 ; j < n ; j++) {
            s[j] = '0';
            }
            break;
        }
    }
    if(ok == 0){
        cout << string(n,'0') << endl;
    }
    else {
        cout << s << endl;
    }
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        sinh(s, s.length());
    }
    return 0;
}
