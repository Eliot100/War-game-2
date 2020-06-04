//#includes "FootSoldier.hpp"

class FootCommander : public FootSoldier {
public:
	//int player;
	//int health;
    //int damage;
	//pair<int, int> location;
	FootCommander(int x) : FootSoldier(x){
		this.health = 150;
		this.damage = 20;
	}
	void abillity();
};
