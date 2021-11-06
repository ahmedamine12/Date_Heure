

#include <iostream>
using namespace std;
#include "DateH.h"


int main()
{
	DateH *date=new DateH( 1,1,1,20,1, 2001);
	DateH date2(1, 3, 4, 12, 4, 2001);
	cout << (date2.operator>(*date));

	//date->print();
	
}

