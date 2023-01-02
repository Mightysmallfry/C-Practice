#include "Creature.h"

namespace Jurassic
{
    std::vector<DamageTypes> PhysicalDamage = {
        DamageTypes::Slashing,
        DamageTypes::Piercing,
        DamageTypes::Bludgeoning
    };

    std::vector<DamageTypes> MagicalDamage = {
        DamageTypes::Fire,
        DamageTypes::Cold,
        DamageTypes::Lightning
    };

    Creature& Creature::operator=(const Creature& other)
    {
        if (this != &other)
        {
            name = other.name;
            isSelected = other.isSelected;
        }
        return *this;
    }

    void Creature::InitAttacks()
    {
        Attack BaseAttack("Base Attack", AttackActions::None, DamageTypes::None, false, 0, 0);

        attackVector.push_back(BaseAttack);
    }

    void Creature::InitElementalAffinity()
    {
        ElementalAffinity None(DamageTypes::None, false);

        elementalAffVector.push_back(None);
    }

    void Creature::InitHitPoints()
    {
        CalcHpMaximum();
        CalcArmorMaximum(isStrengthBased_);
        CalcMagicForceMaximum();
    }

    void Creature::Update()
    {
	    if (!inventory.GetIsValid())
	    {
            inventory.IsValid(); //Adds to updateSlots
            

            if (!inventory.updateSlots.empty())
            {
                for (auto& [key, item] : inventory.updateSlots)
                {
                    //TODO: Apply missing item Modifiers then remove from update slots and set is applied to true

                    int itemStrength = item.StrengthMod();

                    SetStrength(GetStrength() + itemStrength);
                    SetDexterity(GetDexterity() + item.DexterityMod());
                    SetConstitution(GetConstitution() + item.ConstitutionMod());
                    SetCharisma(GetCharisma() + item.CharismaMod());
                    SetArcana(GetArcana() + item.ArcanaMod());

                    //item.IsApplied(true); //TODO: Move is applied to inventory map not update map
                    //inventory.updateSlots.erase(key); // causes error
                }
                inventory.updateSlots.clear();

                for (auto& [key, item] : inventory.inventorySlots)
                {
                    item.IsApplied(true);
                }
            }

	        CalcHpMaximum();
            CalcArmorMaximum(isStrengthBased_);
            CalcMagicForceMaximum();
            inventory.IsValid(true);
	    }


    }

    std::string Creature::GetName() const
    {
        return name;
    }

    void Creature::CalcHpMaximum()
    {
        int newHpMax = GetConstitution() * GetHpConst();
        SetHpMaximum(newHpMax);
    }

    void Creature::CalcArmorMaximum(bool is_strength)
    {
        int newArMax = GetStrength() * GetArConst();

        if (!is_strength)
        {
            int newArMax = GetDexterity() * GetArConst();
        }

        SetArmorMaximum(newArMax);
    }

    void Creature::CalcMagicForceMaximum()
    {
        int newMfMax = GetArcana() * GetMfConst();
        SetMagicForceMaximum(newMfMax);
    }

    void Creature::TakeDamage(Attack& incoming_attack) //Possible future bug with negative damage.
    {
    
        bool validAttack = true;
        for (int i = 0; i < size(attackVector); i++)
        {
            if (incoming_attack.GetAttackStrName() != attackVector[i].GetAttackStrName())
            {
                validAttack = false;
            }
        }

        if (!validAttack)
        {
            std::cout << "Not a valid Attack, No damage taken, Location: Creatre::TakeDamage" << std::endl;
            return;
        }


        int newHitPoints = GetHpCurrent() - incoming_attack.GetAttackDamageValue();
        int HpDamage = 0;
        int newArmor = 0;
        int newMagicForce = 0;


        if (GetArmorCurrent() != 0)
        {
            for (int i = 0; i < size(PhysicalDamage); i++)
            {
                if (incoming_attack.GetDamageType() == PhysicalDamage[i])
                {
                    if (GetArmorCurrent() < incoming_attack.GetAttackDamageValue())
                    {
                        HpDamage = incoming_attack.GetAttackDamageValue() - GetArmorCurrent();
                    }
                    else {
                        HpDamage = 0;
                        newArmor = GetArmorCurrent() - incoming_attack.GetAttackDamageValue();
                        SetArmorCurrent(newArmor);
                    }
                }
            }
        }

        if (GetMagicForceCurrent() != 0)
        {

            for (int i = 0; i < size(MagicalDamage); i++)
            {
                if (incoming_attack.GetDamageType() == MagicalDamage[i])
                {
                    if (GetMagicForceCurrent() < incoming_attack.GetAttackDamageValue())
                    {
                        HpDamage = incoming_attack.GetAttackDamageValue() - GetMagicForceCurrent();

                    }
                    else {
                        HpDamage = 0;
                        newMagicForce = GetMagicForceCurrent() - incoming_attack.GetAttackDamageValue();
                        SetMagicForceCurrent(newMagicForce);
                    }
                }
            }
        }

        SetHpCurrent(newHitPoints);
    }

    Attack Creature::GetAttackAttributes(std::string attack_str_name)
    {
        Attack retAttack;
        bool validAttack = false;
        for (int i = 0; i < size(attackVector); i++)
        {
            validAttack = false;
            if (attack_str_name == attackVector[i].GetAttackStrName())
            {
                validAttack = true;
                retAttack = attackVector[i];
            }

            if (i == size(attackVector) && validAttack == false)
            {
                std::cout << "No attack found, location: Creature, GetAttackAttributes" << std::endl;
            }
        }
        return retAttack;
    }

    void Creature::ToString()
    {
        std::cout << "Creature Name: " << GetName() << std::endl;
        
        std::cout << "Base Strength: " << GetBaseStrength() << std::endl;
        std::cout << "Strength: " << GetStrength() << std::endl;

        std::cout << "Base Dexterity: " << GetBaseDexterity() << std::endl;
        std::cout << "Dexterity: " << GetDexterity() << std::endl;

        std::cout << "Base Constitution: " << GetBaseConstitution() << std::endl;
        std::cout << "Constitution: " << GetConstitution() << std::endl;

        std::cout << "Base Charisma: " << GetBaseCharisma() << std::endl;
        std::cout << "Charisma: " << GetCharisma() << std::endl;

        std::cout << "Base Arcana: " << GetBaseArcana() << std::endl;
        std::cout << "Arcana: " << GetArcana() << std::endl;
                     
    }


    void Creature::RemoveItem(Item& item)
    {
        if (item.IsApplied())
        {
            SetStrength(GetStrength() - item.StrengthMod());
            SetDexterity(GetDexterity() - item.DexterityMod());
            SetConstitution(GetConstitution() - item.ConstitutionMod());
            SetCharisma(GetCharisma() - item.CharismaMod());
            SetArcana(GetArcana() - item.ArcanaMod());

            item.IsApplied(false);
            inventory.RemoveItem(item);
        }
    }
}
