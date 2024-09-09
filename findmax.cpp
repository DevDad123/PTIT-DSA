#include <iostream>
#include <vector>
#include <algorithm>  
#define LL long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;  
        vector<int> a(n); 
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        
        int mod = 1e9 + 7;
        LL sum = 0; 
        
        for (int i = 0; i < n; i++) {
            sum = (sum + 1LL * a[i] * i) % mod;
        }
        
        cout << sum << endl;
    }
    return 0;
}
