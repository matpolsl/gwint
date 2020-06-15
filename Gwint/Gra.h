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
	int idt = -1;
	AI() {
		W[0] = 0;
		W[1] = 0;
		W[2] = 0;
		for (int i = 0; i < 10; i++) {
			RandPoint[i] = std::rand() % 10 + 1;
			RandType[i] = std::rand() % 3 + 1;
		}
	}
	void ini() {
		W[0] = 0;
		W[1] = 0;
		W[2] = 0;
		for (int i = 0; i < 10; i++) {
			RandPoint[i] = std::rand() % 10 + 1;
			RandType[i] = std::rand() % 3 + 1;
		}
	}
	int Choice(){
			//int max = 0;
			//int maxid = -1;
			//for (int i = 0; i < 10; i++) {
			//	if (max <= RandPoint[i]) {
			//		maxid = i;
			//		max = RandPoint[i];
			//	}
			//}
			idt++;
			int maxid = idt;
			return maxid;
		}

	void zero(int id) {
		RandPoint[id] = 0;
		RandType[id] = 0;
	}
	void Point(int id) {
		W[RandType[id]-1] += RandPoint[id];
	}

};


