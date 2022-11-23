#pragma once

#include "Utilities.h"
#include "Resistances.h"

class ElementalAffinity
	: public Resistances
{
public:
	ElementalAffinity() {};


	ElementalAffinity(DamageTypes element, bool has_affinity)
		: EAelement(element), hasAffinity(has_affinity),
			Resistances(element, has_affinity) 
	{
		SetAffinityStrName(element);
	};

	ElementalAffinity(DamageTypes element, bool has_affinity, int elemental_affinity)
		: EAelement(element), hasAffinity(has_affinity), elementalAffinity(elemental_affinity),
			Resistances(element, has_affinity, elemental_affinity) 
	{
		SetAffinityStrName(element);
	};
	
	inline std::string GetAffinityStrName() { return affinityName; };
	inline int GetEAValue() { return elementalAffinity; };
	inline DamageTypes GetEAElement() { return EAelement; };
	inline bool GetHasAffinity() { return hasAffinity; };

	void SetAffinityStrName(DamageTypes element);
	void SetElementalAffinity(int new_value);
	void SetHasAffinity(bool has_affinity);
	


private:
	std::string affinityName{ "Fire" };
	const DamageTypes EAelement{ DamageTypes::Fire };
	bool hasAffinity{ false };
	int elementalAffinity{ 0 };
	

	
};

