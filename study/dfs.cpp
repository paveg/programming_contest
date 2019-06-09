#include <iostream>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)

const int ORDER_SIZE = 3;
int cnt = 0;

void dfs(int x, int y) {
    printf("{ x: %d, y: %d }\n", x, y);
    if (x == ORDER_SIZE && y == ORDER_SIZE) {
        cnt++;
        return;
    }

    if (y < ORDER_SIZE) {
        dfs(x, y + 1);
    }
    if (x < ORDER_SIZE) {
        dfs(x + 1, y);
    }
}

int main() {
    dfs(0, 0);
    cout << cnt << endl;
}
