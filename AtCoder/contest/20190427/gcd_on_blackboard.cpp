#include <iostream>
#include <algorithm>

using namespace std;

int A[100000000];
int limit = 1;
int counter = 0;

int euclid(int a, int b) {
    if (a < b) swap(a, b);

    if (a % b == 0) {
        return b;
    }
    while (limit > counter) {
        for (int i = a; i > 1; i--) {
            if (b % i == 0) {
                counter++;
                return euclid(b, i);
            }
        }
    }
    return euclid(b, a % b);
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) cin >> A[i];
    int ans = A[0];

    for (int i = 1; i < N; i++) {
        ans = euclid(ans, A[i]);
    }

    cout << ans << endl;
    return 0;
}