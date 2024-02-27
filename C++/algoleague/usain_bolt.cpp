#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> records(n);

    for (int i = 0; i < n; i++) {
        cin >> records[i];
    }

    int counter = 0;

    for (int j = 1; j < n; j++) {
        auto max_before_j = max_element(records.begin(), records.begin() + j);
        if (records[j] > *max_before_j) {
            counter++;
        }
    }

    cout << counter  << endl;

    return 0;
}
