#pragma once
#include <string>
#include <iostream>
#include <vector>

class NPC
{
	private:
		std::string characterName;
		std::vector<std::string> backpack;
		int strength;
	public:
		NPC(std::string charName, int charStrength);
		~NPC();
		void ObtainItem(std::string, int amounts);

		std::string GetName();
		int GetStrength();
};