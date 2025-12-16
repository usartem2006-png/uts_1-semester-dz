#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    // Пробуем открыть файл для записи
    ofstream file("students.txt");
    
    if (!file.is_open()) {
        cout << "ОШИБКА: Не могу создать файл students.txt!" << endl;
        return 1;
    }
    
    int count;
    cout << "Сколько студентов добавить? ";
    
    // Проверяем, что ввели число
    if (!(cin >> count)) {
        cout << "ОШИБКА: Нужно ввести число!" << endl;
        return 1;
    }
    
    if (count <= 0) {
        cout << "ОШИБКА: Число студентов должно быть больше 0!" << endl;
        return 1;
    }
    
    cin.ignore(); // Убираем символ новой строки после ввода числа
    
    // Вводим данные о каждом студенте
    for (int i = 1; i <= count; i++) {
        string surname;
        double grade;
        int course;
        
        cout << "\n--- Студент " << i << " ---" << endl;
        
        // Ввод фамилии
        cout << "Фамилия: ";
        getline(cin, surname);
        
        if (surname.empty()) {
            cout << "ОШИБКА: Фамилия не может быть пустой!" << endl;
            return 1;
        }
        
        // Ввод средней оценки
        cout << "Средняя оценка: ";
        if (!(cin >> grade)) {
            cout << "ОШИБКА: Нужно ввести число для оценки!" << endl;
            return 1;
        }
        
        if (grade < 0 || grade > 5) {
            cout << "ОШИБКА: Оценка должна быть от 0 до 5!" << endl;
            return 1;
        }
        
        // Ввод курса
        cout << "Курс: ";
        if (!(cin >> course)) {
            cout << "ОШИБКА: Нужно ввести число для курса!" << endl;
            return 1;
        }
        
        if (course < 1 || course > 6) {
            cout << "ОШИБКА: Курс должен быть от 1 до 6!" << endl;
            return 1;
        }
        
        cin.ignore(); // Убираем символ новой строки
        
        // Записываем данные в файл
        file << surname << endl;
        file << grade << endl;
        file << course << endl;
    }
    
    // Закрываем файл
    file.close();
    
    cout << "\n✓ Готово! Данные " << count << " студентов сохранены в файле students.txt" << endl;
    
    return 0;
}