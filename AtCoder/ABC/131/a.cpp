#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
using ll = long long;
const ll inf = (1 << 30) - 1;
const ll infll = (1LL << 61) - 1;
const ll mod = 1e9 + 7;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < 3 ; i++) {
        if (s[i] == s[i+1]) {
            cout << "Bad" << endl;
            return 0;
        }
    }
    cout << "Good" << endl;
    return 0;
}
