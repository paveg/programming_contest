#include <cstdio>

using namespace std;

typedef long long int ll;
#define REP(i, I, N) for (int i = I; i < N; ++i)
#define rep(i, N) REP(i, 0, N)

char pairCh(char t) {
    if (t == 'A' || t == 'T') {
        return t == 'A' ? 'T' : 'A';
    } else if (t == 'C' || t == 'G') {
        return t == 'C' ? 'G' : 'C';
    }
}

int main() {
    char b;
    scanf("%c", &b);

    printf("%c\n", pairCh(b));
    return 0;
}
