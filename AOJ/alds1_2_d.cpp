#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

long long counter = 0;
int A[1000000];
int n;
vector<int> G;

void insertionSort(int A[], int n, int g) {
    for (int i = g; i < n; i++) {
        int v = A[i];
        int j = i - g;
        while (j >= 0 && A[j] > v) {
            A[j + g] = A[j];
            j -= g;
            counter++;
        }
        A[j + g] = v;
    }
}

void shellSort(int A[], int n) {
    for (int h = 1;;) {
        if (h > n) break;
        G.push_back(h);
        h = 3 * h + 1;
    }

    for (int i = G.size() - 1; i >= 0; i--) {
        insertionSort(A, n, G[i]);
    }
}

// TODO: 写経になってしまったので、解説を読み込んで理解に落とし込む
int main() {
    cin >> n;
    for (int i = 0; i < n; i++) scanf("%d", &A[i]);

    shellSort(A, n);
    cout << G.size() << endl;
    for (int i = G.size() - 1; i >= 0; i--) {
        printf("%d", G[i]);
        if (i) printf(" ");
    }
    printf("\n");
    printf("%d\n", counter);
    for (int i = 0; i < n; i++) printf("%d\n", A[i]);

    return 0;
}
