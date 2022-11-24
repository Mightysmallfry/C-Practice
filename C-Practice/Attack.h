#pragma once

#include "Utilities.h"

namespace Jurassic
{
    class Attack
    {
    public:
        Attack() {}


        Attack(const std::string aName, AttackActions attack_name, DamageTypes damage_type, int damage_val, int target_num)
            : stringName(aName), attackName(attack_name), damageType(damage_type), damageValue(damage_val), targetNumber(target_num) {}

        Attack(const std::string aName, AttackActions attack_name, DamageTypes damage_type, bool applies_status, int damage_val, int target_num)
            : stringName(aName), attackName(attack_name), damageType(damage_type), appliesStatus(applies_status), damageValue(damage_val), targetNumber(target_num) {}


        // Most important things to know about an attack
        // String Name
        // Attack_name
        // Damage_Type
        // Applies_Status // does it even apply a status
        // Status_Type // what kind of status does it apply, burning etc.





        AttackActions GetAttackName();
        std::string GetAttackStrName();
        DamageTypes GetDamageType();
        int GetAttackDamageValue(); 
        int GetAttackTargetNumber();
        int GetAttackDuration();
        int GetAttackCooldown();

        bool GetAppliesStatus();



        void SetDamageValue(int new_damage_value);
        void SetDamageType(DamageTypes new_damage_type);
        void SetDuration(int new_duration);
        void SetTargetNumber(int new_target_number);

        void SetCooldown(int new_cooldown); // may have to make cooldowns a class



    private:
        std::string stringName{};
        AttackActions attackName{ AttackActions::None };
        DamageTypes damageType{ DamageTypes::None };
        int damageValue{ 1 };
        int targetNumber{ 1 };
        int duration{ 1 }; // in turns
        int cooldown{ 0 };

        bool appliesStatus{ false };

    };
}

