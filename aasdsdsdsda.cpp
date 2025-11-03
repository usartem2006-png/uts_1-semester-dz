#include <iostream>
using namespace std;

int main() {
    int N, M, SH;
    
    // Ввод данных
    cout << "Введите начальное число (N): ";
    cin >> N;
    cout << "Введите конечное число (M): ";
    cin >> M;
    cout << "Введите шаг (Ш): ";
    cin >> SH;
    
    // Вывод ряда чисел
    cout << "Ряд натуральных чисел: ";
    for (int i = N; i <= M; i += SH) {
        cout << i << " ";
    }
    cout << endl;
    
    return 0;
}