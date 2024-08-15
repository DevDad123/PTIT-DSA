#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0 ; i < n ; i++){
        cin >> a[i];
    }
    int b[10000] = {0};
    for(int i = 0 ; i < n ; i++){
        b[a[i]]++;
    }
    for(int i = 0 ; i < n ; i++){
        if(b[a[i]] > 0){
            cout << a[i] << " ";
            b[a[i]] = 0;
        }
    }
}