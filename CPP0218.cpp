#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int &x : a) cin >> x;
        sort(a, a + n);

        int x = a[n - 1] - a[0];
        int cnt = 0;

        for (int i = 1; i <= x; i++) {
            int ok = 1;
            for (int j = 1; j < n; j++) {
                if ((a[j] - a[0]) % i != 0) {
                    ok = 0;
                    break;
                }
            }
            if (ok) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}

/*
Cho mảng các số nguyên dương A[] gồm n số. Hãy tìm tất cả các số nguyên dương K sao cho
tất cả các phần tử của mảng A[] lấy phần dư với K đều bằng nhau. 
Ví dụ với mảng A[] = {6, 38, 34} ta tìm được các số K = {1, 2, 4} vì:

6%1 = 38%1 = 34%1 =0; 6%2 = 38%2 = 34%2 =0; 6%4 = 38%4 = 34%4 =2;

Input:

Dòng đầu tiên đưa vào số lượng test T.
Những dòng kế tiếp đưa vào các bộ test. Mỗi test gồm hai dòng: dòng thứ nhất đưa vào số n;
dòng tiếp theo đưa vào n số của mảng A[]. Các số được viết cách nhau một vài khoảng trống.
T, A[i], n thỏa mãn ràng buộc : 1≤T≤100; 0≤n ≤105; 1≤ A[i] ≤105.
Output:

Đưa ra số các số Kkết quả mỗi test theo từng dòng.
*/