#include <iostream>
using namespace std;

struct Sensor {
    double min;
    double max;
    double error;
    double max_speed;
};

void inputSensor(Sensor& s) {
    cout << "Введите минимальное значение: ";
    cin >> s.min;
    cout << "Введите максимальное значение: ";
    cin >> s.max;
    cout << "Введите погрешность: ";
    cin >> s.error;
    cout << "Введите максимальную скорость: ";
    cin >> s.max_speed;
}

void outputSensor(const Sensor& s) {
    cout << "Диапазон: от " << s.min << " до " << s.max << endl;
    cout << "Погрешность: " << s.error << endl;
    cout << "Максимальная скорость: " << s.max_speed << endl;
}

int main() {
    int n;
    cout << "Введите количество датчиков: ";
    cin >> n;

    Sensor* sensors = new Sensor[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nДатчик #" << (i + 1) << endl;
        inputSensor(sensors[i]);
    }

    int indexMinSpeed = 0;
    double minSpeed = sensors[0].max_speed;

    for (int i = 1; i < n; ++i) {
        if (sensors[i].max_speed < minSpeed) {
            minSpeed = sensors[i].max_speed;
            indexMinSpeed = i;
        }
    }

    cout << "\nДанные датчика с наименьшей максимальной скоростью:" << endl;
    outputSensor(sensors[indexMinSpeed]);

    delete[] sensors;
    return 0;
}