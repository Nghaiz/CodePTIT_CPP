#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct NhanVien {
    int stt;
    string ten, sex, dob, dc, tax, date;
} nv;

bool cmp(nv a, nv b){
    string w;
    vector<string> v1, v2;
    stringstream ss1(a.dob), ss2(b.dob);
    while (getline(ss1, w, '/')){
        v1.push_back(w);
    }
    while (getline(ss2, w, '/')){
        v2.push_back(w);
    }

    if (v1[2] != v2[2]) return v1[2] < v2[2];
    if (v1[0] != v2[0]) return v1[0] < v2[0];
    return v1[1] < v2[1];
}

void nhap(nv &x){
    cin.ignore();
    x.stt = cnt++;
    getline(cin, x.ten);
    cin >> x.sex >> x.dob;
    cin.ignore();
    getline(cin, x.dc);
    cin >> x.tax >> x.date;
}

void sapxep(nv a[], int n){
    sort(a, a + n, cmp);
}

void inds(nv a[], int n){
    for (int i = 0; i < n; i++){
        cout << setw(5) << setfill('0') << a[i].stt << " ";
        cout << a[i].ten << " " <<  a[i].sex << " " << a[i].dob << " " << a[i].dc << " " << a[i].tax << " " << a[i].date << "\n";
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    nv ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}