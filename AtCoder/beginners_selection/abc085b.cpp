#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int n;
    int stairs = 0;
    scanf("%d", &n);

    vector<int> m(n);

    for (int i = 0; i < n; i++) {
        cin >> m[i];
    }
    sort(m.begin(), m.end());
    for (int j = 0; j < m.size(); j++) {
        if (m[j] > m[j - 1]) {
            stairs++;
        }
    }
    cout << stairs;
    return 0;
}
