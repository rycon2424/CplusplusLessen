#include "NPC.h"

NPC::NPC(std::string charName, int charStrength)
{
	NPC::characterName = charName;
	NPC::strength = charStrength;
}

std::string NPC::GetName()
{
	return NPC::characterName;
}

int NPC::GetStrength()
{
	return NPC::strength;
}

void NPC::ObtainItem(std::string itemName, int amount)
{
	std::cout << NPC::characterName << " has obtained the item: " << itemName << " " << amount << "x \n";
	for (int i = 0; i < amount; i++)
	{
		backpack.push_back(itemName);
	}
}

NPC::~NPC()
{
	std::cout << NPC::characterName << " has been Destroyed" << "\n";
}