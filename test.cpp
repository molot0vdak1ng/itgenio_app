#include "Directions.h"
#include <conio.h>

void printVector(vector <string> v) {
    for (int i = 0; i < v.size(); i++) 
        cout << v.at(i) << endl;
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Directions dir;
    cout << dir.VideoEditDirs.at(1);

    int answer;

    cout << "Подскажи, пожалуйста, что тебе нравится больше?" << endl;
    cout << "1) Заниматься творчеством (рисовать, лепить, фантазировать) \n2) Мечтаю программировать, изучать алгоритмы, запускать ракеты в космос! \n3) Люблю и творчество и программирование! \n";
    answer = _getch();
    if (answer == 1) {
    //    cout << "Что тебе предлагает изучить Айтигеник:\n   1) Программирование игр на Scratch\n   2) Программирование в Minecraft\n   3) Программирование в Roblox\n";
        cout << "Итак, творческая личность. Теперь поконкретнее: \n";
        cout << "   1) Хочу рисовать, редактировать фотографии, создавать анимации, делать дизайн\n   2) Я хочу научится монтировать видео, может быть стану монтажёром или видеоблогером\n   3) Я хочу моделировать здания, предметы интерьера, конструировать фигурки и почетать их на 3D-принтере\n";
        answer = _getch();
        cout << "Что тебе предлагает изучить Айтигеник: " << endl;
        switch (answer) {
        case 1: 
            printVector(dir.PaintAnimateDirs);
            break;
        case 2:
            printVector(dir.VideoEditDirs);
            break;
        case 3:
            printVector(dir.ModelingDirs);
            break;
        }

    }

    else if (answer == 2) {
        cout << "Хороший выбор! А теперь конкретнее:\n   1) Хочу создавать веб-приложения(сайты)\n   2) Хочу создавать мобильные приложения\n"
            << "   3) Хочу заниматься обработкой данных, алгоритмами\n   4) Хочу создавать игры\n";
        answer = _getch();
        switch (answer) {
        case 1:
            printVector(dir.WebProgrammDirs);
            break;
        case 2:
            printVector(dir.MobileProgrammDirs);
            break;
        case 3:
            printVector(dir.HardProgrammDirs);
            break;
        case 4:
            printVector(dir.GameProgrammDirs);
            break;
        }
    }
}