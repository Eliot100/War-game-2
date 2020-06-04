#pragma once
// #ifndef FootSoldier_H
// #define FootSoldier_H
#include "FootSoldier.hpp"
// #endif
#define FootCommander_health 150
#define FootCommander_damage 20

class FootCommander : public FootSoldier {
public:
	FootCommander(int x) : FootSoldier(x){
		this->health = FootCommander_health;
		this->damage = FootCommander_damage;
	}
	void abillity();
	void SetHealth();
};

void FootCommander::SetHealth(){
	this->health = FootCommander_health;
}