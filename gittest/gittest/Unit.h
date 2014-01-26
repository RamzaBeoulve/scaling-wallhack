#include <iostream>
class Unit{
	int Str;
	int Dex;
	int Int;
public:
	Unit(){
		Str = rand()%100 + 1;
		Dex = rand()%100 + 1;
		Int = rand()%100 + 1;
	}
	int getdex(){return Dex;}
	int getstr(){return Str;}
	int getint(){return Int;}
};