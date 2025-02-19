#include <bits/stdc++.h>
using namespace std;

void reverseArr(int a[], int l, int r) {
    while (l < r) {
        swap(a[l], a[r]);
        l++;
        r--;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t; 
    while (t--) {
        int n, d;
        cin >> n >> d;
        d %= n; 

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        reverseArr(a, 0, d - 1);
        
        reverseArr(a, d, n - 1);
        
        reverseArr(a, 0, n - 1);
        
        for (int i = 0; i < n; i++) cout << a[i] << " ";
        cout << "\n";
    }
    return 0;
}
