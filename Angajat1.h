#ifndef ANGAJAT_H
#define ANGAJAT_H
#include <iostream>

using namespace std;

class Angajat{

private:
    const int id_angajat;
    char* nume_angajat;
    bool bonus;
    float salariu;
    //static int luni_muncite;
    char meserie; // n=muncitor necalificat, c=calificat, s=sofer,
    int* ore_muncite; // orele muncite dintr-o saptamana | ore[0]=luni, ore[1]=marti
    char data_angajarii[20];
    double experienta;

public:

    //////Getters/////////

    char* getNume_angajat()
    {
        return this->nume_angajat;
    }
    bool getBonus()
    {
        return this->bonus;
    }
    float getSalariu() const
    {
        return this->salariu;
    }
    char getMeserie()
    {
        return this->meserie;
    }
    int* getOre_muncite()
    {
        return this->ore_muncite;
    }
    char getData_angajarii()
    {
       return this->data_angajarii[20];
    }
    double getExperienta()
    {
        return this->experienta;
    }


    //////Setters/////////

    void setNume_angajat(char* n)
    {
        if(this->nume_angajat!=NULL)
            delete this->nume_angajat;

        this->nume_angajat=new char[strlen(n)+1];
        strcpy(this->nume_angajat, n);
    }

    void setSalariu(float s)
    {
        this->salariu = s;
    }

    void setMeserie(char m)
    {
        this->meserie = m;
    }

    void setOreMuncite(int* o)
    {
        if(this->ore_muncite!=NULL)
            delete this-> ore_muncite;

        this->ore_muncite=new int[5];

        for(int i=0; i<5; i++)
            this->ore_muncite[i]=o[i];
    }

    void setDataAngajare(char d[20])
    {
        strcpy(this->data_angajarii, d);
    }

    void setExperienta(double e)
    {
        this->experienta = e;
    }


    ////////Constructori////////


    Angajat():id_angajat(0)
    {
        this->salariu = 2135.5f;
    }

    Angajat(char* _nume, char _meserie, int* _ore_muncite, char _data_angajarii[20], double _experienta):id_angajat(0)
    {

        this->nume_angajat =new char [strlen(_nume)+1];
        strcpy(this->nume_angajat , _nume);

        for(int i=0; i<5; i++)
            if(_ore_muncite[i] > 8)
               {
                this->bonus = true;
                break;
               }

        this->meserie = _meserie;

        this->ore_muncite = new int[5];
        for(int i=0; i<5; i++)
            this->ore_muncite[i] = _ore_muncite[i];

        strcpy(this->data_angajarii, _data_angajarii);

        this->experienta = _experienta;

    }
//
//    Angajat(const Angajat& mes):id_angajat(0)
//    {
//        this->meserie= mes.meserie;
//    }
//
//
//
//
//    Angajat& operator = (const  Angajat& angj)
//    {
//        if(this!=&angj)
//        {
//            float slr = angj.getSalariu();
//
//        }
//        return *this;
//
//    }
//    //////Supra-incarcare operator <<
//    friend ostream& operator <<(ostream& out, const Angajat& angj)
//    {
//        out<<"Angajatul cu id-ul: "<<angj.id_angajat<<" are "<<angj.experienta<<" ani de experienta";
//
//        return out;
//    }
//
//    //////Supra-incarcare operator >>
//    friend istream& operator >> (istream& in, Angajat& angj)
//    {
//        char aux[100];
//
//        cout<<"Introduceti numele: ";
//        in>>aux;
//
//        if(angj.nume_angajat!=NULL)
//            delete[] angj.nume_angajat;
//        angj.nume_angajat = new char[strlen(aux)+1];
//        strcpy(angj.nume_angajat, aux);
//
//        cout<<"Introduceti experienta :";
//        in>>angj.experienta;
//
//        cout<<"Introduceti salariu: ";
//        in>>angj.salariu;
//
//        return in;
//    }
//
//    ///////Pre incrementare operator ++
//
//    const Angajat& operator++()
//    {
//        this->luni_muncite++;
//        return *this;
//    }
//
//    //////Post incrementare operator ++
//
//    const Angajat& operator++(int)
//    {
//        Angajat aux(*this);
//
//        this->luni_muncite++;
//
//        return aux;
//    }


    /////Destructor
     ~Angajat()
    {
        if(this->nume_angajat != NULL)
            delete[] this->nume_angajat;
        if(this->ore_muncite != NULL)
            delete[] this->ore_muncite;

    }
};
#endif // ANGAJAT_H
