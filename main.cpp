#include <vector>
#include <iostream>
#include <string>

#include "pokemon.h"

using namespace std;

int main(int argc, char const *argv[]){
	Pokemon pikachu = Pokemon("Pikachu");
	cout<< pikachu.cry() <<endl;

	return 0;
}
