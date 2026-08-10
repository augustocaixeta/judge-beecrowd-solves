#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string s;
        getline(cin, s);

        for (char &c : s) {
            if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                c += 3;
            }
        }

        reverse(s.begin(), s.end());

        for (int i = s.length() / 2; i < s.length(); i++) {
            s[i]--;
        }

        cout << s << endl;
    }

    return 0;
}
