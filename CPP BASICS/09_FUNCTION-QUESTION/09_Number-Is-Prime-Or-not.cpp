#include<iostream>
using namespace std;

bool primeornot(int n) {

    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int n;
    cin >> n;

    bool ans = primeornot(n);

    if (ans == true) {
        cout << "prime number";
    }
    else {
        cout << "not a prime number";
    }

    return 0;
}