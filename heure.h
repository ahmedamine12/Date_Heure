#pragma once
namespace heure
{
	class heure
	{
	protected:
		int heur;
		int minute;
		int seconde;
	public:
		heure(int, int, int);
	     bool operator>(const heure&);
		 void print()const;

	};
}
