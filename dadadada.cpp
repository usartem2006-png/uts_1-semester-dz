#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y;
    cout << "Введите координаты x и y: ";
    cin >> x >> y;
    if ((x*x + y*y > 4) && (x <= 2) && (y <= x)) {
        cout << "Точка принадлежит заштрихованной области\n";
    } else {
        cout << "Точка не принадлежит заштрихованной области\n";
    }
    return 0;
}