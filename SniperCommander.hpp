#pragma once
// #ifndef Sniper_H
// #define Sniper_H
#include "Sniper.hpp"
// #endif
#define SniperCommander_health 120
#define SniperCommander_damage 100

class SniperCommander : public Sniper {
public:
	SniperCommander(int x): Sniper(x){
		this->health = SniperCommander_health;
		this->damage = SniperCommander_damage;
	}
	void abillity();
	void SetHealth();
};

void SniperCommander::SetHealth(){
	this->health = SniperCommander_health;
}
