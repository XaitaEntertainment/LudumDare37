#include "entity.h"
#include "object.h"

/*
Auteur: Alexandre Constant
Description: Classe représentant le joueur
Date: 2016-12-10
*/
class Player : Entity
{
public:
	Player();
	~Player();
	void PickupObject();

private:
	Object m_currentObject;
	Object* m_inventory;
	int m_capacityInventory;
};
