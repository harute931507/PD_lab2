#include <iostream>
#include <fstream> 
#include <cmath> 

#include "calElo.h"

using namespace std;

int main(){
	int K, RA, RB;
	float WL;
	
	ifstream fileIn( "file.in", ios::in);
	ofstream fileOut( "file.out", ios::out);
	
	fileIn >> K >> RA >> RB;
	fileOut << RA << "	" << RB << endl;
	
	
	while(fileIn >> WL){
		calElo(K, RA, RB, WL);
		fileOut << RA << "	" << RB << endl;
	}
	
	return 0;
}

