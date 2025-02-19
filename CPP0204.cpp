#include <bits/stdc++.h>
#define ll long long
#define MAX 1000001

using namespace std;

int prime[MAX];

void sieve (){
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= MAX; i++) prime[i] = 1;
    int tmp = sqrt(MAX);
    for (int i = 2; i <= tmp; i++){
        if (prime[i]){
            for (int j = i * i; j <= MAX; j += i) prime[j] = 0;
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
        int l, r, cnt = 0;
        cin >> l >> r;
        for (int i = l; i <= r; i++){
            if (prime[i]) cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}