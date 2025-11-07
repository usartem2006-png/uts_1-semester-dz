/*Задание 1(е) вариант 5
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // Инициализация генератора случайных чисел
    const int size = 10; // Размер массива
    int arr[size];

    // Заполнение массива случайными числами от 5 до 15
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 11 + 5; // rand() % 11 дает числа от 0 до 10, +5 → от 5 до 15
    }

    // Вывод массива
    cout << "Массив [5,15]: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;
/*Задание 6
#include <iostream>
#include <cmath>  // для функции abs() - модуль числа
using namespace std;

int main() {
    int arr[8] = {5, -12, 8, -3, 15, -7, 10, 6};  // наш массив

    // Предполагаем, что первый элемент - минимальный и максимальный по модулю
    int min_index = 0;
    int max_index = 0;

    // Проверяем все элементы массива
    for (int i = 1; i < 8; i++) {
        // Ищем минимальный по модулю
        if (abs(arr[i]) < abs(arr[min_index])) {
            min_index = i;
        }

        // Ищем максимальный по модулю
        if (abs(arr[i]) > abs(arr[max_index])) {
            max_index = i;
        }
    }

    // Выводим результаты
    cout << "Массив: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Минимальный по модулю элемент: " << arr[min_index] << endl;
    cout << "Его номер: " << min_index << endl;
    cout << "Модуль: " << abs(arr[min_index]) << endl << endl;

    cout << "Максимальный по модулю элемент: " << arr[max_index] << endl;
    cout << "Его номер: " << max_index << endl;
    cout << "Модуль: " << abs(arr[max_index]) << endl;

    return 0;
}

/*Задание 2(b)
#include <iostream>
using namespace std;

int main() {
    int arr[8] = {15, 25, 2, 12, 1, 18, 30, 8};  // наш массив

    int sum1 = 0;  // для элементов > 9
    int sum2 = 0;  // для элементов < 20
    int sum3 = 0;  // для элементов < 3

    // Проверяем все элементы массива
    for (int i = 0; i < 8; i++) {
        // Сумма элементов больших 9
        if (arr[i] > 9) {
            sum1 += arr[i];
        }

        // Сумма элементов меньших 20
        if (arr[i] < 20) {
            sum2 += arr[i];
        }

        // Сумма элементов меньших 3
        if (arr[i] < 3) {
            sum3 += arr[i];
        }
    }

    // Выводим массив и результаты
    cout << "Массив: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Сумма элементов больших 9: " << sum1 << endl;
    cout << "Сумма элементов меньших 20: " << sum2 << endl;
    cout << "Сумма элементов меньших 3: " << sum3 << endl;

    return 0;
}

/*Задание 7
#include <iostream>
using namespace std;

int main() {
    int arr[8] = {5, -12, 8, -3, 15, -7, 10, -2};  // наш массив

    int sum_positive = 0;  // сумма положительных
    int count_positive = 0; // количество положительных

    int sum_negative = 0;  // сумма отрицательных
    int count_negative = 0; // количество отрицательных

    // Проверяем все элементы массива
    for (int i = 0; i < 8; i++) {
        if (arr[i] > 0) {
            // Положительное число
            sum_positive += arr[i];
            count_positive++;
        } else if (arr[i] < 0) {
            // Отрицательное число
            sum_negative += arr[i];
            count_negative++;
        }
        // Ноль игнорируем
    }

    // Вычисляем средние арифметические
    double average_positive = 0;
    double average_negative = 0;

    if (count_positive > 0) {
        average_positive = (double)sum_positive / count_positive;
    }

    if (count_negative > 0) {
        average_negative = (double)sum_negative / count_negative;
    }

    // Выводим результаты
    cout << "Массив: ";
    for (int i = 0; i < 8; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    cout << "Положительные числа: " << count_positive << " шт." << endl;
    cout << "Их сумма: " << sum_positive << endl;
    cout << "Среднее арифметическое: " << average_positive << endl << endl;

    cout << "Отрицательные числа: " << count_negative << " шт." << endl;
    cout << "Их сумма: " << sum_negative << endl;
    cout << "Среднее арифметическое: " << average_negative << endl;

    return 0;
}
/*Задание 11
#include <iostream>
using namespace std;

int main() {
    int arr[6] = {5, 12, 8, 3, 15, 7};  // наш массив

    // Шаг 1: Находим среднее арифметическое
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += arr[i];
    }
    double average = (double)sum / 6;

    // Шаг 2: Выводим элементы меньше среднего
    cout << "Массив: ";
    for (int i = 0; i < 6; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Среднее арифметическое: " << average << endl;
    cout << "Элементы меньше среднего: ";

    for (int i = 0; i < 6; i++) {
        if (arr[i] < average) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}

/*Задание 14(а)
#include <iostream>
using namespace std;

int main() {
    int a[4] = {1, 2, 3, 4};
    int b[4] = {5, 6, 7, 8};
    int c[4];  // новый массив

    // Перемножаем и сохраняем в новый массив
    for (int i = 0; i < 4; i++) {
        c[i] = a[i] * b[i];
    }

    // Выводим всё
    cout << "Массив A: ";
    for (int i = 0; i < 4; i++) cout << a[i] << " ";

    cout << "\nМассив B: ";
    for (int i = 0; i < 4; i++) cout << b[i] << " ";

    cout << "\nРезультат: ";
    for (int i = 0; i < 4; i++) cout << c[i] << " ";

    return 0;
}

/*Задание 19(a,b,c)
#include <iostream>
#include <string>
using namespace std;

struct Movie {
    string title;
    double price;
    string director;
};

int main() {
    Movie films[5] = {
        {"Фильм1", 10.5, "Реж1"},
        {"Фильм2", 8.0, "Реж2"},
        {"Фильм3", 15.0, "Реж1"},
        {"Фильм4", 12.0, "Реж3"},
        {"Фильм5", 9.5, "Реж2"}
    };

    // c) Простой подсчет режиссеров
    string directors[5]; // массив для режиссеров
    int count = 0;

    for (int i = 0; i < 5; i++) {
        bool found = false;
        for (int j = 0; j < count; j++) {
            if (directors[j] == films[i].director) {
                found = true;
                break;
            }
        }
        if (!found) {
            directors[count] = films[i].director;
            count++;
        }
    }

    cout << "Уникальных режиссеров: " << count << endl;
    for (int i = 0; i < count; i++) {
        cout << directors[i] << " ";
    }

    return 0;
}
