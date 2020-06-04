
#include "Soldier.hpp"

class Sniper : public Soldier {
public:
	Sniper(int x): player(x), health(100), damage(50){}
	void abillity();
	void shoot();
};