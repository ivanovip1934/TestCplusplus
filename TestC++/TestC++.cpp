﻿// TestC++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "C:\Users\10_medvedevkp\source\repos\TestC++\std_lib_facilities.h"
// #include <iostream>
 inline void enter_eny_key();
 inline void search_dublicate_words();

int main()
{
    std::cout << "Hello World!\n";
    //enter_eny_key();
    search_dublicate_words();
    keep_window_open();
    return 0;
}
 
void enter_eny_key() {
    string name;
    double age = -1;
    cout << "Eter your name and age: ";
    cin >> name;
    cin >> age;
   
    cout << "Your name: " << name << " and your age: " << age*12 << "\n";
    
}

void search_dublicate_words() {
    int number_of_words = 0;
    string previous = "";
    string current;
    while (cin >> current) {
        ++number_of_words;
        if (previous == current)
            cout << "Dublicate word: " << current << " after " << number_of_words << " words" <<    '\n';
        previous = current;
    }
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
