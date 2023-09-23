
#include <iostream>
#include <windows.h>
#include <cmath>

using namespace std;

void frameLine(int k);

int main() {
    // Налаштування для української мови
    SetConsoleCP(65001);//utf-8
    SetConsoleOutputCP(65001);//utf-8
    puts("\t Розробник Сергієнко.О.Ю., гр.ПІ-233");
    puts("\t Дата народження 2006/02/25.");
    puts("\t Номер у списку групи 20");
    puts("\t Лабораторна робота № 1");

    puts("\n\t Завдання 1");
    puts("Створити програму тестування форми предствалення \n"
         "додатніх цілих чисел");
    puts("Результати тестування числа 1965");
    cout << "0b1111101 = " << 0b11110101101 << endl;
    cout << "03655 = " << 03655 << endl;
    cout << "0x7ad = " << 0x7ad << endl;

    puts("\n\t Завдання 2");
    puts("Ведення данних та обробка данних");//оголошення змінних
    int x1, x2;
    double sum, root3;
    char fio[80]; //memory for 79 chars + '\0'
    //Введення даних
    puts("Введіть ім'я та прізвище студента");
    cin.getline(fio, 79);
    puts("Введіть два цілих числа через пробіл\n" "(місяць та дату народження)");
    cin >> x1 >> x2;
    // Обробка та виведення результатів cout << "Студент << fio << endl;
    sum = x1 + x2;
    cout << x1 << " + " << x2 << " = " << sum << endl;
    cout << "Кубічний корінь іs " << sum << " = " << cbrt(sum) << endl;

    puts("\n\tЗавдання 3");
    puts("Реалізаія програми із підручника");
    frameLine(10);
    printf("\t* Вивчаємо мову с *\n");
    frameLine(10);
    return 0;
}

//Функція з підручника
void frameLine(int k) {
    int i;
    printf("\n\t");
    for (i = 1; i <= k; i++)
        printf("*-");
    printf("*\n");
}