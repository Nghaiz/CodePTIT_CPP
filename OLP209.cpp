#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

vector<int> a;
ll N = 1e5;
 
void sinh(int i) {
	if(i < N) {
		a.push_back(i);
		sinh(i * 10 + 1);
		sinh(i * 10 + 2);
		sinh(i * 10 + 3);
	}
}
 
int main() {
    ios_base::sync_with_stdio(0); 
    cin.tie(0); cout.tie(0);
 
	for(int i = 1; i <= 3; i++) {
		sinh(i);
	}
 
	int dp[N] = {0};
    for(int &x : a) dp[x] = 1;
 
    for (int j = 1; j <= N; j++) {
        for (int i = 0; i < a.size(); i++) {
            if (j - a[i] > 0 && dp[j - a[i]]) {
                if (!dp[j]) dp[j] = dp[j - a[i]] + 1;
                else dp[j] = min(dp[j], dp[j - a[i]] + 1);
            }
        }
    }
	int t; cin >> t;
	while(t--) {
		int X; cin >> X;
	    cout << dp[X] << "\n";
	}
    return 0;
}



/*
Cho số N, bạn cần phân tích N thành K số A[1], A[2], …, A[K] thỏa mãn:

A[1] + A[2] + ... + A[K] = N (N ≤ 100000)
A[i] chỉ chứa các chữ số 1, 2, 3.
Có thể có nhiều cách phân tích. Nhiệm vụ của bạn là hãy tìm giá trị K nhỏ nhất thỏa mãn yêu cầu.

Giải thích:

123 = 123
456 = 133 + 323
90 = 22 + 22 + 23 + 23
1 = 1
1000 = 132 + 232 + 313 + 323
*/