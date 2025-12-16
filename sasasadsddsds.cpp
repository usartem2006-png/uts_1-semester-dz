#include <iostream>
#include <fstream>
#include <string>

int main() {
    // Открываем MP3 файл для чтения в бинарном режиме
    std::ifstream file("music.mp3", std::ios::binary);
    
    // Проверяем, открылся ли файл
    if (!file.is_open()) {
        std::cout << "Ошибка: не могу открыть файл music.mp3" << std::endl;
        return 1;
    }
    
    // Переходим в конец файла
    file.seekg(0, std::ios::end);
    
    // Получаем размер файла
    int fileSize = file.tellg();
    
    // ID3v1 тег всегда находится в последних 128 байтах файла
    if (fileSize < 128) {
        std::cout << "Файл слишком маленький для ID3 тега" << std::endl;
        file.close();
        return 1;
    }
    
    // Переходим к началу ID3 тега (за 128 байт до конца)
    file.seekg(-128, std::ios::end);
    
    // Читаем первые 3 байта - это должна быть строка "TAG"
    char tag[3];
    file.read(tag, 3);
    
    // Проверяем, есть ли ID3 тег
    if (tag[0] != 'T' || tag[1] != 'A' || tag[2] != 'G') {
        std::cout << "В этом MP3 файле нет ID3v1 тега" << std::endl;
        file.close();
        return 1;
    }
    
    // Пропускаем название песни (30 байт)
    file.seekg(30, std::ios::cur);
    
    // Читаем имя исполнителя (30 байт)
    char artist[31] = {0}; // 30 символов + 1 для нулевого символа
    file.read(artist, 30);
    
    // Закрываем файл
    file.close();
    
    // Выводим результат
    std::cout << "=== Информация из MP3 файла ===" << std::endl;
    std::cout << "Исполнитель: " << artist << std::endl;
    
    return 0;
}
