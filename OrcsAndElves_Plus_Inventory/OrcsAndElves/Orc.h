#pragma once
#include "NPC.h"

class Orc : public NPC
{
	private:
		int intelligenceLevel;

	public:
		Orc(std::string charName, int charStrength):NPC(charName, charStrength) {};
		int GetIntelligenceLevel();
		void SetIntelligenceLevel(int level);
};