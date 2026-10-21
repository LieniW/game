#include "NPS.h"
#include <iostream>

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
    unsigned int GetDamage()   // геттер
    {
        return damage;
    };

    unsigned int GetHealth() { return health; };
    void SetHealth(unsigned int health)   // сеттер
    {
        this->health = health;
    };

    virtual void GetInfo() {
        cout << "Имя: " << name << endl;
        cout << "Здоровье: " << health << endl;
        cout << "Урон: " << damage << endl;
        cout << "Уровень: " << lvl << endl;
        cout << "Броня: " << armor << endl;
    };

    virtual void Create()   // создать нпс нельзя поэтому он виртуальный и весь класс тоже
    {

    };

    void LvlUp() {
        lvl += 1;
        cout << name << " повысил уровень персонажа\n";
        Recalculate();
    };

    void Recalculate()   // кастомизировать для война и волшебника зависимости от интеллекта/силы
    {
        damage += (1 + lvl * 0.1);
        health += (1 + lvl * 0.1);
        armor += (1 + lvl * 0.1);
    };

    friend void takeDamage(unique_ptr<NPC> npc, unsigned int damage);

    virtual ~NPC() = default;
};