
#include "Soldier.hpp"

class Paramedic : public Soldier {
public:

	Paramedic(int x): player(x), health(100), damage(0){}
	void heal();
	void abillity();
};