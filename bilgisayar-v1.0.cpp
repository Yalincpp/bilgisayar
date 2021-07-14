#include <iostream>
#include <string>

using namespace std;
int main ()
{
    int secim;
    string parola;
    string dogruparola="dayimveben";
    string google;
    string alici;
    string verici;
    string posta;

    for(int i=0; i<3 && parola != dogruparola; i++)
    {

        cout << "BİR PAROLA GİRİN:" << endl;
        cin >> parola;
    }


    if(parola==dogruparola)
    {
        while(true)
        {
            cout << "ÇIKIŞ:0, GOOGLE:1, GMAİL:2" << endl;
            cin >> secim;

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

            }

        }
    }
}