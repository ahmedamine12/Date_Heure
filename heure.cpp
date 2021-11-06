#include "pch.h"
#include "heure.h"
#include<iostream>
using namespace std;

heure::heure::heure(int h, int m, int s)
{
	if (h < 0 || h >23) this->heur = 0;
	else
	this->heur = h;
	if (m < 0 || m>60) this->minute = 0;
	else
	this->minute = m;
	if (s < 0 || s>60) this->seconde = 0;
	this->seconde = s;
	
}

bool heure::heure::operator>(const heure& p)
{
	if (this->heur * 3600 + this->minute * 60 + this->seconde > p.heur * 3600 + p.minute * 60 + p.seconde)
		return true;
	return false;

}

void heure::heure::print() const
{
	cout << heur << ":" << this->minute << ":" << this->seconde << endl;
}
