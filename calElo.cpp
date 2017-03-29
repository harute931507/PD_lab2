#ifndef CALELO_CPP
#define CALELO_CPP

#include "calElo.h"

using namespace std;

calElo::calElo(int K,int &RA,int &RB,float WL){
	
	ra = RA;
	rb = RB;	
	
	EA = 1/( 1 + pow(10,(rb-ra)/400) );
	EB = 1-EA;
	
	RA=(RA+K*( WL - EA)+0.5);
	RB=(RB+K*( 1-WL - EB)+0.5);
}

#endif
