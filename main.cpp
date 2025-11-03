#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // 1. Настраиваем генератор случайных чисел
    srand(time(NULL));

    // 2. Создаем массив на 10 элементов и заполняем случайными числами от 0 до 10
    int arr[10];

    cout << "Массив: ";
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 11;  // числа от 0 до 10
        cout << arr[i] << " "; // сразу выводим
    }
    cout << endl;

    // 3. Вычисляем суммы
    int sum_less_than_5 = 0;  // сумма элементов < 5
    int sum_greater_than_6 = 0; // сумма элементов > 6
    int sum_less_than_4 = 0;  // сумма элементов < 4

    // 4. Проходим по массиву и считаем суммы
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 5) {
            sum_less_than_5 += arr[i];  // добавляем к сумме <5
        }

        if (arr[i] > 6) {
            sum_greater_than_6 += arr[i]; // добавляем к сумме >6
        }

        if (arr[i] < 4) {
            sum_less_than_4 += arr[i];  // добавляем к сумме <4
        }
    }

    // 5. Выводим результаты
    cout << "Сумма элементов меньших 5: " << sum_less_than_5 << endl;
    cout << "Сумма элементов больших 6: " << sum_greater_than_6 << endl;
    cout << "Сумма элементов меньших 4: " << sum_less_than_4 << endl;

    return 0;
}
