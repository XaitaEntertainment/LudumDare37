#include "sprite.h"

/*
Auteur: Alexandre Constant
Description: Classe repr�sentant une entit�e vivante (joueur, monstre, pnj, etc.)
Date: 2016-12-10
*/
class Entity
{
public:
	Entity();
	~Entity();
	void Move();
	void SimulateMove();

private:
	int m_xPos;
	int m_yPos;
	Sprite m_sprite;
};