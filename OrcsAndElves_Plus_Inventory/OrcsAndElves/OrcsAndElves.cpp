#include <iostream>
#include "Elf.h"
#include "Orc.h"
#include <string>
using namespace std;

int main()
{
	Elf* e = new Elf("Adamar", 5);
	e->SetMagicLevel(18);

	Orc* o = new Orc("Vulug", 7);
	o->SetIntelligenceLevel(10);

    cout << "Created Elf named " << e->GetName() << ", Strength is: " << e->GetStrength() << ", Magic level is: " << e->GetMagicLevel() << endl;
	cout << "Created Orc named " << o->GetName() << ", Strength is: " << o->GetStrength() << ", intelligence level is: " << o->GetIntelligenceLevel() << endl;

	e->ObtainItem("Hunters bow", 1);
	e->ObtainItem("Steel Arrow", 15);

	o->ObtainItem("One-handed Battle axe", 2);
	o->ObtainItem("Physical Damage Grenade", 3);

	delete e;
	delete o;

	char playerInput[256];
	cin >> playerInput;
}