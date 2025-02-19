#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#define ll long long

using namespace std;

int prime[10000001];

void sieve(int b){
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= b; i++) prime[i] = 1;

    for (int i = 2; i <= sqrt(b); i++){
        if (prime[i]){
            for (int j = i * i; j <= b; j += i) prime[j] = 0;
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        if (a > b) swap(a, b);
        sieve(b);
        for (int i = a; i <= b; i++){
            if (prime[i]) cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}