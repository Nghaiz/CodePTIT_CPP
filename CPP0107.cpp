#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

vector<string> ma101 = {"A", "B", "B", "A", "D", "C", "C", "A", "B", "D", "C", "C", "A", "B", "D"};
vector<string> ma102 = {"A", "C", "C", "A", "B", "C", "D", "D", "B", "B", "C", "D", "D", "B", "B"};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    cin.ignore();
    while (t--){
        string s, w;
        getline(cin, s);
        vector<string> v;
        
        string id;
        stringstream ss(s);
        ss >> id;
        while (ss >> w){
            v.push_back(w);
        }
        double ans = 0;
        if (id == "101"){
            for (int i = 0; i < 15; i++){
                if (v[i] == ma101[i]) ans += 2.0 / 3;
            }
        }
        else {
            for (int i = 0; i < 15; i++){
                if (v[i] == ma102[i]) ans += 2.0 / 3;
            }
        }
        cout << fixed << setprecision(2) << ans << "\n";
    }
    return 0;
}