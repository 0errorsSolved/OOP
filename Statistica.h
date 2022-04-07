#ifndef STATISTICA_H
#define STATISTICA_H



class Statistica{

private:
    const int total_angajati_posibili;
    int total_proiecte;
    double balanta;
    float rezerva_combustibil;
    bool situatie;

public:

    ////////Getters/////////
    int getTotal_angajati()
    {
        return this->total_angajati_posibili;
    }
    int getTotal_proiecte()
    {
        return this->total_proiecte;
    }
    double getBalanata()
    {
        return this->balanta;
    }
    float getRezerva_combustibil()
    {
        return this->rezerva_combustibil;
    }
    bool getSituatie()
    {
        return this->situatie;
    }


    //////Setters/////////

    void setRezervaCombustibil(float n)
    {
        this->rezerva_combustibil = n;
    }
    ////////Constructori////////
    Statistica():total_angajati_posibili(60)
    {
        this->total_proiecte = 73;
        this->balanta = 985342;
        this->rezerva_combustibil = 83000;
        this->situatie = true;
    }
    Statistica(int _total_proiecte, double _balanta, float _rezerva_combustibil, bool _situatie):total_angajati_posibili(60)
    {
        this->total_proiecte = _total_proiecte;
        this->balanta = _balanta;
        this->rezerva_combustibil = _rezerva_combustibil;
        this->situatie = _situatie;
    }

    void afisare()
    {
        cout<<"Angajati maximi "<<this->total_angajati_posibili<<" total proiecte "<<this->total_proiecte<<" balanta "<<this->balanta<<" rezerva "<<this->rezerva_combustibil;
    }
};

#endif // STATISTICA_H
