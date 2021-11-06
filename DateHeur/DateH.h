#pragma once
#include "heure.h"

using namespace heure;
class DateH :
    public heure
{
private:
    int jour;
    int mois;
    int annee;
public:
    DateH(int, int, int, int, int, int);
    bool verifBasique(int, int, int);
    bool operator>(const DateH&);
    bool bissextille(int);
    int nbr_jour_mois(int,int);
    void print();


    





};

