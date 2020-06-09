#include "Directions.h"
#include <conio.h>

void printVector(vector <string> v) {
    for (int i = 0; i < v.size(); i++) 
        cout << v.at(i) << endl;
}

int login(){
    cout << "1)Admin 2)User"
    int ans;
    cin >> ans;
    switch(ans){
        case 1:
            cout << "You are in admin mode.\n";
            cout << "To change directions or questions, please write 1, if you want to quit to user - write 2."
            cin << ans;
            if (ans == 2){
                return 1;
            } else {
                
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