
#include <iostream>
using namespace std;
#ifndef SOLDIER_H
#define SOLDIER_H
namespace Soldiers {
	
    class Soldier {
    public:
		int player;
		int health;
        int damage;
        std::pair<int, int> location;
        virtual void abillity();
		Soldier(int p, int h, int d) : player(p), health(h), damage(d){}

    };

	// class Shooter : public Soldier {
    // public:
    // int damage;
	// virtual void shoot();
    // };
//    class Commander : public Shooter {
//    public:
//
//        virtual void spetialAbility();
//    };
}
//#pragma once
#endif
