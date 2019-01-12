//a small text based game to test classes in c++

#include <iostream>
using namespace std;

class creature
{
public:
	creature(int hpValue, int hungerValue);
	creature(int hpValue, int hungerValue, bool unkillable);
	
	bool dead;
	void status();
	void takeDamage(int damage);
private:
	int hp;
	int hunger;
	int attackPower;
	bool necromanced;
	void StartStatus();
};

void Part1();

int main ()
{
	Part1();
	return 0;
}

creature::creature(int hpValue, int hungerValue) 
	: hp(hpValue), hunger(hungerValue), necromanced(0)
{
	StartStatus();
}
creature::creature(int hpValue, int hungerValue, bool unkillable)
	: hp(hpValue), hunger(hungerValue), necromanced(unkillable)
{
	StartStatus();
}

void creature::StartStatus()
{
	if (hp < 0 && !necromanced)
	{
		cout << "stillborn error\n";
		dead = 1;
	}
	if (hunger < 0)
	{
		cout << "negative food error\n"; 
		hunger = 0;
	}
}
void creature::status()
{
	if (hp < 0 && !necromanced)
	{
		cout << "creature is dead\n";
		dead = 1;
	}
	if (hunger < 0)
	{
		cout << "creature needs food\n";
		hp -= 5;
	}
}

void creature::takeDamage(int damage)
{
	hp -= damage;
}

void Part1()
{
	creature Hero(100, 30), AngryCat(10, 30);
	cout << "Welcome hero! \nYou appear in a forest. There is a monster.\n";
	while (!AngryCat.dead) //computer doesn't know of angry cat?
	{
		cout << "Attack? y/n\n";
		char Attack = cin.get();
		if (Attack == 'y')
			AngryCat.takeDamage(5);
		else 
		{
			cout << "Monster takes advantage\n";
			Hero.takeDamage(5);
		}
		Hero.takeDamage(1);
		AngryCat.status();
		Hero.status();
		cin.ignore();
	}
}
