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
        double a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        cout << fixed << setprecision(4) << sqrt(pow(a1 - b1, 2) + pow(a2 - b2, 2)) << "\n";
    }
    return 0;
}