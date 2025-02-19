#include <bits/stdc++.h>
using namespace std;

int n, k;
int X[100];

void Result() {
    for (int i = 1; i <= k; i++) cout << X[i];
    cout << " ";
}

// Hàm quay lui để sinh tổ hợp
void Try(int i) {
    for (int j = X[i - 1] + 1; j <= n - k + i; j++) {
        X[i] = j;
        if (i == k) Result();
        else Try(i + 1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        X[0] = 0;
        Try(1);
        cout << "\n";
    }
    return 0;
}
