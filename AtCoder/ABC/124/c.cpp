#include <iostream>
#include <cstring>

#define rep(i, N) for (LL i = 0; i < N; ++i)
typedef long long int LL;

using namespace std;

int main() {
    LL c = 0;
    string S;
    cin >> S;

    for (LL i = 1; i < S.length(); ++i) {
        if (S[i] == S[i - 1]) {
            S[i] = (S[i] == '0') ? '1' : '0';
            ++c;
        }
    }

    cout << c << endl;
    return 0;
}
