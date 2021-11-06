#include "pch.h"
#include "DateH.h"
#include <iostream>
#include"assert.h"
using namespace std;

DateH::DateH(int h, int m, int s, int j, int mo, int a) :heure (h, m, s)
{
	assert(verifBasique(j, mo, a));
	
		this->jour = j;
		this->mois = mo;
		this->annee = a;

	



	
  
}



bool DateH::operator>(const DateH&d)
{
	
	if (this->annee != d.annee)
		return(this->annee > d.annee);
	if (this->mois != d.mois)
		return (this->mois > d.mois);
	if (this->jour != d.jour)
		return (this->jour > d.jour);
	return  (this->heure::operator>(d));

}
bool DateH::bissextille(int a)
{
	//every fourth year, which consists of 366 days, February having 29, ie 1996, 2000, 2004 etc. 
	return((a % 4 == 0) && ((a % 100 != 0) || (a % 400 == 0)));
	
}
bool DateH::verifBasique(int j, int m, int a)
{
	return ((j > 0 && j <= nbr_jour_mois(m,a)) && (m > 0 && m < 13) && (a > 1999 && a < 2999));


}


int DateH::nbr_jour_mois(int m , int a)
{
	if (bissextille(a) && m == 2)

		return 29;
	return 28;
	
	if ((m % 2 == 0 && m > 7) || (m % 2 != 1 && m <= 7))
		return 31;
	return 30;
}

void DateH::print()
{
	heure::print();
	cout << jour << "/" << this->mois << "/" << this->annee << endl;
}

