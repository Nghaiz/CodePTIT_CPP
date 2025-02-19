#include <bits/stdc++.h>
using namespace std;

int cnt = 1;

typedef struct giangVien{
    int stt;
    string ten, nganh;

    friend istream& operator >> (istream &in, giangVien &x){
        x.stt = cnt++;
        getline(in, x.ten);
        getline(in, x.nganh);
        return in;
    }
    friend ostream& operator << (ostream &out, giangVien x){
        out << "GV";
        out << setw(2) << setfill('0') << x.stt << " ";
        out << x.ten << " ";
        string w, res = "";
        stringstream ss(x.nganh);
        while (ss >> w){
            res += toupper(w[0]);
        }
        out << res;
        return out;
    }
} gv;

bool cmp(gv a, gv b){
    vector<string> v1, v2;
    string w;
    stringstream ss1(a.ten), ss2(b.ten);
    while (ss1 >> w){
        v1.push_back(w);
    }
    while (ss2 >> w){
        v2.push_back(w);
    }
    int len1 = v1.size(), len2 = v2.size();
    if (v1[len1 - 1] != v2[len2 - 1]) return v1[len1 - 1] < v2[len2 - 1];
    
    return a.stt < b.stt;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    cin.ignore();
    gv a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    for (gv x : a) cout << x << "\n";
    return 0;
}