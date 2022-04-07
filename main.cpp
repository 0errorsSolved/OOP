#include <iostream>
#include <string.h>
#include "Angajat1.h"
#include "Utilaj.h"
#include "Proiect.h"
#include "Statistica.h"

using namespace std;

int main()
{
//
//    Angajat Ciprian;
//    cout<<Ciprian.getSalariu();
//
//    char utilaj1[] = "excavator";
//    char fct[] = "diesel";
//    Utilaj abc("baSCULA", 40.6, fct, true, 48000);
//    Utilaj abc1(utilaj1, 50.7, fct, true, 58000);
//
//
//    float totalConsum = abc.getConsum() + abc1.getConsum();
//    cout<<totalConsum<<endl;
//    abc.afisare();
//
//    Statistica initial;
//    cout<<endl<<"---------------";
//    cout<<"Rezerva actuala este de "<<initial.getRezerva_combustibil() - totalConsum<<endl;
//
//   initial.afisare();
    Proiect first;
    Proiect proiect_initial("primul", 35000.f, true, "Constanta", 22000, "n", 365);
    cout<<proiect_initial.getLocatie_proiect();
    first.afis();


    return 0;
}
