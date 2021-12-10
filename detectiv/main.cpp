#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;

int n = 0;
string s = "";
bool vskr = false, nesch1 = false, doch=false, vrach1 =false, vrach2 = false, vaza =false,vrach3=false, kitch=false,otdel1 =false;

void hall(int n);
void room(int n);
void bathroom(int n);
void doorway(int n);
void entrance(int n);
void kitchen(int n);
void qvit(int n);
void coridor(int n);
void otdel(int n);
void poisk(int n);
void ub(int n);
void nesch(int n);
void tel(int n);

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Москва, 1993 год, 14 ноября. В квартире одной из девятиэтажек в центре города было обнаружено тело пожилой женщины. Об этом в милицию сообщила ее дочь. \nВы, как старший следователь, сразу же приступаете к расследованию и установлению причины смерти. " << endl;
    system("pause");
    doorway(n);
}

void tel(int n) {
    system("cls");
    cout << "Вы узнаете, что женщина недавно прикрепилась к данной поликлинике. \nВ больнице лежит ее карточка и контактная информация(адрес, домашний телефон, фио)" << endl;
    system("pause");
    vrach3 = true;
    coridor(n);
}

void doorway(int n)
{
    system("cls");
    cout << "Вы уже стоите на пороге квартиры. Вы сразу зайдете, или сначала осмотритесь?" << endl;
    cout << "ОСМОТРЕТЬСЯ(1) или ЗАЙТИ(2)" << endl;

    do
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2 && n != 3);

    if (n == 1)
        entrance(n);
    if (n == 2)
       hall(n);
  
}


void entrance(int n)
{
    system("cls");
    cout << "Подъезд, что не удивительно, достаточно чистый и ухоженный, нет неприятного запаха. \nСоздается ощущение благополучного района. Или это только иллюзия?" << endl;
    cout << "ОСМОТРЕТЬ ЗАМОК (1) или ЗАЙТИ(2)" << endl;
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2);

    if (n == 1) {
        system("cls");
        cout << "Замок не имеет следов вскрытия и взлома.Это наталкивает на некоторые мысли…\n";
        vskr = true;
        system("pause");
    }
        hall(n);

    
}


void hall(int n){
    system("cls");
    cout << "Вы заходите в квартиру. Она сохранена в том же состоянии, что и при обнаружении тела. " << endl;
    system("pause");
    coridor(n);
}

void coridor(int n)
{
    system("cls");
   
    cout << "Вы в коридоре. Вас сразу же встречает вполне достойный ремонт и достаточно дорогая, на вид, мебель. Не видно никаких следов борьбы или иных улик, указывающих на совершение преступления.  \nМожет кто-то из соседей зашел в гости и позарился на чужое имущество?" << endl;
    cout << "Можно пройти в ВАННУЮ(1), КУХНЮ(2), КОМНАТУ(3), ПОЗВОНИТЬ В ОТДЕЛ(4)";
    if (vrach1) {
        cout << ", \nПОЗВОНИТЬ В БОЛЬНИЦУ, В КОТОРУЮ ХОДИЛА ПОСТРАДАВШАЯ(5) или ЗАВЕРШИТЬ РАССЛЕДОВАНИЕ(6)" << endl;
    }
    else {
        cout << " или ЗАВЕРШИТЬ РАССЛЕДОВАНИЕ(5)" << endl;
    }
    do
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2 && n != 3 && n!=4 && n!=5 && (n!=6 || vrach1==false));

    if (n == 1)
        bathroom(n);
    if (n == 2)
        kitchen(n);
    if (n == 3)
        room(n);
    if (n == 4)
        otdel(n);
    if (n == 5 && vrach1) {
        tel(n);
    }
    else {
        if (nesch1 == true  && doch == true && vrach1 == true && vrach2 == true  && vrach3 == true &&otdel1 ==true) {
            qvit(n);
        }
        else {
            system("cls");
            cout << "Пока что у Вас недостаточно зацепок" << endl;
            system("pause");
            coridor(n);
        }
    }
}
void room(int n) {
    system("cls");
    cout << "Вы видите красивое и удобное кресло. \nОколо него стоит пара стареньких тапочек. Рядом с креслом лежит маленький кусочек ваты.  \n" << endl;
    vrach2 = true;
    cout << "ОСМОТРЕТЬСЯ (1) или ВЫЙТИ В КОРИДОР(2)" << endl;
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2);

    if (n == 1) {
        system("cls");
        cout << "Все на своих местах. Не выглядит так, как будто здесь что-то искали. \nЭто явно не разбойное нападение. Кажется, ничего не пропало. \nНо может стоит искать что-то конкретное? \n";
        cout << "ВВЕСТИ НАЗВАНИЕ ПРЕДМЕТА ДЛЯ ПОИСКА (1) или ВЫЙТИ В КОРИДОР(2)" << endl;
        {
            cin >> n;
            if (n == 0) exit(0);
        } while (n != 1 && n != 2);
        if (n == 1) {
            poisk(n);
        }

        
        system("pause");
    }
    coridor(n);


}
void bathroom(int n) {
    system("cls");
    cout << "Здесь и было обнаружено тело, оно лежало в заполненной ванне. Может, женщина просто захлебнулась? \n" << endl;
    cout << "ОСМОТРЕТЬСЯ (1) или ВЫЙТИ В КОРИДОР(2)" << endl;
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2);

    if (n == 1) {
        system("cls");
        cout << "Ничего примечательного: стиральная машина, пустой крючок для полотенца, недавно вымытое зеркало над раковиной. \nВозможно, Вы что-то упускаете? \n";
        nesch1 = true;
        system("pause");
    }
    coridor(n);

}
void kitchen(int n) {
    system("cls");
    cout << "Вы на кухне, на столе стоит уже давно остывшая еда, а рядом лежит записка.  \n" << endl;
    cout << "ОСМОТРЕТЬСЯ (1) или ВЫЙТИ В КОРИДОР(2)" << endl;
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2);

    if (n == 1) {
        system("cls");
        cout << "Записка оказывается письмом от родной дочери хозяйки квартиры. В нем она поздравляет мать с покупкой редкой вазы на аукционе и сожалеет, что сможет приехать к ней лишь в следующем месяце. Число на письме - 11.10.1993.  \n";
        doch = true;
        cout << "ОСМОТРЕТЬ МУСОРНОЕ ВЕДРО (1) или ВЫЙТИ В КОРИДОР(2)" << endl;
        {
            cin >> n;
            if (n == 0) exit(0);
        } while (n != 1 && n != 2);
        if (n == 1) {
            system("cls");
            cout << "Среди прочего : пустая упаковка таблеток от давления, отсыревшая пачка семян для рассады, одноразовый шприц, \nкоробка печенья, направление к кардиологу на 5.11.1993\n" << endl;
            vrach1 = true;
        }
        system("pause");
    }
    coridor(n);

}
void otdel(int n){
    system("cls");
    cout << "С помощью опроса местного населения было установлено, \nчто за последние сутки у подъезда не было замечено ни одного подозрительного человека. \nКроме жителей подъезда, здесь видели лишь врача, выезжавшего на вызов, и дочь пострадавшей. \n";
    otdel1= true;
    system("pause");
    coridor(n);
}

void poisk(int n) {
    system("cls");
    cout << "ВВЕСТИ НАЗВАНИЕ ПРЕДМЕТА ДЛЯ ПОИСКА(строчными букв) или ВЫЙТИ В КОРИДОР(2)" << endl;
    cin >> s;
    if (s == "2") {
        coridor(n);
    }
    if (s != "ваза")
    {

        cout << "Что-то не то" << endl;
       
        system("pause");
        poisk(n);
    }
    else
    {
        system("cls");
        cout << "Действительно, вазы нигде нет. Но куда она могла деться? \nЛибо ее забрал тот, кто совершил это преступление, либо ее украли уже позже. \nНо до Вас здесь были только сотрудники милиции…" << endl;
        cout << "Вы возвращаетесь в коридор" << endl;
        vaza = true;
        system("pause");
        coridor(n);
    }

}
void qvit(int n) {
    system("cls");
    cout << "Кажется, у Вас есть версия события. Итак, что это было?" << endl;
    cout << "УБИЙСТВО(1) или НЕСЧАТСНЫЙ СЛУЧАЙ(2)" << endl;
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2);

    if (n == 1) {
        system("cls");
        cout << "Действительно, оставить тапочки у кресла и даже не взять с собой полотенцу - так люди не ходят в ванную. И зачем ставить на стол еду, а потом идти мыться? \nНо кто мог соверишить убийство и украсть вазу?";
        ub( n);

    }
    else {
        system("cls");
        cout << "Похоже на то, но кто могу украсть вазу? " << endl;

        nesch(n);

    }

}
void ub(int n){
    cout << "(1)Преступление совершила дочь \n(2)Преступление совершил врач \n(3)Преступление совершил один из соседей \n(4)Убийца дворецкий!" << endl;
    do
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2 && n != 3 && n != 4);

    system("cls");

    switch (n)
    {
    case 1: cout << "К Вам в милицию пришла заплаканная девушка и сообщила о смерти матери, а вы еще и обвинили ее в убийстве? Вам должно быть стыдно!"; exit(0);
    case 2: cout << "Как оказалось, это не первое подобное преступление в Москве. \nВ больнице доктор узнает адреса пожилых женщин из благополучных районов с проблемами с сердцем. \nПроникнуть в квартиру не составляло труда, ведь пенсионерки сами открывали ему. \nПод предлогом сделать укол от давления он вводил им смертельную инъекцию, после чего забирал их квартиры только самое дорогое и обставлял все как несчастный случай. \nБлагодаря Вашим дедуктивным способностям его наконец удалось поймать. \nПоздравляем Вас!"; exit(0);
    case 3: cout << "Среди соседей лишь такие же пожилые люди. Никто из них не смог бы совершить такого. Проявите уважение к дедушкам и бабушкам!"; exit(0);
    case 4: cout << "Отлично! Вы уволены."; exit(0);
    }
}
void nesch(int n) {
    cout << "(1)Какая ваза? \n(2)Вазу украл участковый" << endl;
    do
    {
        cin >> n;
        if (n == 0) exit(0);
    } while (n != 1 && n != 2 );

    system("cls");

    switch (n)
    {
    case 1: cout << "Вы очень плохой следователь"; exit(0);
    case 2: cout << "Не верно. Видимо, вы единственный недобросовестный милиционер в этом районе. "; exit(0);
    }

}