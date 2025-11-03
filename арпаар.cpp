#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    
    // Создаем массив с отрицательными и положительными числами
    int arr[10];
    
    cout << "Исходный массив: ";
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 21 - 10;  // числа от -10 до 10
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Заменяем отрицательные элементы нулями
    for (int i = 0; i < 10; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    
    cout << "Массив после замены: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}