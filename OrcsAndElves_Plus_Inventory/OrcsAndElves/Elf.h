#pragma once
#include "NPC.h"
#include <string>
#include <iostream>

class Elf : public NPC
{
	private:
		int magicLevel;

	public:
		Elf(std::string charName, int charStrength):NPC(charName, charStrength) {};

		int GetMagicLevel();
		void SetMagicLevel(int level);
};