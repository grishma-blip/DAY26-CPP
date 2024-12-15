#include <iostream>
using namespace std;


int findLargest(int a, int b, int c) {
    return (a >= b && a >= c) ? a : (b >= c ? b : c);
}

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    cout << "The largest number is: " << findLargest(num1, num2, num3) << endl;
    return 0;
}