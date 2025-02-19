#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

// Mảng lưu số mũ của các thừa số nguyên tố
vector<int> factors(10003);

// Hàm nhân hai số lớn dạng chuỗi
string multiply(const string &a, const string &b) {
    int n = a.size(), m = b.size();
    vector<int> c(n + m, 0);

    for (int i = n - 1; i >= 0; --i) {
        for (int j = m - 1; j >= 0; --j) {
            int mul = (a[i] - '0') * (b[j] - '0');
            mul += c[i + j + 1];
            c[i + j + 1] = mul % 10;
            c[i + j] += mul / 10;
        }
    }

    string res;
    for (int num : c) {
        if (!(res.empty() && num == 0)) { // Bỏ các số 0 ở đầu
            res.push_back(num + '0');
        }
    }
    return res.empty() ? "0" : res;
}

// Phân tích thừa số nguyên tố của một số và cộng số mũ vào mảng factors
void multiplyFactors(int n) {
    int lim = sqrt(n);
    for (int i = 2; i <= lim; ++i) {
        while (n % i == 0) {
            ++factors[i];
            n /= i;
        }
    }
    if (n > 1) ++factors[n];
}

// Phân tích thừa số nguyên tố của một số và trừ số mũ khỏi mảng factors
void divideFactors(int n) {
    int lim = sqrt(n);
    for (int i = 2; i <= lim; ++i) {
        while (n % i == 0) {
            --factors[i];
            n /= i;
        }
    }
    if (n > 1) --factors[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    // Phân tích thừa số nguyên tố cho (2n)! / (n! * (n+1)!)
    int m = n + 1; // Để tính (2n)! chia (n+1)!
    for (int i = 0; i < n; ++i) multiplyFactors(2 * m - i); // Nhân các số từ (2n) đến (n+1)
    for (int i = 1; i <= m; ++i) divideFactors(i);          // Chia các số từ 1 đến (n+1)

    // Tính kết quả từ các thừa số nguyên tố
    string res = "1";
    for (int i = 2; i < factors.size(); ++i) {
        if (factors[i] > 0) {
            string factorStr = to_string(i);
            for (int j = 0; j < factors[i]; ++j) {
                res = multiply(res, factorStr);
            }
        }
    }
    cout << res;
    return 0;
}
