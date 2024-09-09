#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int m,n,k;
        cin >> m >> n >> k;
        int a[m];
        int b[n];
        vector<int> res;
        for(int i = 0 ; i < m ; i++){
            cin >> a[i];
            res.push_back(a[i]);
        }
        for(int i = 0 ; i < n ; i++){
            cin >> b[i];
            res.push_back(b[i]);
        }
        sort(res.begin(),res.end());
        for(int i = 0 ; i < res.size(); i++){
            cout << res[k - 1] << endl;
            break;
        }
    }
}