#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
        }
        int ok = false;
        for(int i = 0 ; i < n ; i++){
            if(a[i] == k){
                ok = true;
                cout << i + 1 << endl;
            }
        }
        if(ok == false){
            cout << "NO" << endl;
        }
    }
}