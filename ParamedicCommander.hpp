//#include "Paramedic.hpp"

class ParamedicCommander : public Paramedic {
public:
	//int player;
	//int health;
	//pair<int, int> location;
	ParamedicCommander(int x): Paramedic(x){
		this.health = 200;
		this.damage = 1;
	} //player(x),health(200),damage(1){}
	void abillity();
	
};