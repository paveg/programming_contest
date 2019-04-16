#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, alice = 0, bob = 0;
    scanf("%d", &n);
    vector<int> cards(n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &cards[i]);
    }
    sort(cards.begin(), cards.end(), greater<int>());
    for (int i = 0; i <= cards.size(); i++) {
        int point = cards[i];
        if (i % 2 == 0) {
            alice += point;
        } else {
            bob += point;
        }
    }

    int result = alice - bob;
    cout << result;
    return 0;
}
