#pragma once
#include <string>

class NPC {
protected:
    string name{ "npc" };
    unsigned int damage{ 2 };
    unsigned int health{ 10 };
    short lvl = 1;
    unsigned int armor = 5;

private:
    bool isEnemy = true;

public:
    unsigned int GetDamage();

    unsigned int GetHealth() { return health; };
    void SetHealth(unsigned int health);

    virtual void GetInfo();

    virtual void Create();

    void LvlUp();

    void Recalculate();

    friend void takeDamage(unique_ptr<NPC> npc, unsigned int damage);

    virtual ~NPC() = default;
};