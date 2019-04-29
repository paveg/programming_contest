#include <iostream>

using namespace std;

int main() {
    int N, R = 0;
    cin >> N;
    int V[50], C[50];

    for (int i = 0; i < N; i++) cin >> V[i];
    for (int i = 0; i < N; i++) cin >> C[i];

    int tx;
    for (int i = 0; i < N; i++) {
        tx = V[i] - C[i];
        if (tx > 0) {
            R += tx;
        }
    }

    cout << R << endl;
    return 0;
}
