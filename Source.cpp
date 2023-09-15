#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;
ll gcd(ll a, ll b) {
    if (a > b) return gcd(a - b, b);
    else if (b > a)return gcd(a, b - a);
    else return a;
}

int main() {
    ll a, b; cin >> a >> b;
    cout << gcd(a, b) << " " << a / gcd(a, b) * b;
    return 0;
}