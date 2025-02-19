#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct ThiSinh {
    string ten, dob;
    double a, b, c;
} sv;

void nhap(sv &x){
    getline(cin, x.ten);
    getline(cin, x.dob);
    cin >> x.a >> x.b >> x.c;
}

void in(sv x){
    cout << fixed << setprecision(1) << x.ten << " " << x.dob << " " << x.a + x.b + x.c; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sv A;
    nhap(A);
    in(A);
    return 0;
}