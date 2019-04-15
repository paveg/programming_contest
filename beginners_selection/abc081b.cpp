#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int size;
    int iterator;
    bool result = true;
    cin >> size;

    vector<int> data(size);

    for (int iterator = 0; iterator < size; iterator++) {
        cin >> data[iterator];
    }
    while (result) {
        for (int iterator = 0; iterator < data.size(); iterator++) {
            if (data[iterator] % 2 != 0) {
                result = false;
            }
            data[iterator] /= 2;
        }
        if (result) {
            counter++;
        }
    }

    cout << counter;
    return 0;
}
