#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int cnt = 1;

typedef struct NhanVien {
    int ma;
    string ten, sex, dob, dc, tax, date;
} nv;

void nhap(nv &x){
    cin.ignore();
    getline(cin, x.ten);
    cin >> x.sex >> x.dob;
    cin.ignore();
    getline(cin, x.dc);
    cin >> x.tax >> x.date;
    x.ma = cnt++;
}

void inds(nv a[], int n){
    for (int i = 0; i < n; i++){
        cout << setw(5) << setfill('0') << a[i].ma << " ";
        cout << a[i].ten << " " << a[i].sex << " " << a[i].dob << " " << a[i].dc << " " << a[i].tax << " " << a[i].date << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nv ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}