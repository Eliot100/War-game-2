#pragma once
// #include "Soldier.hpp"

class Sniper : public Soldier {
public:
	Sniper(int x) {
		this->player = x;
		this->health = 100;
		this->damage = 50;
	}
	void abillity();
	void shoot();
};