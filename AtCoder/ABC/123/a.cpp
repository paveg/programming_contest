#include <cstdio>
#include <string>
#include <vector>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    int size = 5;
    vector<int> Antennas(size);
    int k;
    rep(i, size) scanf("%d", &Antennas[i]);
    scanf("%d", &k);

    string ans = "Yay!";
    rep(i, Antennas.size()) {
        for (int j = 1; j < Antennas.size(); ++j) {
            if ((Antennas[j] - Antennas[i]) > k) ans = ":(";
        }
    }

    printf("%s\n", ans.c_str());
    return 0;
}
