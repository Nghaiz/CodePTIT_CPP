#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    ll fib[100];
    fib[0] = 0, fib[1] = 1;
    for (int i = 2; i <= 92; i++){
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    
    int t;
    cin >> t;
    while (t--){
        int n; cin >> n;
        cout << fib[n] << "\n";
    }
    return 0;
}