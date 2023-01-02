#pragma once

#include "Attack.h"
#include "HitPoints.h"
#include "StatBlock.h"
#include "ElementalAffinity.h"
#include "Utilities.h"
#include "Inventory.h"

namespace Jurassic
{
    class Creature :
        public HitPoints, public StatBlock, public ElementalAffinity
    {

    public:

        Creature() {};
        //Creature(std::string Name, const StatBlock& statblock);

        Creature(std::string creature_name, int base_strength, int base_dexterity, int base_constitution, int base_charisma, int base_arcana)
            : StatBlock(base_strength, base_dexterity, base_constitution, base_charisma, base_arcana),
              name(creature_name) {}

        Creature(const Creature& other) = default;
        Creature& operator=(const Creature& other);

        ~Creature() = default;


        //Initializers
        virtual void InitAttacks();
        virtual void InitElementalAffinity();
        virtual void InitHitPoints();

        //Game Needs to Know
        virtual void Update();

        std::string GetName() const;

        inline bool GetIsSelected() { return isSelected; };
        inline void SetIsSelected(const bool is_selected) { isSelected = is_selected; };



        //Consts, not static for different creatures
        inline int GetHpConst() { return HP_CONST; };
        inline int GetArConst() { return AR_CONST; };
        inline int GetMfConst() { return MF_CONST; };


        
        //TODO: change the Calc Functions to return ints
        virtual void CalcHpMaximum(); // HPmax = Constitution * 10
        virtual void CalcArmorMaximum(bool is_strength); // ARmax = Strength * 2 || Dexterity * 2
        virtual void CalcMagicForceMaximum(); // new stat MFmax = magic * 2

        //Attack System Functions
        void TakeDamage(Attack& incoming_attack);
        Attack GetAttackAttributes(std::string attack_str_name);


        //Display Functions
        void ToString();

        //Inventory System Data
        void RemoveItem(Item& item);
        Inventory inventory;

        //Attack System Data
        std::vector<Attack> attackVector; // A vector that holds all attacks available
        std::vector<ElementalAffinity> elementalAffVector; // A Vector that holds all Elemental Affinities

    private:
        std::string name{ "Base Creature" };
        bool isSelected{ false };
        bool isStrengthBased_{ true };

        //TODO: refactor consts to be more safe and have easier implementation
        //may not want these to be type const in the future (thinking items)
        static const int HP_CONST = 10;
        static const int AR_CONST = 2;
        static const int MF_CONST = 2;
    };
    
}
