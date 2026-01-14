
#include <iostream>
using namespace std;

bool isEligible(int age) {
    if (age >= 18)
        return true;
    else
        return false;
}

int main() {
    int age;
    cin >> age;

    if (isEligible(age))
        cout << "Eligible to vote";
    else
        cout << "Not eligible to vote";

    return 0;
}
