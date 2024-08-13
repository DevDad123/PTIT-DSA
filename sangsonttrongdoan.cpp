#include<iostream>
#include<algorithm>
using namespace std;
int max(int a , int b){
    if(a > b){
        return a;
    }
    return b;
}
void sieve(int l , int r){
    int Prime[l-r+1];
    for(int i = 0 ; i <= l-r+1 ; i++){
        Prime[i] = 1;
    }
    for(int i = 2 ; i <= sqrt(r) ; i++){
        for(int j = max(i*i,(r + i - 1)/i*i); j <= r ; j+=i){
            Prime[j-l] = 0;
        }
    }
    for(int i = max(2,l); i <= l - r + 1 ; i++){
        if(Prime[i - l]){
            cout << i << " ";
        }
    }
    cout << endl;
}
int main(){
    int l,r;
    cin >> l >> r;
    sieve(l,r);
}