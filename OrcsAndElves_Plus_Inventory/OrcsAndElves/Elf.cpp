#include "Elf.h"

int Elf::GetMagicLevel()
{
	return Elf::magicLevel;
}

void Elf::SetMagicLevel(int level)
{
	Elf::magicLevel = level;
}