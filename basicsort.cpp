#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n + 5);
    vector<int> res(n + 5 , 0);
    for(int i = 1 ; i <= n ; i++){
        cin >> a[i];
    }
    int len = 0;
    for(int i = 1 ; i <= n ; i++){
        res[a[i]] = res[a[i] - 1] + 1;
        len = max(len,res[a[i]]);
    }
    int final = n - len;
    cout << final << endl;
    return 0;
}
