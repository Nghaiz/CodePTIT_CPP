#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct nguoi{
    string ten, dob;
} human;

bool cmp(human a, human b){
    string w;
    vector<string> v1, v2;
    stringstream ss1(a.dob), ss2(b.dob);
    while (getline(ss1, w, '/')){
        v1.push_back(w);
    }
    while (getline(ss2, w, '/')){
        v2.push_back(w);
    }
    
    if (v1[2] != v2[2]) return v1[2] > v2[2];
    if (v1[1] != v2[1]) return v1[1] > v2[1];
    return v1[0] > v2[0];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    human a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].ten >> a[i].dob;
    }
    sort(a, a + n, cmp);
    cout << a[0].ten << "\n" << a[n - 1].ten; 
    return 0;
}