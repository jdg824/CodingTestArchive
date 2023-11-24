#include <iostream>

using namespace std;

int main(int argc, char const* argv[]) {
    int y;
    cin >> y;
    cout << ((y % 4 == 0) ? ((y % 400 == 0) ? 1 : (y % 100 != 0) ? 1 : 0) : 0);

    return 0;
}