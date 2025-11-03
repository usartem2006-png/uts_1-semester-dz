#include <iostream>
using namespace std;

int main() {
    int number;
    int result = 1;
    
    // Ввод числа
    cout << "Введите число: ";
    cin >> number;
    
    // Проверка на отрицательное число
    if (number < 0) {
        cout << "Ошибка! Факториал нельзя вычислить для отрицательных чисел." << endl;
        return 0;
    }
    
    // Вычисление факториала
    for (int i = 1; i <= number; i++) {
        result = result * i;
    }
    
    // Вывод результата
    cout << "Факториал числа " << number << " равен: " << result << endl;
    
    return 0;
}