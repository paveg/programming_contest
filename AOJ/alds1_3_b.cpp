#include <string>
#include <queue>
#include <iostream>

using namespace std;

struct P {
    string name;
    int req;
};

int main() {
    queue<P> que;
    int n, q;
    cin >> n >> q;
    P p[n], pp;
    for (int i = 0; i < n; i++) {
        cin >> p[i].name >> p[i].req;
        que.push(p[i]);
    }

    int timer = 0;
    while (!que.empty()) {
        pp = que.front();
        if (pp.req > q) {
            pp.req -= q;
            timer += q;
            que.pop();
            que.push(pp);
        } else {
            timer += pp.req;

            cout << que.front().name << " " << timer << endl;
            que.pop();
        }
    }

    return 0;
}
