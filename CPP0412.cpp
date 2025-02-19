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
        int n; cin >> n;
        int a[n + 2], b[3] = {0};
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[a[i]]++;
        }

        for (int i = 0; i <= 2; i++){
            for (int j = 1; j <= b[i]; j++) cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
