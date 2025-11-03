#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int x, y;
    cout << "Введите координаты x и y: ";
    cin >> x >> y;
    int r2 = x*x + y*y;
    if (r2 >= 1 && r2 <= 4) {
        cout << "Точка принадлежит заштрихованной области\n";
    } else {
        cout << "Точка не принадлежит заштрихованной области\n";
    }
    return 0;
}