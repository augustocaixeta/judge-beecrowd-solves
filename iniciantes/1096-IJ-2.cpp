#include <iostream>

using namespace std;

int main() {
    for (int i = 1, j = 7; i <= 9;
         i += (j == 5 ? 2 : 0), j = (j == 5 ? 7 : j - 1)) {

        cout << "I=" << i << " J=" << j << endl;
    }

    return 0;
}
