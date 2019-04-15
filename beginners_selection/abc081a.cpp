#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string inputs;
    cin >> inputs;
    cout << count(inputs.begin(), inputs.end(), '1');

    return 0;
}
