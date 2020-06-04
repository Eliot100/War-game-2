class Paramedic : public Soldier {
public:

	Paramedic(int x): Soldier(x, 100, 0){} // player(x),health(100),damage(0){}
	void heal();
	void abillity();
};