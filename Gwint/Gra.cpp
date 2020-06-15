#include<iostream>
#include <stdlib.h>

#include"pch.h"
#include "Gra.h"

using namespace std;

void AI::ini() {
	W[0] = 0;
	W[1] = 0;
	W[2] = 0;
	pass = false;
	for (int i = 0; i < 10; i++) {
		RandPoint[i] = std::rand() % 10 + 1;
		RandType[i] = std::rand() % 3 + 1;
	}
}
int AI::Choice() {
	int max = 0;
	int maxid = -1;
	if (pass != true) {
		for (int i = 0; i < 10; i++) {
			if (max <= RandPoint[i] && RandPoint[i] != 0) {
				maxid = i;
				max = RandPoint[i];
			}
		}
	}
	return maxid;
}

void AI::zero(int id){
	RandPoint[id] = 0;
	RandType[id] = 0;
}

void AI::Point(int id){
	W[RandType[id] - 1] += RandPoint[id];
}

	