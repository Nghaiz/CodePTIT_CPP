#include <bits/stdc++.h>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while (t--){
		int n, m, l;
		cin >> n >> m >> l;
		vector<vector<int>> v(n + 1, vector<int>(m + 1, 0)), dp(n + 1, vector<int>(m + 1, 0));

		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				cin >> v[i][j];
			}
		}

		//Summed area table
		for (int i = 1; i <= n; i++){
			for (int j = 1; j <= m; j++){
				dp[i][j] = v[i][j] + dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1];
			}
		}

		for (int i = l; i <= n; i++){
			for (int j = l; j <= m; j++){
				int res = dp[i][j] - dp[i - l][j] - dp[i][j - l] + dp[i - l][j - l];

				cout << res / (l * l) << " ";
			}
			cout << "\n";
		}

		//*Kernel size: l = 2k + 1
		// int k = (l - 1) / 2;
		// for (int i = k + 1; i <= n - k; i++){
		// 	for (int j = k + 1; j <= m - k; j++){
		// 		int res = dp[i + k][j + k] - dp[i + k][j - k - 1] - dp[i - k - 1][j + k] + dp[i - k - 1][j - k - 1];

		// 		cout << res / (l * l) << " ";
		// 	}
		// 	cout << "\n";
		// }
	}
	return 0;
}