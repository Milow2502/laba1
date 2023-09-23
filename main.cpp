
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

void frameLine(int k);

int main() {
    // Налаштування для української мови
    SetConsoleCP(65001);//utf-8
    SetConsoleOutputCP(65001);//utf-8
    puts("\t Розробник Бивойно П.Г., гр.ІКС-880");
    puts("\t Дата народження 1943/08/22.");
    puts("\t Номер у списку групи 0.");
    puts("\t Лабораторна робота № 1");
    puts("\n\t Завдання 1");
    puts("Створити програму тестування форми предствалення \n"
         "додатніх цілих чисел");
    puts("Результати тестування числа 1965");
    cout << "0b1111101 = " << 0b11110101101 << endl;
    cout << "03655 = " << 03655 << endl;
    cout << "0x7ad = " << 0x7ad << endl;
}