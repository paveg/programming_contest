#include <cstdio>

#define rep(i, N) for (int i = 0; i < N; ++i)

bool binarySearch(int A[], int l, int r, int key) {
    while (l < r) {
        int m = (l + r) / 2;
        if (key == A[m]) return true;
        if (key > A[m]) l = m + 1;
        else if (key < A[m]) r = m;
    }
    return false;
}

int main() {
    int n, q;
    scanf("%d", &n);
    int left = 0, right = n, sum = 0;
    int S[n];
    rep(i, n) scanf("%d", &S[i]);

    scanf("%d", &q);
    int T[q];
    rep(i, q) scanf("%d", &T[i]);
    for (int &key: T) {
        if (binarySearch(S, left, right, key)) sum++;
    }

    printf("%d\n", sum);
    return 0;
}
