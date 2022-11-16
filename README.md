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
- Physical Damage - which damage types count as physical
- Magical Damage - which damage types count as magic or elemental

## Creature:
The base class for all creatures, ally or enemy
- Hit Points
- Stats
- Attack Framework
- Inventory

## Attack:
- Attack Name
- Damage Type
- Damage Value
- Number of Targets

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
- Arcane - For magic and elemental attacks
- Elemental Affinity - per each element the creature could have better affinity. (opens opportunity to an item evening out the affinity then)
- Resistances - halves the damage of matching attacks
- Immunities - sets the damage taken from matching attacks to 0
