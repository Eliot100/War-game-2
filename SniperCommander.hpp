//#include "Sniper.hpp"
class SniperCommander : public Sniper {
public:
	SniperCommander(int x): Sniper(x){
		health = 120;
		damage = 100;
	}
	void abillity();
};

