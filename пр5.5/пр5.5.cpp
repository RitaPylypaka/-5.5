#include <iostream>

using namespace std;

int a(int n) {
    if (n > 1) {
        return 3 * 2 * (n - 1) + 8 * 2 * a(n - 1);
    }
    else {
        if (n == 1)
            return 1;
        else
            return 0;
    }
}

int main() {
    int n;
    cin >> n;

    cout << "a(n) = " << a(n) << endl;

    return 0;
}
