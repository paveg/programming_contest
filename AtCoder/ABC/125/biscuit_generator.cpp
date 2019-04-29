#include <iostream>

using namespace std;

int main() {
    int A, B, T;
    cin >> A >> B >> T;

    int counter = 0;
    for (int i = 1; i * A < T + 0.5; i++) {
        counter += B;
    }

    cout << counter << endl;
    return 0;
}
