//#includes "Soldier.hpp"

class FootSoldier : public Soldier {
public:
	FootSoldier(int x): player(x), health(100), damage(10){}
	void abillity();
	void shoot();
};
