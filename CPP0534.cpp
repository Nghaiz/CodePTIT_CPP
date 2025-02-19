#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

typedef struct num {
    string data;
    int cnt;
} num;

int n = 0;
num a[1001];

int find(string s){
    for (int i = 0; i < n; i++){
        if (s == a[i].data) return i;
    }
    return -1;
}

int palind(string s){
    int len = s.size();
    if (len == 1) return 0;
    for (int i = 0; i < len / 2; i++){
        if (s[i] != s[len - i - 1]) return 0;
    }
    return 1;
}

bool cmp(num a, num b){
    if (a.data.size() != b.data.size()) return a.data.size() > b.data.size();
    return a.data > b.data; 
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s;
    while (cin >> s){
        if (palind(s)){
            int pos = find(s);

            if (pos == -1){
                a[n].data = s;
                a[n].cnt = 1;
                ++n;
            }
            else a[pos].cnt++;
        }
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++){
        cout << a[i].data << " " << a[i].cnt << "\n";
    }
    return 0;
}