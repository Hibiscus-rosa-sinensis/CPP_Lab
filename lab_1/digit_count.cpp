#include <iostream>
using namespace std;
int digit_counter(int number)
{
    int count = 0;
    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    return count;
}
int main()
{
    int number;
    cin >> number;
    cout << digit_counter(number) << endl;
    return 0;
}
