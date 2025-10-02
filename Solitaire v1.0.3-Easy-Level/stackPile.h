#pragma once
#include "pileCard.h"
#include "pile.h"




class stackPile : virtual public pile
{
public:
	stackPile(sf::Vector2i = sf::Vector2i(0,0));
	bool canSplit(unsigned int);

	bool canAppend(const pile&) = 0;
};

