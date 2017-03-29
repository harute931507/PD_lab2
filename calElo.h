#ifndef CALELO_H
#define CALELO_H
#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

class calElo{
	
	public:
		calElo(int K,int &RA,int &RB,float WL);
			
	private:
		float EA,EB;
		float ra,rb;
		
};

#endif
