#include <iostream>
#include <vector>

using namespace std;

class Urzadzenie {
    protected:
    string nazwa_produktu;
    int cena;

    public:
        int daj_cene()
        {
        return cena;
        }
        void ustaw_cene(int cena){
        this->cena = cena;
        }
        string daj_nazwe_produktu()
        {
        return nazwa_produktu;
        }
        void ustaw_nazwe_produktu(string nazwa_produktu){
        this->nazwa_produktu = nazwa_produktu;
        }
        Urzadzenie(){}
        Urzadzenie(string nazwa_produktu,int cena){
        ustaw_cene(cena);
        ustaw_nazwe_produktu(nazwa_produktu);
        }

};
class Telefon : public Urzadzenie{
    private:
    int aparat;
    string nazwa_procesora;

    public:
        int daj_aparat()
        {
         return aparat;
        }
        void ustaw_aparat(int aparat)
        {
            this->aparat = aparat;
        }
        string daj_nazwe_procesora()
        {
            return nazwa_procesora;
        }
        void ustaw_nazwe_procesora(string nazwa_procesora){
        this->nazwa_procesora = nazwa_procesora;
        }
        Telefon(){}
        Telefon(int aparat, string nazwa_procesora, int cena, string nazwa_produktu): Urzadzenie(nazwa_produktu, cena){
        ustaw_aparat(aparat);
        ustaw_nazwe_procesora(nazwa_procesora);
    }
    };
vector<Telefon> wiktorvector(){
    vector<Telefon> tablica;
    tablica.push_back(Telefon(13,"amd",1200,"Samsung"));
    tablica.push_back(Telefon(5,"qualcom",700,"xiaomi"));
    tablica.push_back(Telefon(7,"intel",1200,"huawei"));
    tablica.push_back(Telefon(13,"amd",1500,"Iphone"));
    tablica.push_back(Telefon(3,"intel",500,"Meizu"));
    return tablica;
}


vector<Telefon> najlepszy_aparat(vector<Telefon> wiesiek){
    vector<Telefon> wynik;
    int najwiekszy_aparat = 0;
    for (int i=0;i<wiesiek.size();i++){
        if(najwiekszy_aparat < wiesiek[i].daj_aparat())
        {
            wynik.clear();
            wynik.push_back(wiesiek[i]);
            najwiekszy_aparat = wiesiek[i].daj_aparat();

        }
        else if (najwiekszy_aparat == wiesiek[i].daj_aparat())
        {
            wynik.push_back(wiesiek[i]);
        }
    }
        return wynik;
    }




int main()
{
    vector<Telefon> wektor = wiktorvector();
    vector<Telefon> wynik_glowny = najlepszy_aparat(wektor);
    for (int i=0;i<wynik_glowny.size();i++)
    {
    cout<<wynik_glowny[i].daj_nazwe_produktu() <<wynik_glowny[i].daj_aparat();
    }
}
