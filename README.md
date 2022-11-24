# C-Practice

### Doom of the Dinosaurs :: End Vision
A fun game where the player can have up to 3 dinosaurs on their team. The player can then move about and go fight other characters to level up their dinosaurs.
Players may give their dinosaurs specials abilities through the use of items, adding elemental resistances, attacks and possbily more.

### Current Status : < Incomplete >

### Built Using Fossil Fuel
My first version of a 2d console game engine. Very bare bones and will mostly be handling sprites, display settings and player to game interactions

## Utilities:
- Setting Cursor Position
- Get Console Dimensions
- Get Screen Dimensions
- Attack Actions - All available attacks
- Damage types - All available damage types

## inCombat (Part of Game):
- Turns
- 2 Parties
- ////////// combat loop ///////////
- Checks if either party is defeated, give out rewards if done
- Combat does 1 dinosaur at a time, alternating teams
- Choose action (attacks, items, run/forfeit, change combat order)


## Creature:
The base class for all creatures, ally or enemy
- Physical Damage - which damage types count as physical
- Magical Damage - which damage types count as magic or elemental
- Hit Points
- Stats
- Attack Framework
- Inventory

## Attack:
- Attack Name
- Attack Type
- Damage Type
- Damage Value
- Number of Targets
- Apply Status Effect

## HitPoints:
- Hitpoints
- Armor
- Magic Force

## Stats:
Basic Stats
- Strength - For physical attacks
- Dexterity - For Defense, who moves first, special attacks
- Constitution - For Hit points and blocking
- Charisma - For Fear, debuffs, persuassion

Advanced Stats
- Arcana - For magic and elemental attacks, base damage, can be increased like strength etc.

- Elemental Affinity - point buy system - repeated use level ups - Specific value for each element
  - Resistances - reward for certain level of affinity (10) - halves the damage of matching attacks
  
- Elemental attacks that are obtained after evolving dinosaur - have a cooldown
- Support actions - Add armor or magic force to allies.
- Elemental Resistances

## Elements and Focus
- Cold - Crowd Control and Debuffs
- Fire - Damage and Buffs
- Lightning - Damage and Power


## items:
- Active, Passive, Consumable items
  - Active can use them multiple times in combat with cooldowns
  - Passives are always active
  - Consumables vanish after usage

## Dinosaurs and Focus
- Triceratops   - Ice, Piercing and Defense/debuffs
- T-rex         - Lightning, Piercing and Offense 
- Steggosaurus  - Slashing and Support/Buffs
- Anklysaurus   - Fire, Bludgeoning and Offense/Defense
- Velociraptor  - Lightning and Mobility

## Buffs/Debuffs
- Armored Offense - Add Constitution to Attack Damage while active
- Cure - Removes poisoned status and grants small amount of healing

## Current Item Ideas:
- Gem of Torvorex - Increases affinity for all elements by Arcane.
- Stone of Eons - Increases constitution by 2
