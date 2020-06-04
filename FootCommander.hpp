//#includes "FootSoldier.hpp"

class FootCommander : public FootSoldier {
public:
	FootCommander(int x) : FootSoldier(x){
		this->health = 150;
		this->damage = 20;
	}
	void abillity();
};
