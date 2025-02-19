#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    double sum = 1;
    for (int i = 2; i <= n; i++) sum += 1.0 / i;
    cout << fixed << setprecision(4) << sum;
    return 0;
}