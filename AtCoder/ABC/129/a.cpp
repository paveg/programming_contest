#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, N) for (int i = 0; i < N; ++i)

int main() {
    vector<int> flightTime(3);
    rep(i, 3) cin >> flightTime[i];
    sort(flightTime.begin(), flightTime.end(), less<int>());

    cout << flightTime[0] + flightTime[1] << endl;
    return 0;
}
