#include <iostream>   // для ввода/вывода (cout, endl)
#include <vector>     // для использования динамических массивов (векторов)
using namespace std;  // чтобы не писать std:: перед стандартными функциями

struct Pixel {
    int red, green, blue;
};

void printImage(const vector<vector<Pixel>>& image) {
    for (const auto& row : image) {
        for (const Pixel& p : row) {
            cout << "(" << p.red << "," << p.green << "," << p.blue << ") ";
        }
        cout << endl;// переход на новую строку после каждой строки пикселей
    }
}

int main() {
    // Пример изображения 2x2
    vector<vector<Pixel>> image = {
        { {255, 0, 0}, {0, 255, 0} },
        { {0, 0, 255}, {255, 255, 0} }
    };

    cout << "Изображение (RGB):" << endl;
    printImage(image);

    return 0;
}