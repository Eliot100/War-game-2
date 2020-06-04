
// #include "Paramedic.hpp"

class ParamedicCommander : public Paramedic {
public:
	ParamedicCommander(int x): Paramedic(x){
		this->health = 200;
		this->damage = 1;
	} 
	void abillity();
	
};