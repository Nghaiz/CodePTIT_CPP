#include <bits/stdc++.h>
#define ll long long
#define PI 3.141592653589793238

using namespace std;

typedef struct toaDo {
    double x, y;
} td;

double triangle(double a, double b, double c){
    if (a + b > c && a + c > b && b + c > a){
        double p = (a + b + c) / 2.0;
        
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }
    else return -1.0;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        td a, b, c;
        cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y; 
        double ab = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
        double bc = sqrt(pow(c.x - b.x, 2) + pow(c.y - b.y, 2));
        double ac = sqrt(pow(a.x - c.x, 2) + pow(a.y - c.y, 2));
        
        double area = triangle(ab, bc, ac);
        if (area < 0) cout << "INVALID\n";
        else {
            double r = (ab * bc * ac) / (4 * area);
            cout << fixed << setprecision(3) << r * r * PI << "\n";
        }
    }
    return 0;
}