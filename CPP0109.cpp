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
    int cnt = 0, start = pow(10, n - 1), end = pow(10, n) - 1;
    for (int i = start; i <= end; i++){
        int d, odd = 0, even = 0, tmp = i;
        while (tmp){
            d = tmp % 10;
            if (d & 1) odd++;
            else even++;
            tmp /= 10;
        }
        if (odd == even) {
            if (cnt == 10) {
                cout << "\n";
                cnt = 0;
            }
            ++cnt;
            cout << i << " ";
        }
    }
    return 0;
}