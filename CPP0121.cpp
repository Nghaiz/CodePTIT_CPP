#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

// ll gcd (ll a, ll b){
//     while (b){
//         int r = b;
//         b = a % b;
//         a = r;
//     }
//     return a;
// }

// ll lcm (ll a, ll b){
//     return a / gcd(a, b) * b;
// }

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        ll a, b;
        cin >> a >> b;
        cout << a / __gcd(a, b) * b << " " << __gcd(a, b) << "\n";
    }
    return 0;
}