#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    stack<int> S1;
    stack<pair<int, int> > S2;
    int sum = 0;
    vector<int> ans;

    char c;
    for (int i = 0; cin >> c; i++) {
        if (c == '\\') S1.push(i);
        else if (c == '/' && S1.size() > 0) {
            int j = S1.top();
            S1.pop();
            int a = i - j;
            sum += a;
            while (S2.size() > 0 && S2.top().first > j) {
                a += S2.top().second;
                S2.pop();
            }
            S2.push(make_pair(j, a));
        }
    }

    while (S2.size() > 0) {
        ans.push_back(S2.top().second);
        S2.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << sum << endl;
    cout << ans.size();
    for (int k = 0; k < ans.size(); k++) {
        cout << " " << ans[k];
    }
    cout << endl;

    return 0;
}
