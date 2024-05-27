#include <iostream>
#include <Windows.h>

using namespace std;
template <typename T>
void calculate_powers(T value, T& square, T& cube, T& fourth_power) {
    square = value * value;
    cube = square * value;
    fourth_power = cube * value;
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int value = 3;
    int square, cube, fourth_power;
    calculate_powers(value, square, cube, fourth_power);
    cout << "квадрат: " << square << endl;
    cout << "куб: " << cube << endl;
    cout << "четверта ступінь: " << fourth_power << endl;
    return 0;
}
