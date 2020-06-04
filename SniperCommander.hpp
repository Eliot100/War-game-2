//#include "Sniper.hpp"
class SniperCommander : public Sniper {
public:
	SniperCommander(int x): Sniper(x){
		this->health = 120;
		this->damage = 100;
	}
	void abillity();
};

