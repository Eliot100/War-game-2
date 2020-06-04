#pragma once
#includes "Soldier.hpp"

class FootSoldier : public Soldier {
public:
	FootSoldier(int x) {
		this->player = x;
		this->health = 100;
		this->damage = 10;
	}
	void abillity();
	void shoot();
};
