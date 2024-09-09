#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int n, k;
char a[20];
int m[20];
vector<string> res;

void backtrack(int i) {
    if(i == n) { // Khi mà i chạy đến chữ cuối cùng trong mảng
        int dem = 0;
        for(int p = 0; p < n; p++) {
            if(m[p] == 1) {
                dem++; // nếu nó lấy thì cho biến đếm tăng
            }
        }
        if(dem == k) {
            string tmp;
            for(int p = 0; p < n; p++) {
                if(m[p] == 1) {
                    tmp += a[p];
                }
            }
            res.push_back(tmp);
        }
        return;
    }
    
    // Kiểm tra các trường hợp 0 lấy
    m[i] = 0;
    backtrack(i + 1);
    
    // kiểm tra đến các trường hợp lấy
    m[i] = 1;
    backtrack(i + 1);
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> k;
        for(int i = 0; i < n; i++) {
            a[i] = char(int('A') + i);
        }
        res.clear();
        backtrack(0);
        sort(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++) {
            cout << res[i] << endl;
        }
    }
}
