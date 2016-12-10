#include "entity.h"
#include "markovchain.h"

/*
Auteur: Alexandre Constant
Description: Classe repr�sentant un monstre (zombie, etc.)
Date: 2016-12-10
*/
class Monster : Entity
{
public:
	Monster();
	~Monster();

private:
	MarkovChain m_markovChain;
};
