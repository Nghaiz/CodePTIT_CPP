/*
Cho ma trận A[N][M]. Nhiệm vụ của bạn là tìm hình chữ nhật con của A[][] có tổng các phần tử lớn nhất.
Ví dụ với ma trận dưới đây ta sẽ tìm ra được ma trận con có tổng các tử lớn nhất là 29.

Input:
Dòng đầu tiên đưa vào số lượng bộ test T.
Những dòng kế tiếp đưa vào T bộ test. Mỗi bộ test gồm hai dòng: dòng đầu tiên đưa vào N, M;
Dòng tiếp theo đưa vào N×M số A[i][j] ; các số được viết cách nhau một vài khoảng trống.
T, M, N, A[i][j] thỏa mãn ràng buộc: 1≤ T ≤100; 1≤ M, N ≤200; -10^5≤ A[i][j] ≤10^5.
Output:
Đưa ra kết quả mỗi test theo từng dòng.
*/

#include <bits/stdc++.h>
using namespace std;

int kadaneAlgorithm(vector<int>& temp) {
    int rows = temp.size();
    int currSum = 0;
    int maxSum = INT_MIN;

    for (int i = 0; i < rows; i++) {
        currSum += temp[i];

        if (maxSum < currSum) maxSum = currSum;
        if (currSum < 0) currSum = 0;
    }
    return maxSum;
}

int maxSumRectangle(vector<vector<int>> &mat) {
    int rows = mat.size();
    int cols = mat[0].size();

    int maxSum = INT_MIN;
    vector<int> temp(rows);

    for (int left = 0; left < cols; left++) {

        for (int i = 0; i < rows; i++) temp[i] = 0;

        for (int right = left; right < cols; right++) {
            for (int row = 0; row < rows; row++) {
                temp[row] += mat[row][right];
            }
            int sum = kadaneAlgorithm(temp);

            maxSum = max(maxSum, sum);
        }
    }
    return maxSum;
}

int main() {
    int t;
    cin >> t;
    while (t--){
        int n, m;
        cin >> n >> m;
        vector<vector<int>> v(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> v[i][j];
            }
        }
        int res = maxSumRectangle(v); 
        cout << res << "\n";   
    }          
    return 0;
}