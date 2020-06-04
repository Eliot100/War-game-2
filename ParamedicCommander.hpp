#pragma once
// #ifndef Paramedic_H
// #define Paramedic_H
#include "Paramedic.hpp"
// #endif
#define ParamedicCommander_health 200
#define ParamedicCommander_damage 1

class ParamedicCommander : public Paramedic {
public:
	ParamedicCommander(int x): Paramedic(x){
		this->health = ParamedicCommander_health;
		this->damage = ParamedicCommander_damage;
	} 
	void abillity();
	void SetHealth();
};

void ParamedicCommander::SetHealth(){
	this->health = ParamedicCommander_health;
}