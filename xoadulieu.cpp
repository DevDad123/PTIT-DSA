#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin >> n;
    int cnt = 0;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    cin >> k;
    for(int i = 0 ; i < n ; i++){
        if(a[i] != k){
            cout << a[i] << " ";
        }
    }

}