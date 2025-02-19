#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n, max = -1e9;
        cin >> n;
        int a[n + 2];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (max < a[i]) max = a[i];
        }
        cout << max << "\n";
    }
    return 0;
}