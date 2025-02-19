#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

ll fac (int n){
    ll ans = 1;
    for (int i = 2; i <= n; i++) ans *= i;
    return ans;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    ll sum = 1;
    for (int i = 2; i <= n; i++){
        sum += fac(i);
    }
    cout << sum;
    return 0;
}