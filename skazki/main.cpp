#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    string bogatir, orujie, mesto, chudicshe, gdegolova, nagrada,g;

    cout << "В некотором царстве Богатырь родился" << endl;

    cout << endl;
    cout << "Как его звали?" << endl;
    cin >> bogatir;
    cout << endl;

    cout << "Вышел " << bogatir << " из дому, оглянулся по сторонам, и видит - " << endl;
    cout << endl;
    cout << "Какое оружие увидел богатырь?" << endl;
    cin >> orujie;
    cout << endl;

    cout << orujie <<" на земле лежит. Подобрал " << orujie << " , да и дальше побрел.\nДолго ли, кортко ли шел, да все же дошел " << endl;
    cout << endl;
    cout << "Куда пришел богатырь? (с предлогом) " << endl;
    cin.get();
    getline(cin, mesto);
    cout << endl;

    cout <<"Пришел он "<< mesto << ", встал и осматриваться начал. \nВидит - чудище лежит" << endl;

    cout << endl;
    cout << "Как звали чудище?" << endl;
    cin >> chudicshe;
    cout << endl;

    cout << "То чудище не инчае как " << chudicshe << " кличали. Шипит, пыхтит, пар изо рта пускает, да глазами злобными по сторонам рыщет. \nЗанес "<< bogatir <<" руку свою богатырскую над головой, а в руке - " << orujie << ".\nДа и опустил оружие свое с размаху чудищу на голову. Голова по земле да и покатилась\nДень катилась, два катилась, да и прикатилась"<< endl;
    cout << endl;
    cout << "Куда прикатилась голова? (с предлогом) " << endl;
    cin.get();
    getline(cin, gdegolova);
    cout << endl;

    cout << bogatir << " прикатилась " << gdegolova << ", местный народ тперь пугает \nА тело так по миру и ходит, да теперь уже не ест никого, людям жить не  мешает \nА богатыря князь к награде приставил." << endl;
    cout << endl;
    cout << "Что дал князь богатырю?" << endl;
    cin >> nagrada;
    cout << endl;

    cout << "Дал он ему " << nagrada << " да не взял " << bogatir << " ничего. Скромным он был, простым. Да так и пошел дальше, чудовищ искать. \nКОНЕЦ!" << endl;

}
