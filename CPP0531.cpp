#include <bits/stdc++.h>
using namespace std;

typedef struct Point{
    long long x, y, z;
} Point;

void nhap(Point &tmp){
    cin >> tmp.x >> tmp.y >> tmp.z;
}

int solve(Point a, Point b, Point c, Point d){
    Point ab, ac, ad;
    ab.x = b.x - a.x, ab.y = b.y - a.y, ab.z = b.z - a.z;
    ac.x = c.x - a.x, ac.y = c.y - a.y, ac.z = c.z - a.z;
    ad.x = d.x - a.x, ad.y = d.y - a.y, ad.z = d.z - a.z;

    long long det = (ab.x * ac.y * ad.z + ab.y * ac.z * ad.x + ab.z * ac.x * ad.y) - (ab.z * ac.y * ad.x + ab.y * ac.x * ad.z + ab.x * ac.z * ad.y);
    return det == 0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        Point a, b, c, d;
        nhap(a); nhap(b); nhap(c); nhap(d);
        if (solve(a, b, c, d)) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}