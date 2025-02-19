#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

const long double epsilon = 1e-9;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    long double X, Y, r;
    cin >> X >> Y >> r;

    ll count = 0;
    ll xMin = X - r;
    ll xMax = X + r;

    for (ll x = xMin; x <= xMax; ++x) {
        long double distX = fabs(x - X);

        if ((distX - r) <= epsilon) {
            long double distY = sqrt(r * r - distX * distX);
            ll yMin = Y - distY;
            ll yMax = Y + distY;

            // Điều chỉnh yMin nếu nằm ngoài đường tròn
            while (yMin <= Y + distY && !((x - X) * (x - X) + (yMin - Y) * (yMin - Y) - r * r <= epsilon)) {
                ++yMin;
            }

            // Điều chỉnh yMax nếu nằm ngoài đường tròn
            while (yMax >= Y - distY && !((x - X) * (x - X) + (yMax - Y) * (yMax - Y) - r * r <= epsilon)) {
                --yMax;
            }

            // Tính số lượng điểm y trong khoảng từ yMin đến yMax
            count += (yMax - yMin + 1);
        }
    }
    cout << count;
    return 0;
}