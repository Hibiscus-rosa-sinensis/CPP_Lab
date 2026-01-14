#include <iostream>
using namespace std;

int main() {
    int a[] = {2, 12, 22, 32, 33, 45, 56};
    int sum = 0;

    int size = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < size; i++) {
        sum = sum + a[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}

