#pragma once
#include <String>
#include <iostream>
#include <cstdlib>
#include <ctime>
class AI {
public:
	int RandPoint[10];
	int RandType[10];
	int W[3];
	bool pass;
	AI() {
		W[0] = 0;
		W[1] = 0;
		W[2] = 0;
		pass = false;
		for (int i = 0; i < 10; i++) {
			RandPoint[i] = std::rand() % 10 + 1;
			RandType[i] = std::rand() % 3 + 1;
		}
	}
	void ini();
	int Choice();
	void zero(int id);
	void Point(int id);

};


