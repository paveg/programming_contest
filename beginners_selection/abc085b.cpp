#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    int n;
    int stairs = 0;
    scanf("%d", &n);

    std::vector<int> m(n);

    for (int i = 0; i < n; i++) {
        std::cin >> m[i];
    }
    sort(m.begin(), m.end());
    for (int j = 0; j < m.size(); j++) {
        if (m[j] > m[j - 1]) {
            stairs++;
        }
    }
    std::cout << stairs;
    return 0;
}
