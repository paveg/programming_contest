#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
static const int MAX = 36;

void trace(string a[], int n) {
    for (int i = 0; i < n; i++) {
        if (i > 0) cout << " ";
        cout << a[i];
    }
    cout << endl;
}

void bubbleSort(string r[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = n - 1; j >= i + 1; j--) {
            if (r[j][1] < r[j - 1][1]) {
                swap(r[j], r[j - 1]);
            }
        }
    }
}

void selectionSort(string r[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minj = i;
        for (int j = i; j < n; j++) {
            if (r[minj][1] > r[j][1]) minj = j;
        }
        swap(r[minj], r[i]);
    }
}

bool isStable(string in[], string out[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            for (int a = 0; a < n - 1; a++) {
                for (int b = a + 1; b < n - 1; b++) {
                    if (in[i][1] == in[j][1]) {
                        if (in[i] == out[b] && in[j] == out[a]) return false;
                    }
                }
            }
        }
    }
    return true;
}

// stable sort
int main() {
    int n;
    cin >> n;
    string r[MAX], r1[MAX], r2[MAX];
    for (int i = 0; i < n; i++) cin >> r[i];

    memcpy(r1, r, sizeof(r));
    memcpy(r2, r, sizeof(r));

    bubbleSort(r1, n); // stable
    trace(r1, n);
    if (isStable(r, r1, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    selectionSort(r2, n); // not stable
    trace(r2, n);
    if (isStable(r, r2, n)) {
        cout << "Stable" << endl;
    } else {
        cout << "Not stable" << endl;
    }

    return 0;
}
