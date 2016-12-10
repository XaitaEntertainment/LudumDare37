#include "entity.h"
#include "markovchain.h"

class Monster : Entity
{
private:
	MarkovChain m_markovChain;
};
