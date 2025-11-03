#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double start, end, step;
    double x, y;

    // Ввод данных
    cout << "Введите начальное значение x: ";
    cin >> start;
    cout << "Введите конечное значение x: ";
    cin >> end;
    cout << "Введите шаг: ";
    cin >> step;

    // Заголовок таблицы
    cout << endl;
    cout << setw(10) << "x" << setw(15) << "y = ((sqrt(15 + 4/x)) + 13x + sin(3x + 13)" << endl;
    cout << "----------------------------------------" << endl;

    // Вычисление и вывод значений
    for (x = start; x <= end; x += step) {
        if (x == 0) {
            // Избегаем деления на ноль
            cout << fixed << setprecision(2)
                 << setw(10) << x
                 << setw(15) << "не определено" << endl;
        } else {
            y = (sqrt(15 + 4/x)) + 13*x + sin(3*x + 13);
            cout << fixed << setprecision(2)
                 << setw(10) << x
                 << setw(15) << y << endl;
        }
    }

    return 0;
}
