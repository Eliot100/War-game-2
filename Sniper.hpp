//#include "Soldier.hpp"
class Sniper : public Soldier {
public:
	Sniper(int x): Soldier(x, 100, 50){} // player(x), health(100), damage(50){}
	void abillity();
	void shoot();
};