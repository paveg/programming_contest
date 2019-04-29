#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

template<class T>
inline bool bigOne(T &a, T b) {
    if (a < b) {
        swap(a, b);
        return true;
    }
    return false;
}

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];

    vector<int> left(N + 1, 0), right(N + 1, 0);
    for (int i = 0; i < N; ++i) left[i + 1] = gcd(left[i], A[i]);
    for (int i = N - 1; i >= 0; --i) right[i] = gcd(right[i + 1], A[i]);

    int res = 0;
    for (int i = 0; i < N; ++i) {
        int leftMax = left[i];
        int rightMax = right[i + 1];
        bigOne(res, gcd(leftMax, rightMax));
    }

    cout << res << endl;
    return 0;
}
