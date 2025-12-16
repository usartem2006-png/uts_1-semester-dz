#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Открываем файл
    ifstream file("music.mp3", ios::binary);

    if (!file) {
        cout << "Не могу открыть файл music.mp3" << endl;
        return 1;
    }

    // Читаем 4 байта заголовка
    unsigned char bytes[4];
    file.read((char*)bytes, 4);

    file.close();

    // Выводим результат
    cout << "MP3 заголовок:" << endl;

    for (int i = 0; i < 4; i++) {
        // В HEX формате (как в задании)
        cout << "0x" << hex << (int)bytes[i] << " ";
    }

    cout << endl;

    return 0;
}
