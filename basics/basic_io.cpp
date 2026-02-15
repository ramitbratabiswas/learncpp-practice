#include <iostream>

using namespace std;

int main() {
    int x{}, y{}, z{};
    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "You entered " << x << ", " << y << ", and " << z << "." << endl;
    cout << "Their sum is: " << x + y + z << endl;

    return 0;
}