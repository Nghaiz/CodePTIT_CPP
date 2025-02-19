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
        int n;
        cin >> n;
        if (n % 9 == 0) cout << 9 << "\n";
        else cout << n % 9 << "\n";
    }
    return 0;
}