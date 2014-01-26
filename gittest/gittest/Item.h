#include <string>
using namespace std;
int IDctr;
class Item{
	int ID;
	string name;
public:
	int getID(){return ID;}
	string getName(){return name;}
	Item(string Name){
		name = "";
		name += Name;
		IDctr += 1;
		ID = IDctr;
	}
	Item(){
		IDctr = 1;
		ID = IDctr;
		name = "Init";
	}
};