#include "Directions.h"
#include <conio.h>

void printVector(<vector> v) {
    for (int i = 0; i < v.size(); i++) 
        cout << v.at(i) << endl;
}

int login(Direction &dir){
    cout << "1)Admin 2)User";
    int ans;
    cin >> ans;
    switch(ans){
        case 1:
            cout << "You are in admin mode.\n";
            cout << "To change directions or questions, please write 1, if you want to quit to user - write 2.";
            cin >> ans;
            if (ans == 2){
                return 1;
            } else {
                cout << "Let's continue";
                cout << "What's the name of the direction you want to add?";
                string dir_name;
                cin >> dir_name;
                cout << "What category do you want to put it in?";
                cout << "1)FirstStepsDirs;\n2)PaintAnimateDirs;\n3)VideoEditDirs;\n4)ModelingDirs;\n5)WebProgrammDirs;\n6)MobileProgrammDirs;\n7)HardProgrammDirs;\n8)GameProgrammDirs;\n";
                cin >> ans;
                switch(ans){
                    case 1:
                        dir.FirstStepsDirs.push_back(dir_name);
                        break;
                    case 2:
                        dir.PaintAnimateDirs.push_back(dir_name);
                        break;
                    case 3:
                        dir.VideoEditDirs.push_back(dir_name);
                        break;
                    case 4:
                        dir.ModelingDirs.push_back(dir_name);
                        break;
                    case 5:
                        dir.HardProgrammDirs.push_back(dir_name);
                        break;
                    case 6:
                        dir.MobileProgrammDirs.push_back(dir_name);
                        break;
                    case 7:
                        dir.HardProgrammDirs.push_back(dir_name);
                        break;
                    case 8:
                        dir.GameProgrammDirs.push_back(dir_name);
                        break;
                }
        case 2:
            return 2
    }

    }
}

int main()
{
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    Directions dir;
    int mode = login();
    cout << dir.VideoEditDirs.at(1);

    int answer;

    cout << "��������, ����������, ��� ���� �������� ������?" << endl;
    cout << "1) ���������� ����������� (��������, ������, �������������) \n2) ������ ���������������, ������� ���������, ��������� ������ � ������! \n3) ����� � ���������� � ����������������! \n";
    answer = _getch();
    if (answer == 1) {
    //    cout << "��� ���� ���������� ������� ���������:\n   1) ���������������� ��� �� Scratch\n   2) ���������������� � Minecraft\n   3) ���������������� � Roblox\n";
        cout << "����, ���������� ��������. ������ ������������: \n";
        cout << "   1) ���� ��������, ������������� ����������, ��������� ��������, ������ ������\n   2) � ���� �������� ����������� �����, ����� ���� ����� ��������� ��� �������������\n   3) � ���� ������������ ������, �������� ���������, �������������� ������� � �������� �� �� 3D-��������\n";
        answer = _getch();
        cout << "��� ���� ���������� ������� ���������: " << endl;
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
        cout << "������� �����! � ������ ����������:\n   1) ���� ��������� ���-����������(�����)\n   2) ���� ��������� ��������� ����������\n"
            << "   3) ���� ���������� ���������� ������, �����������\n   4) ���� ��������� ����\n";
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
    else if (answer == 3) {
        cout << "������� �����! � ������ ����������:\n   1) ���� ��������� ���-����������(�����)\n   2) ���� ��������� ��������� ����������\n"
            << "   3) ���� ���������� ���������� ������, �����������\n";
        answer = _getch();
        switch (answer) {
        case 1:
            printVector(dir.WebProgrammDirs);
            break;
        case 2:
            printVector(dir.MobileProgrammDirs);
            break;
        case 3:
            printVector(dir.GameProgrammDirs);
            break;
        }
    }
}