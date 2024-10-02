#include <iostream>

// лабораторная работа 4. условные операторы. 4 вариант.
/*
Ввести натуральные числа A, B и C. Если A+B кратно C и C кратно B, то вывести (A+B)/C-C/B, 
если A+B кратно C и C не кратно B, то вывести (A+B)/С+B*C, в остальных случаях вывести A-B+C.

Ввести число N, которое обозначает некоторую ошибку. При помощи оператора switch расшифровать значение ошибки.
Список ошибок:
0 – все хорошо, 1 – ошибка чтения файла, 2 – ошибка записи файла, 3 – не все поля определены.

Предусмотреть обработку ошибочного ввода N.
Переменная x может принимать 2 значения: -1 и 1. 
Если -1, то вывести в консоль “Negative number”, если положительное - “Positive number”. 
Предложить вариант программы и объяснить свой выбор.

*/

// проверка на кратность и вывод результата арифметической операции. Пункт 1.
int program1()
{
    int A;
    int B;
    int C;
    int N;

    std::cout << "Input A: ";
    std::cin >> A;
    std::cout << "Input B: ";
    std::cin >> B;
    std::cout << "Input C: ";
    std::cin >> C;

    if (!((A + B) % C) && !(C % B))
    {
        std::cout << (A + B) / C - C / B << std::endl;
    }
    else if (!((A + B) % C) && (C % B))
    {
        std::cout << (A + B) / C + B * C << std::endl;
    }
    else
    {
        std::cout << A-B+C << std::endl;
    }

    return 0;
}

// Ввод кода ошибки и вывод расшифровки. Пункт 2
int program2()
{
    std::cout << "Error code: ";
    int N;
    std::cin >> N;

    switch(N)
    {
        case 0:
            std::cout << "All Good" << std::endl;
            break;
        case 1:
            std::cout << "File read error" << std::endl;
            break;
        case 2:
            std::cout << "File write error" << std::endl;
            break;
        case 3:
            std::cout << "Not all fields are defined" << std::endl;
            break;
        default:
            std::cout << "Wrong error code" << std::endl;
            break;
    }

    return 0;
}

// Переменная = 1 или -1, вывод - положительная или нет. Пункт 3.
int program3()
{
    std::cout << "Choose (1 or -1): ";
    int a;
    std::cin >> a;

    switch(a)
    {
        case -1:
            std::cout << "Negative number" << std::endl;
            break;
        case 1:
            std::cout << "Positive number" << std::endl;
            break;
        default:
            std::cout << "You choose wrong number" << std::endl;
            break;
    }

    return 0;
}

// здесь идёт выбор между пунктами лабораторной работы.
int main()
{
    std::cout << "Select number of task: ";
    int select;
    std::cin >> select;

    switch(select)
    {
        case 1:
            program1();
            break;
        case 2:
            program2();
            break;
        case 3:
            program3();
            break;
    }

    return 0;
}

