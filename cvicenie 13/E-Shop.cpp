
#include <iostream>
#include <string>
#include "Katalog.h"
#include "Produkt.h"
#include "Objednavka.h"
#include "Zakaznik.h"
#include "NeregistrovanyUzivatel.h"
#include "RegistrovanaFirma.h"
#include "RegistrovanyUzivatel.h"
#include "Tablet.h"
#include "Telefon.h"
#include "Notebook.h"

using namespace std;

int main()
{
    // the first attemt would work without created inherited class
    // to show functionality

    Produkt* ntb = new Produkt(" notebook", 1500);
    Produkt * mbl = new Produkt("mobil", 500);   // najskor sa vytvoria produkty 
    Katalog* nay = new Katalog(50);   // vytvori sa katalog o urcitej velkosti
    nay->PridatDoKatalogu(ntb);
    nay->PridatDoKatalogu(mbl);       // produkty sa pridaju do katalogu    
    nay->VypisKatalogu();    // katalog sa vypise pre zakaznika 
    Zakaznik* jozef = new Zakaznik("Jozef Salamunsky");   // vytvori sa zakaznik
    Objednavka* obj1 = new Objednavka(jozef);  // vytvori sa objednavka pre zakaznika 
    obj1->PridatDoObjednavky(ntb,5);  // produkty sa pridaju v istom mnozstve to objednavky 
    obj1->PridatDoObjednavky(mbl, 3);
    obj1->Vypis_Zhrnutie_Objednavky(); // vypis a zhrnutie ceny objednavky 

    cout << " ------------------------" << endl;

    NeregistrovanyUzivatel* pista = new NeregistrovanyUzivatel("pista bermudsky");
    RegistrovanaFirma* firma = new  RegistrovanaFirma("firma.sro");
    Katalog* okay = new Katalog(50);
    Notebook* logitech = new Notebook("logitech", 1500);
    Telefon* iphone = new  Telefon("iphone", 1000);  // tu sa uz vytvaraju specificke triedy a objekty. telefon , mobil , notebook dedia z produktu
    okay->PridatDoKatalogu(logitech);   // registrovany , neregistrovany , uzivatelia x firmy dedia zo zakaznika 
    okay->PridatDoKatalogu(iphone);    // vdaka substitucnej metode potom vie zastupit svojho predchodcu
    Objednavka* obj2 = new Objednavka(firma);  // na vypis nepouzivam abstraktu To_string triedu , metody na vypisy  katalogu a objednavky existuju v ich triedach
    obj2->PridatDoObjednavky(logitech, 2);   
    obj2->PridatDoObjednavky(iphone, 3);
    obj2->Vypis_Zhrnutie_Objednavky();
   
}

