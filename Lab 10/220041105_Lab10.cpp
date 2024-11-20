#include<iostream>
using namespace std;
class GameEngine;
class CharacterActions
{
public:
    virtual void attack()=0;
    virtual void defend()=0;
    virtual void useSpecialAbility()=0;
    virtual void displayStats()=0;
};
class BaseCharacter: public CharacterActions
{
protected:
    string name;
    int health;
    int mana;
    int attackpower;
    int specialpower;
    string specialability;


public:
    BaseCharacter(string a, int b, int c, string d, int e):name(a),health(b), mana(0), attackpower(c),specialability(d),specialpower(e) {}
    void displayStats()
    {
        cout<<"Name: "<<name<<" Health: "<<health<<" Mana: "<<mana<<endl;
    }
    int getattack()
    {
        if(mana<100)
            return attackpower;
        else
        {
            mana=0;
            return attackpower+specialpower;
        }
    }
    string getname()
    {
        return name;
    }
    void attack()
    {
        cout << name << " attacks with power " << attackpower << "!"<<endl;
        mana += 50;
        if(mana>=100)
            useSpecialAbility();
    }

    void useSpecialAbility()
    {
        cout << name << " uses "<<specialability << " with power " << specialpower << "!"<<endl;
    }

    void damaged(int a)
    {
        health -= a;
        cout << name << " takes " << a << " damage! "<<"Health Now: "<<health<<endl;
    }
    void defend()
    {
        cout << name << " has defended!"<<endl;
    }
    bool characterisAlive()
    {
        if(health<=0)
            return false;
        else
            return true;
    }

};
class Warrior:public BaseCharacter
{
public:
    Warrior():BaseCharacter("Warrior", 100,25,"Berserk Rage",35) {}

};
class Mage:public BaseCharacter
{
public:
    Mage():BaseCharacter("Mage", 120,20,"Arcane Blast", 30) {}
};
class Archer:public BaseCharacter
{
public:
    Archer():BaseCharacter("Archer",90,20,"Fire Arrow", 35) {}
};
class BossEnemy
{
private:
    int hp;
    int at;
public:
    BossEnemy():hp(150), at(30) {}
    void attack(BaseCharacter *a)
    {
        cout<<"Boss attacks "<<a->getname()<<" with power "<<at<<"!"<<endl;
    }
    int getattack()
    {
        return at;
    }
    bool alive()
    {
        return (hp>0);
    }
    void damaged(int a)
    {
        hp -= a;
        cout<< "Boss takes " << a << " damage! "<<"Health now: "<<hp<<endl;
    }
};

class GameEngine
{
protected:
    BaseCharacter* ch[3];
    BossEnemy* enemy;
public:
    GameEngine()
    {
        ch[0]=new Warrior();
        ch[1]=new Mage();
        ch[2]=new Archer();
        enemy=new BossEnemy();
    }
    void game()
    {
        while(enemy->alive())
        {
            for(int i=0; i<3; i++)
            {
                ch[i]->attack();
                enemy->damaged(ch[i]->getattack());
                if(enemy->alive()==false)
                {
                    cout<<"Boss defeated! Players win!"<<endl;
                    return;
                }
            }
            cout<<endl;
            for(int i=0; i<3; i++)
            {
                enemy->attack(ch[i]);
                ch[i]->damaged(enemy->getattack());
                if(!ch[i]->characterisAlive())
                {
                    cout<<"Player defeated! Boss win!"<<endl;
                    return;
                }
            }
            cout<<endl;
        }
    }
};
int main()
{
    cout<<"Game Begins! Players vs. Boss"<<endl;
    GameEngine play;
    play.game();
    return 0;
}
