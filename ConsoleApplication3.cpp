// Muhammed Furkan Kaçmaz
// 13.03.2020
//

#include <iostream>

using namespace std;

class karmasik {
public:
    void setsabit(int re) {
        sabit = re;
    }
    void setkok(int sa) {
        kok = sa;
    }

    int getsabit() {
        return  sabit;
    }
    int getkok() {
        return kok;
    }

    karmasik() {
        sabit = 0;
        kok = 0;
    }

    karmasik(int sa) {
        kok = sa;
        sabit = 0;
    }


    karmasik(double re) : sabit(re), kok{ 0 } {//double int e çevirir. Virgülden sonrası veri kaybı olur.
    }

    karmasik(int re, int sa) {
        kok = sa;
        sabit = re;
    }

private:
    int sabit;
    int kok;
};

void print(int reel, int sanal);




int main()
{
    karmasik x;
    int sayac;

    cout << "Kac tane karmasik sayi gireceksiniz" << endl;
    cin >> sayac;
    cout << endl << endl;
    int i = 1, reel[5] ,sanal[5], tut, max;

    for (; i <= sayac; ++i) {
        cout << i << ". karmasik sayinin reel kismini giriniz : ";
        cin >> reel[i - 1];
        cout << i << ". karmasik sayinin sanal kismini giriniz : ";
        cin >> sanal[i - 1];
    }

    i = 0;
    
    while (i < sayac) {
        print(reel[i], sanal[i]);
        ++i;
    }
   


    return 0;
}

void print(int reel, int sanal) {
    if (sanal > 0) {
        cout << reel << "+" << sanal << "i\n";
    }

    else if (sanal < 0) {
        cout << reel << sanal << "i";
    }

    else if (0 == sanal) {
        cout << reel;
    }

}






