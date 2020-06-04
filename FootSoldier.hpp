#pragma once
// #includes "Soldier.hpp"
#define FootSoldier_health 100
#define FootSoldier_damage 10

class FootSoldier : public Soldier {
public:
	FootSoldier(int x) {
		this->player = x;
		this->health = FootSoldier_health;
		this->damage = FootSoldier_damage;
	}
	void abillity();
	void shoot();
	void SetHealth();
};

void FootSoldier::SetHealth(){
	this->health = FootSoldier_health;
}