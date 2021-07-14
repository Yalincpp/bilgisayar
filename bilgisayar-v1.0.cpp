#include <iostream>
#include <string>

using namespace std;
int main ()
{
    int secim=-1;
    string parola;
    string dogruparola="dayimveben";
    string google;
    string alici;
    string verici;
    string posta;
    string mparola;
    string tparola;
    string yparola;

    while(true)
    {
        cout << "BİR PAROLA GİRİN:" << endl;
        cin >> parola;


        if(parola==dogruparola)
        {
            cout << "ÇIKIŞ:0, GOOGLE:1, GMAİL:2, PAROLA DEĞİŞTİRME:3" << endl;
            cin >> secim;
        }

        if(secim==1)
        {
            cout << "ARAMAK İÇİN YAZIN:" << endl;
            cin >> google;
        }

        else if(secim==0)
        {
            break;
        }

        else if(secim==2)
        {
            cout << "ALICI E-POSTA ADRESİ:" << endl;
            cin >> alici;
            cout << "E-POSTA ADRESİNİZ:" << endl;
            cin >> verici;
            cout << "GÖNDERİNİZ:" << endl;
            cin >> posta;

        }
        else if(secim==3)
        {
            cout << "MEVCUT PAROLA:" << endl;
            cin >> mparola;
            
            if(mparola==dogruparola)
            {
                cout << "YENİ PAROLA:" << endl;
                cin >> yparola;
                cout << "YENİ PAROLAYI ONAYLA:" << endl;
                cin >> tparola;
                
                if(yparola==tparola)
                {
                    dogruparola=tparola;
                    cout << "PAROLANIZ BAŞARIYLA DEĞİŞTİRİLDİ" << endl;
                }
            }
        }
    }
}