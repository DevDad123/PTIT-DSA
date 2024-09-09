#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int b[10000] = {0};
        int res = 0;
        for(int i = 0 ; i < s.size() ; i++){
            b[s[i]]++;
            if(res < b[s[i]]){
                res = b[s[i]];
            }
        }
        if(s.size() % 2 == 0 && res <= s.size() - res){
            cout << 1 << endl;
        } 
        else if(s.size() % 2 == 1 && res <= (s.size() / 2) + 1){
            cout << 1 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
}