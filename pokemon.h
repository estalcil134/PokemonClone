#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Pokemon{
private:
	string name;
public:
	Pokemon(){
		name = "No Name";
	}
	Pokemon(string _name){
		name = _name;
	}

	string cry(){
		return name;
	}

};
