#include<iostream>
#include<functional>
using namespace std;
function<function<int(int, int)>(int, int)> cons(int a, int b) {
    function<function<int(int, int)>(int, int)> pair = [a, b](int x, int y) -> function<int(int, int)> {
        return [a, b, x, y](int i, int j) -> int {
            if (i == x && j == y) {
                return a;
            } else {
                return b;
            }
        };
    };
    return pair;
}
int main() {
    auto pair = cons(3, 4);
    cout << pair(0, 1)(2, 3) << endl;  // output: 4
    return 0;
}
