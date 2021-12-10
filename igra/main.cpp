#include <string>
#include <iostream>
#include <map>
using namespace std;
char a = (char)(static_cast<int>('a') - 1);
string w,q= "1023456789";
int n, dlina = 4;
char k;
string h;
int flag = 0;
char y;
int x;
int i1 = 0, i2 = 0;

map <char, string> p1, p2, p11, p22;
struct Pole
{
    map <char, string> mpl1ego, dop1, shb;
    void vivod(map<char, string> s) {
        cout << " 12345678910" << endl;
        for (int i = 1; i < 11; i++) {

            cout << (char)(a + i) << (s[a + i]).substr(1) << endl;
        }
    }
    bool vvod1() {
        if (k <= 'j' && k >= 'a' && n <= 10 && n > 0) {
            if (mpl1ego[k].substr(n - 1, 3).find('N') == string::npos && mpl1ego[k - 1].substr(n - 1, 3).find('N') == string::npos && mpl1ego[k + 1].substr(n - 1, 3).find('N') == string::npos) {
                flag = 0;
                dop1 = mpl1ego;
                dop1[k][n] = 'N';
                if (dlina == 1) {
                    mpl1ego = dop1;
                    return true;
                }
                if (h == "pr" && n + dlina <= 11) {
                    for (int j = 1; j < dlina; j++) {
                        if (dop1[k][n + j] == '.' && dop1[k - 1][n + j] == '.' && dop1[k + 1][n + j] == '.') {
                            dop1[k][n + j] = 'N';
                        }
                        else {
                            return false;
                        }
                        flag = j + 1;


                    }
                    if (flag == dlina) {
                        mpl1ego = dop1;
                        return true;
                    }
                }
                else if (h == "ni" && k + dlina - 1 <= 'j') {
                    for (int j = 1; j < dlina; j++) {
                        if (dop1[k + j].substr(n - 1, 3).find('N') == string::npos) {
                            dop1[k + j][n] = 'N';
                        }
                        else {
                            return false;
                        }
                        flag = j + 1;


                    }
                    if (flag == dlina) {
                        mpl1ego = dop1;
                        return true;
                    }

                }
            }
        }
        return false;

    }
    void vvod2() {
        int c = 0;
        for (int i = 0; i < 12; i++) {
            mpl1ego[a + i] = "........... ";
        }
        dop1 = shb = mpl1ego;
        int i = 1;
        while (i < 11) {
            cout << "PRIMERI VVODA: \na 1 pr\nc 2 ni\nVI VIBIARATE COORDINATU LEVOY VERHNEY KLETKI KORABLYA I VIBARETE STROIT' KORABL VNIZ OT ETOY KLETKI ILI VPRAVO \n" << endl;
            vivod(mpl1ego);
            if (c == 1) {
                cout << "  oshibka!\n" << endl;
                c = 0;
            }
            cout << "korabl dlini " << dlina << ": ";
            cin >> k >> w >> h;
            system("cls");
            if (q.find(w) != string::npos) {
                n = stoi(w);
                if (vvod1() == true) {
                    i++;
                }
                else {
                    c = 1;
                }
            }
            else {
                c = 1;
            }


            if (i > 1 && i <= 3) {
                dlina = 3;
            }
            if (i > 3 && i <= 6) {
                dlina = 2;
            }
            if (i > 6) {
                dlina = 1;
            }

        }
        vivod(mpl1ego);

    }


};

Pole u;

void hod1() {
    cout << " hod igroka 1" << endl;
    u.vivod(p22);
    cin >> y >> w;
    if (q.find(w) != string::npos) {
        x = stoi(w);
    }
    else {
        system("cls");
        cout << " hod igroka 1" << endl;
        cout << "oshibka vvoda! porobuite esche raz!\n";
        hod1();
    }
    if (y <= 'j' && y >= 'a' && x <= 10 && x > 0) {
        if (p2[y][x] == 'N') {
            p22[y][x] = 'X';
            i2 += 1;
            system("cls");
            if (i2 == 20) {
                system("cls");
                cout << "POBEDIL IGROK 1!";
                exit(0);
            }
            hod1();
        }
        else {
            p22[y][x] = 'O';
            return;
        }


    }
    else {
        system("cls");
        cout << " hod igroka 1" << endl;
        cout << "oshibka vvoda! porobuite esche raz!\n";
        hod1();
    }
}

void hod2() {
    cout << " hod igroka 2" << endl;
    u.vivod(p11);
    cin >> y >> w;
    if (q.find(w) != string::npos) {
        x = stoi(w);
    }
    else {
        system("cls");
        cout << " hod igroka 2" << endl;
        cout << "oshibka vvoda! porobuite esche raz!\n";
        hod2();
    }
    if (y <= 'j' && y >= 'a' && x <= 10 && x > 0) {
        if (p1[y][x] == 'N') {
            p11[y][x] = 'X';
            i1 += 1;
            system("cls");
            if (i1 == 20) {
                system("cls");
                cout << "POBEDIL IGROK 2!";
                exit(0);
            }
            hod2();
        }
        else {
            p11[y][x] = 'O';
            return;
        }


    }
    else {
        system("cls");
        cout << " hod igroka 2" << endl;
        cout << "oshibka vvoda! porobuite esche raz!\n";
        hod2();
    }
}



int main()
{


    cout << "POLE ZAPOLNYAET IGROK 1" << endl;
    u.vvod2();
    p1 = u.mpl1ego;
    dlina = 4;
    flag = 0;
    system("cls");
    cout << "POLE ZAPOLNYAET IGROK 2" << endl;
    u.vvod2();
    p2 = u.mpl1ego;
    system("cls");
    p11 = p22 = u.shb;
    while (true) {


        system("cls");
        hod1();
        system("cls");
        hod2();

    }

}
