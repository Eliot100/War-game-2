#pragma once
// #include "Soldier.hpp"
#define Paramedic_health 100
#define Paramedic_damage 0

class Paramedic : public Soldier {
public:

	Paramedic(int x) {
		this->player = x;
		this->health = Paramedic_health;
		this->damage = Paramedic_damage;
	}
	void heal();
	void abillity();
	void SetHealth();
};

void Paramedic::SetHealth(){
	this->health = Paramedic_health;
}