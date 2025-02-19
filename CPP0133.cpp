#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int prime[100000];
void sieve(int n){
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= n; i++) prime[i] = 1;

    for (int i = 2; i * i <= n; i++){
        if (prime[i]){
            for (int j = i * i; j <= n; j += i) prime[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        sieve(n);
        for (int i = 2; i <= n; i++){
            if (prime[i]) cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}