#include <iostream>
#include <vector>
using namespace std;


bool is_palindrome(const vector<int>& a) {
    int left = 0;
    int right = a.size() - 1;
    while (left < right) {
        if (a[left] != a[right]) {
            return false;
        }
        ++left;
        --right;
    }
    return true;
}


void sinh(vector<int>& a, bool& check) {
    int i = a.size() - 1;
    while (i >= 0 && a[i] == 1) { // tim bit 0 dau tien tinh tu be phai
        a[i] = 0;
        --i;
    }
    if (i < 0) { //kiem tra khi trong day ko con so 1 nao
        check = false; // Đây chính là cấu hình cuối cùng
    } else {
        a[i] = 1; // khi ko con so 0 nao thi so cuoi cung la so co n so 1
    }
}

// Hàm khởi tạo mảng với giá trị 0
void khoitao(vector<int>& a) {
    fill(a.begin(), a.end(), 0);
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    bool check = true;

    khoitao(a);

    while (check) {
        if (is_palindrome(a)) {
            for (int i = 0; i < n; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
        sinh(a, check);
    }

    return 0;
}
