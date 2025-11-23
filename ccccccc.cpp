#include <iostream>
using namespace std;

struct AirplaneRobot {
    double rotationSpeed;     // скорость вращения винта (об/мин)
    double propellerRadius;   // радиус винта (м)
    double thrustCoefficient; // коэффициент тяги
};

double calculateThrust(AirplaneRobot robot) {
    return robot.rotationSpeed * robot.propellerRadius * robot.thrustCoefficient;
}

int main() {
    AirplaneRobot robot;
    
    cout << "=== РАСЧЕТ ТЯГИ ВОЗДУШНОГО РОБОТА ===\n\n";
    
    // Ввод данных от пользователя
    cout << "Введите скорость вращения винта (об/мин): ";
    cin >> robot.rotationSpeed;
    
    cout << "Введите радиус винта (м): ";
    cin >> robot.propellerRadius;
    
    cout << "Введите коэффициент тяги: ";
    cin >> robot.thrustCoefficient;
    
    // Расчет и вывод результата
    double thrust = calculateThrust(robot);
    cout << "\nРезультат расчета:\n";
    cout << "Тяга: " << thrust << " Н" << endl;
    
    return 0;
}