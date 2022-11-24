#include "Attack.h"


namespace Jurassic
{
    AttackActions Attack::GetAttackName()
    {
        return attackName;
    }

    std::string Attack::GetAttackStrName()
    {
        return stringName;
    }

    DamageTypes Attack::GetDamageType()
    {
        return damageType;
    }

    int Attack::GetAttackDamageValue()
    {
        return damageValue;
    }

    int Attack::GetAttackTargetNumber()
    {
        return targetNumber;
    }

    int Attack::GetAttackDuration()
    {
        return duration;
    }

    int Attack::GetAttackCooldown()
    {
        return cooldown;
    }

    bool Attack::GetAppliesStatus()
    {
        return appliesStatus;
    }

    void Attack::SetDamageValue(int new_damage_value)
    {
        damageValue = new_damage_value;
    }

    void Attack::SetDamageType(DamageTypes new_damage_type)
    {
        damageType = new_damage_type;
    }

    void Attack::SetDuration(int new_duration)
    {
        duration = new_duration;
    }

    void Attack::SetTargetNumber(int new_target_number)
    {
        targetNumber = new_target_number;
    }

    void Attack::SetCooldown(int new_cooldown)
    {
        cooldown = new_cooldown;
    }
    
}
