#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // 1. Читаем данные из файла in.txt
    ifstream in("in.txt");
    
    // Проверяем, открылся ли файл
    if (!in.is_open()) {
        cerr << "ОШИБКА: Не могу открыть файл in.txt!" << endl;
        return 1; // Завершаем программу с ошибкой
    }
    
    double start, end, step;
    int N;
    
    // Читаем 4 числа из файла
    in >> start >> end >> step >> N;
    in.close();
    
    // 2. Открываем файл для результатов out.txt
    ofstream out("out.txt");
    
    // Проверяем, открылся ли файл для записи
    if (!out.is_open()) {
        cerr << "ОШИБКА: Не могу создать файл out.txt!" << endl;
        return 1; // Завершаем программу с ошибкой
    }
    
    // 3. Для каждого X считаем Y
    for (double x = start; x <= end + 0.000001; x += step) {
        double y = 0;
        
        // Считаем сумму N слагаемых
        for (int i = 1; i <= N; i++) {
            // Числитель: 3, 4, 5, ...
            // Знаменатель: 7x, 9x, 11x, ...
            double top = 2.0 * i + 1.0;    // 3, 5, 7, ...
            double bottom = 2.0 * i * x;   // 7x, 9x, 11x, ...
            y += top / bottom;
        }
        
        // 4. Записываем результат
        out << x << ", " << y << endl;
    }
    
    out.close();
    cout << "Готово! Результаты сохранены в файле out.txt" << endl;
    
    return 0;
}