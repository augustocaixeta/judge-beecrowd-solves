#include <bits/stdc++.h>

using namespace std;

int main() {
    int m, n;

    while (cin >> m >> n && m > 0 && n > 0) {
        if (m > n) {
            swap(m, n);
        }

        for (int i = m; i <= n; i++) {
            cout << i << " ";
        }

        int sum = (m + n) * (n - m + 1) / 2;
        cout << "Sum=" << sum << endl;
    }

    return 0;
}
