#pragma once
// #ifndef FootSoldier_H
// #define FootSoldier_H
#include "FootSoldier.hpp"
// #endif

class FootCommander : public FootSoldier {
public:
	FootCommander(int x) : FootSoldier(x){
		this->health = 150;
		this->damage = 20;
	}
	void abillity();
};
