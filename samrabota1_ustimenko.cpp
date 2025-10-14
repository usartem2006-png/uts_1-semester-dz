//Задание 1
#include <iostream>
using namespace std;

double calculateY(double a, double b) {
    return (b - a) / 2 + (b * b + 1) / a;
}

int main() {
    double a, b;
    cout << "Введите a и b: ";
    cin >> a >> b;
    cout << "y = " << calculateY(a, b) << endl;
    return 0;
}
//Задание 2
#include <iostream>
using namespace std;

int Min(int x, int y) {
    return (x < y) ? x : y;
}

int calculateZ(int a, int b) {
    return Min(2 * a, b + a) + Min(2 * a - b, b);
}

int main() {
    int a, b;
    cout << "Введите a и b: ";
    cin >> a >> b;
    cout << "z = " << calculateZ(a, b) << endl;
    return 0;
}
//Задание 3
#include <iostream>
#include <cmath>
    using namespace std;

double median(double a, double b, double c) {
    return 0.5 * sqrt(2 * b * b + 2 * c * c - a * a);
}

int main() {
    double a, b, c;
    cout << "Введите стороны треугольника a, b, c: ";
    cin >> a >> b >> c;

    cout << "Медиана к стороне a: " << median(a, b, c) << endl;
    cout << "Медиана к стороне b: " << median(b, a, c) << endl;
    cout << "Медиана к стороне c: " << median(c, a, b) << endl;

    return 0;
}
//Задание 4
#include <iostream>
#include <cmath>
using namespace std;

double triangleArea(double x1, double y1, double x2, double y2, double x3, double y3) {
    return abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5;

    cout << "Введите координаты вершин пятиугольника:" << endl;
    cout << "Вершина 1 (x1 y1): "; cin >> x1 >> y1;
    cout << "Вершина 2 (x2 y2): "; cin >> x2 >> y2;
    cout << "Вершина 3 (x3 y3): "; cin >> x3 >> y3;
    cout << "Вершина 4 (x4 y4): "; cin >> x4 >> y4;
    cout << "Вершина 5 (x5 y5): "; cin >> x5 >> y5;

    double area = triangleArea(x1, y1, x2, y2, x3, y3) +
                  triangleArea(x1, y1, x3, y3, x4, y4) +
                  triangleArea(x1, y1, x4, y4, x5, y5);

    cout << "Площадь пятиугольника: " << area << endl;
    return 0;
}
//Задание 5
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double random0to1() {
    return rand() / (double)RAND_MAX;
}

double randomMinus100to200() {
    return -100 + 300 * random0to1();
}

int random0to500() {
    return rand() % 501;
}

int main() {
    srand(time(0));

    cout << "Случайное число [0;1]: " << random0to1() << endl;
    cout << "Случайное число [-100;200]: " << randomMinus100to200() << endl;
    cout << "Случайное целое [0;500]: " << random0to500() << endl;

    return 0;
}
//Задание 6
#include <iostream>
#include <cmath>
using namespace std;

bool inCircle(double x, double y, double centerX, double centerY, double radius) {
    double dx = x - centerX;
    double dy = y - centerY;
    return dx * dx + dy * dy <= radius * radius;
}

int main() {
    double x, y, centerX, centerY, radius;

    cout << "Введите координаты точки (x y): ";
    cin >> x >> y;
    cout << "Введите центр круга (X Y): ";
    cin >> centerX >> centerY;
    cout << "Введите радиус круга: ";
    cin >> radius;

    if (inCircle(x, y, centerX, centerY, radius)) {
        cout << "Точка попадает в круг" << endl;
    } else {
        cout << "Точка не попадает в круг" << endl;
    }

    return 0;
}
//Задание 7
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int main() {
    srand(time(0));

    string suits[] = {"пик", "треф", "бубен", "червей"};
    string ranks[] = {"шестерка", "семерка", "восьмерка", "девятка",
                      "десятка", "валет", "дама", "король", "туз"};

    int suit = rand() % 4;
    int rank = rand() % 9;

    cout << "Выбрана " << ranks[rank] << " " << suits[suit] << endl;

    return 0;
}
//Задание 8
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    int player1 = rand() % 6 + 1;
    int player2 = rand() % 6 + 1;

    cout << "Игрок 1 выбросил: " << player1 << endl;
    cout << "Игрок 2 выбросил: " << player2 << endl;

    if (player1 > player2) {
        cout << "Победил Игрок 1!" << endl;
    } else if (player2 > player1) {
        cout << "Победил Игрок 2!" << endl;
    } else {
        cout << "Ничья!" << endl;
    }

    return 0;
}
