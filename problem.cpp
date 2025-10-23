#include <iostream>

using namespace std;

int countNumber(int n) {
    if (n == 0) return 0;
    return 1 + countNumber(n / 10);
}

int main() {
    cout << countNumber(1000);

    return 0;
}
