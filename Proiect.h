#ifndef PROIECT_H
#define PROIECT_H
#include <string.h>
#include <iostream>


using namespace std;

class Proiect {

private:
    const char* nume_proiect;
    //static int nr_proiect;
    float valoare_proiect;
    char locatie_proiect[50];
    bool proiect_finalizat;
    double cheltuieli_proiect;
    char* fonduri; // n=nationale, e=europene
    float durata_proiect; // valoare exprimata in saptamani
public:

    ////////Getters/////////
    float getValoare_proiect()
    {
        return this->cheltuieli_proiect;
    }
    char getLocatie_proiect()
    {
        return this->locatie_proiect[50];
    }
    bool getProiect_finalizat()
    {
        return this->proiect_finalizat;
    }
    double getCheltuieli()
    {
        return this->cheltuieli_proiect;
    }
    char* getFonduri()
    {
        return this->fonduri;
    }
    float getDurata_proiect()
    {
        return this->durata_proiect;
    }


    //////Setters/////////

    void setValoareProiect(float n)
    {
        this->valoare_proiect = n;
    }

    void setLocatieProiect(char d[50])
    {
        strcpy(this->locatie_proiect, d);
    }

    void setFinalizare(bool x)
    {
        this->proiect_finalizat = x;
    }

    void setCheltuieliProiect(double y)
    {
        this->cheltuieli_proiect = y;
    }

    void setFonduri(char* k)
    {
        this->fonduri = k;
    }

    void setDurataProiect(float n)
    {
        this->durata_proiect = n;
    }

    ////////Constructori////////

    Proiect():nume_proiect("primul")
    {

        this->valoare_proiect = 97300.9f;
        this->proiect_finalizat = true;

        strcpy(this->locatie_proiect, "Soseaua Giurgiului");
        this->cheltuieli_proiect = 41825.4;
        strcpy(this->fonduri , "e");
        this->durata_proiect = 243.f;
    }
    Proiect(char* _nume_proiect, float _valoare_proiect, bool _proiect_finalizat,char _locatie_proiect[50], double _cheltuieli_proiect, char* _fonduri, float _durata):nume_proiect(_nume_proiect)
    {
        this->valoare_proiect = _valoare_proiect;
        this->proiect_finalizat = _proiect_finalizat;

        strcpy(this->locatie_proiect, _locatie_proiect);
        this->cheltuieli_proiect = _cheltuieli_proiect;
        strcpy(this->fonduri, _fonduri);
        this->durata_proiect = _durata;
    }

    void afis()
    {
        // cout<<":: "<<this->nume_proiect<<" "<<this->valoare_proiect<<" "<<this->locatie_proiect<<" "<<this->cheltuieli_proiect;
        cout<<"nothing";
    }

};

#endif // PROIECT_H
