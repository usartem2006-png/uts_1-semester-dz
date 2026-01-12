#include <iostream>   // для ввода/вывода (cout, endl)
#include <vector>     // для использования вектора (динамический массив)
#include <cmath>      // для функции abs() (модуль числа)
using namespace std;  // чтобы не писать std:: перед стандартными функциями

double matrixNorm1(const vector<vector<double>>& matrix) {
    int n = matrix.size();  // получаем размер матрицы (n x n)
    double maxSum = 0;      // переменная для хранения максимальной суммы
        for (int j = 0; j < n; j++) {
        double colSum = 0;  // сумма для текущего столбца
        for (int i = 0; i < n; i++) {
            colSum += abs(matrix[i][j]);// складываем модули элементов столбца
        }
        if (colSum > maxSum) {
            maxSum = colSum;// обновляем максимальную сумму
        }
    }
    return maxSum;// возвращаем найденную норму
}

int main() {
    // Создаем и инициализируем матрицу 3x3
    vector<vector<double>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Выводим матрицу на экран
    cout << "Матрица:" << endl;
    for (const auto& row : matrix) {      // для каждой строки
        for (double val : row) {          // для каждого элемента строки
            cout << val << " ";           // выводим элемент
        }
        cout << endl;                     // переход на новую строку
    }

    // Вызываем функцию и выводим результат
    cout << "Норма 1 матрицы: " << matrixNorm1(matrix) << endl;

    return 0;  // успешное завершение программы
}
