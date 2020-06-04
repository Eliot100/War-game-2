#pragma once
// #include "Soldier.hpp"
#define Sniper_health 100
#define Sniper_damage 50

class Sniper : public Soldier {
public:
	Sniper(int x) {
		this->player = x;
		this->health = Sniper_health;
		this->damage = Sniper_damage;
	}
	void abillity();
	void shoot();
	void SetHealth();
};

void Sniper::SetHealth(){
	this->health = Sniper_health;
}