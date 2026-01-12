#include <iostream>   // для ввода/вывода
#include <vector>     // для использования векторов (динамических массивов)
#include <climits>    // для константы INT_MAX (максимальное значение int)
using namespace std;  // чтобы не писать std:: перед cout, vector и т.д.

void replaceRowWithMinElement(vector<vector<int>>& matrix) {
    int minVal = INT_MAX;  // начальное значение - максимальное возможное
    int minRow = -1;       // номер строки с минимальным элементом (-1 = не найдена)
    int rows = matrix.size();        // количество строк
    int cols = matrix[0].size();     // количество столбцов (первая строка)

        // Находим минимальный элемент и его строку
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < minVal) {
                minVal = matrix[i][j];  // обновляем минимальное значение
                minRow = i;             // запоминаем номер строки
            }
        }
    }

    // Заменяем все элементы этой строки нулями
    for (int j = 0; j < cols; j++) {
        matrix[minRow][j] = 0;
    }
}

void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {  // для каждой строки в матрице
        for (int val : row) {         // для каждого элемента в строке
            cout << val << " ";       // выводим значение
        }
        cout << endl;                 // переход на новую строку
    }
}

int main() {
    vector<vector<int>> matrix = {
        {5, 2, 3},
        {7, 4, 6},
        {1, 8, 7}
    };

    cout << "Исходная матрица:" << endl;
    printMatrix(matrix);

    replaceRowWithMinElement(matrix);  // изменяем матрицу

    cout << "После замены строки с минимальным элементом нулями:" << endl;
    printMatrix(matrix);

    return 0;  // завершение программы
}