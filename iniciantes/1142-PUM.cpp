#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1, j = n * 3, k = 1; k <= j; i += (k % 3 == 0) ? 2 : 1, k++) {
        cout << i << " ";

        if (k % 3 == 0) {
            cout << "PUM" << endl;
        }
    }

    return 0;
}
