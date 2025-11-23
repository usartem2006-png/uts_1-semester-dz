#include <iostream>
#include <vector>
using namespace std;

struct Robot {
    double height;
    double width;
    double depth;
    double weight;
    double max_speed;
};

// Функция ввода данных о роботе
void inputRobot(Robot& r) {
    cout << "Введите габариты робота (высота, ширина, глубина): ";
    cin >> r.height >> r.width >> r.depth;
    cout << "Введите вес робота: ";
    cin >> r.weight;
    cout << "Введите максимальную скорость робота: ";
    cin >> r.max_speed;
}

// Функция вывода данных о роботе
void outputRobot(const Robot& r) {
    cout << "Габариты (ВxШxГ): " << r.height << " x " << r.width << " x " << r.depth << endl;
    cout << "Вес: " << r.weight << endl;
    cout << "Максимальная скорость: " << r.max_speed << endl;
}

// Функция нахождения робота с максимальной скоростью
Robot findFastestRobot(const vector<Robot>& robots) {
    if (robots.empty()) {
        throw runtime_error("Список роботов пуст.");
    }
    const Robot* fastest = &robots[0];
    for (const Robot& r : robots) {
        if (r.max_speed > fastest->max_speed) {
            fastest = &r;
        }
    }
    return *fastest;
}

int main() {
    int n;
    cout << "Введите количество роботов: ";
    cin >> n;
    vector<Robot> robots(n);

    for (int i = 0; i < n; ++i) {
        cout << "Робот #" << i+1 << endl;
        inputRobot(robots[i]);
    }

    Robot fastest = findFastestRobot(robots);

    cout << "\nСамый быстрый робот:\n";
    outputRobot(fastest);

    return 0;
}
