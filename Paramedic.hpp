#pragma once
#include "Soldier.hpp"

class Paramedic : public Soldier {
public:

	Paramedic(int x) {
		this->player = x;
		this->health = 100;
		this->damage = 0;
	}
	void heal();
	void abillity();
};