#include <iostream>

using namespace std;

// Структура для хранения времени
struct Time {
int hours;
int minutes;
int seconds;
};

// Функция нормализации времени
void normalize(Time& t) {
if (t.seconds >= 60) {
t.minutes += t.seconds / 60;
t.seconds %= 60;
}
if (t.minutes >= 60) {
t.hours += t.minutes / 60;
t.minutes %= 60;
}
if (t.hours >= 24) {
t.hours %= 24; // ограничиваем часы диапазоном 0–23
}
}

// Функция сложения двух времён
Time addTime(const Time& t1, const Time& t2) {
Time result;
result.hours = t1.hours + t2.hours;
result.minutes = t1.minutes + t2.minutes;
result.seconds = t1.seconds + t2.seconds;

normalize(result);
return result;
}

int main() {
Time t1, t2;

cout << "Введите первое время (часы минуты секунды): ";
cin >> t1.hours >> t1.minutes >> t1.seconds;

cout << "Введите второе время (часы минуты секунды): ";
cin >> t2.hours >> t2.minutes >> t2.seconds;

Time sum = addTime(t1, t2);

cout << "Сумма времени: "
<< sum.hours << " ч "
<< sum.minutes << " мин "
<< sum.seconds << " сек" << std::endl;

return 0;
}


