#pragma once

#include "Utilities.h"
#include "Creature.h"

class Character
{
public:
	Character() {}

	void AddPartyMember(Creature& added_creature);
	//void AddPartyMember(Creature& added_creature, int creature_position);
	void RemovePartyMember(Creature& removed_creature);
	//void RemovePartyMember(Creature& removed_creature, int creature_position);

	int GetPartySize();
	int GetPartySizeMaximum();

	std::vector<Creature> creatureVector;

private:
	static const int maximumPartySize = 3; // will make not const 
	
	coordinate2d position { 0, 0 };
	int layer{ 1 };



};

