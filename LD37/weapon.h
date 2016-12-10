#include "object.h"

/*
Auteur: Alexandre Constant
Description: Classe représentant une arme
Date: 2016-12-10
*/
class Weapon : Object
{
public:
	Weapon();
	~Weapon();
	void Shoot();
	void Recharge();

private:
	int m_munitions;
	int m_capacity;
	int m_firerate;

};
