#include <iostream>
#include <cstdlib>  // для rand() и srand()
#include <ctime>    // для time()

using namespace std;

int main() {
    // 1. Настраиваем генератор случайных чисел
    // (чтобы при каждом запуске были разные числа)
    srand(time(NULL));
    
    // 2. Создаем массив на 10 элементов
    int arr[10];
    
    // 3. Заполняем массив случайными числами от 0 до 10
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 11;  // % 11 дает числа от 0 до 10
    }
    
    // 4. Выводим массив на экран
    cout << "Случайный массив: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}