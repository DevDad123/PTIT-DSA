#include <iostream>
using namespace std;

bool check = false;

// Hàm sinh cấu hình tiếp theo
void sinh(int d[], int a) {
    bool ok = false;
    for (int i = a - 1; i >= 0; i--) {
        if (d[i] == 0) {
            ok = true;
            d[i] = 1;
            for (int j = i + 1; j < a; j++) {
                d[j] = 0;
            }
            break;
        }
    }
    if (!ok) {
        check = true; // Cấu hình cuối cùng
    }
}

// Hàm kiểm tra tổng các phần tử trong mảng d có bằng k không
bool sum_equal_k(int m[], int d[], int n, int k) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (d[i] == 1) {
            sum += m[i];
        }
    }
    return sum == k;
}

int main() {
    int n, k;
    cin >> n >> k;
    
    int m[n];
    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }

    int d[n] = {0}; // Đảm bảo kích thước của d phù hợp với n
    int cnt = 0;
    
    while (!check) {
        if (sum_equal_k(m, d, n, k)) {
            for (int i = 0; i < n; i++) {
                if (d[i] == 1) {
                    cout << m[i] << " ";
                }
            }
            cout << endl;
            cnt++;
        }
        sinh(d, n); // Cập nhật cấu hình của d
    }
    
    cout << cnt << endl;

    return 0;
}
