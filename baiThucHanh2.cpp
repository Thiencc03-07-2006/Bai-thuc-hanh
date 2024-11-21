#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> chan;
    vector<int> le;
    for (int i = 0; i < n; i++) {
        int index;
        cin >> index;
        if (index % 2 == 0) {
            chan.push_back(index);
        } else {
            le.push_back(index);
        }
    }
    sort(chan.begin(), chan.end());
    sort(le.begin(), le.end());
    for (int i = 0; i < chan.size(); i++) {
        cout << chan[i] << " ";
    }
    for (int i = 0; i < le.size(); i++) {
        cout << le[i] << " ";
    }
    return 0;
}

