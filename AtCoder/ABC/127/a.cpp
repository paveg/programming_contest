#include <iostream>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

int main() {
    int A, B;
    cin >> A >> B;
    if (6 <= A && A <= 12) {
        B /= 2;
    } else if (A <= 5) {
        B = 0;
    }

    cout << B << endl;
    return 0;
}
