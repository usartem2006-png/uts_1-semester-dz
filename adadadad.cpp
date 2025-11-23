#include <iostream>
using namespace std;

// Структура для хранения комплексного числа
struct Complex {
    double real;  // вещественная часть
    double imag;  // мнимая часть
};

// Функция для умножения двух комплексных чисел
Complex multiply(const Complex& a, const Complex& b) {
    Complex result;
    result.real = a.real * b.real - a.imag * b.imag;
    result.imag = a.real * b.imag + a.imag * b.real;
    return result;
}

int main() {
    Complex c1, c2;

    // Ввод первого числа
    cout << "Введите вещественную часть первого числа: ";
    cin >> c1.real;
    cout << "Введите мнимую часть первого числа: ";
    cin >> c1.imag;

    // Ввод второго числа
    cout << "Введите вещественную часть второго числа: ";
    cin >> c2.real;
    cout << "Введите мнимую часть второго числа: ";
    cin >> c2.imag;

    // Умножение
    Complex product = multiply(c1, c2);

    // Вывод результата
    cout << "Произведение: " 
         << product.real << " + " << product.imag << endl;

    return 0;
}