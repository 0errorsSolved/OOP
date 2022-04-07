#ifndef UTILAJ_H
#define UTILAJ_H
#include <iostream>

using namespace std;

class Utilaj{

private:
    char utilitate[20];
    double consum;
    char* motorizare;
    bool achitat_integral;
    int valoare_utilaj;
public:

    ////////Getters/////////
    double getConsum()
    {
        return this->consum;
    }
    char* getMotorizare()
    {
        return this->motorizare;
    }
    bool getAchitat()
    {
        return this->achitat_integral;
    }
    int getValoare_utilaj()
    {
        return this->valoare_utilaj;
    }


    //////Setters/////////

    void setConsum(double c)
    {
        this->consum = c;
    }

    void setMotorizare(char* m)
    {
        if(this->motorizare!=NULL)
            delete[] this->motorizare;

        this->motorizare = new char[strlen(m)+1];
        strcpy(this->motorizare, m);
    }

    void setAchitat(bool x)
    {
        this->achitat_integral = x;
    }

    void setValoareUtilaj(int k)
    {
        this->valoare_utilaj = k;
    }

    ////////Constructori////////
    Utilaj()
    {
        strcpy(this->utilitate, "buldozer");
        this->consum = 36.7;

        this->motorizare = new char[strlen("diesel")+1];
        strcpy(this->motorizare, "diesel");

        this->achitat_integral = true;
        this->valoare_utilaj = 37600;
    }
    Utilaj(char _utilitate[20],double _consum, char* _motorizare, bool _achitat_integral, int _valoare )
    {
        strcpy(this->utilitate, _utilitate);
        this->consum = _consum;

        this->motorizare = new char[strlen(_motorizare)+1];
        strcpy(this->motorizare, _motorizare);

        this->achitat_integral = _achitat_integral;
        this->valoare_utilaj = _valoare;
    }


    void afisare()
    {
    cout<<"Utilaj "<<this->utilitate<<" consuma "<<this->consum<<"  si valoreaza "<<this->valoare_utilaj;
    }
};





#endif // UTILAJ_H
