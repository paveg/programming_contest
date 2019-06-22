#include <iostream>
#include <vector>

using namespace std;
typedef long long ll;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

ll gcd(ll a, ll b) { return b ? gcd(b, a % b) : a; }
ll lcm(ll a, ll b) { return a / gcd(b, a % b) * b; }

int main() {
    return 0;
}
