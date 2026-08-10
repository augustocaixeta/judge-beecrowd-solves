#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    const int leds[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    while (n--) {
        string s;
        cin >> s;

        int sum = 0;

        for (char c : s) {
            sum += leds[c - '0'];
        }

        cout << sum << " leds\n";
    }

    return 0;
}
