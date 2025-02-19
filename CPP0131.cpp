#include <bits/stdc++.h>
#define ll long long
#define MOD 1000000007

using namespace std;

int prime[100001];

void sieve (){
    for (int i = 1; i <= 100001; i++) prime[i] = i;
    int tmp = sqrt(100001);
    for (int i = 2; i <= tmp; i++){
        if (prime[i] == i){
            for (int j = i * i; j <= 100001; j += i){
                if (prime[j] == j) prime[j] = i;
            }
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    sieve();
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++){
            cout << prime[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}