#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int ptich(int n){
    int dem = 0;
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            int cnt = 0;
            while (n % i == 0){
                cnt++;
                n /= i;
            }
            if (cnt > 1) return 0;
            else dem++;
        }
    }
    if (n > 1) dem++;
    return dem == 3;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if (ptich(n)) cout << "1\n";
        else cout << "0\n";
    }
    return 0;
}