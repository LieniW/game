#include <iostream>

using namespace std;

enum class hero {
	Warrior = 1,
	Mage,
	Archer,
	Rogue
};

enum class weapon {
	Common = 1,
	Uncommon,
	Rare,
	Epic,
	Legendary
};

int main() {
	setlocale(LC_ALL, "RUS");
	int heroInput, weaponInput;

	cout << "1. Воин\n2. Маг\n3. Лучник\n4. Разбойник\nВыберите персонажа, нажав цифру: ";
	cin >> heroInput;

	hero character = static_cast<hero>(heroInput);

	switch (character) {
	case hero::Warrior:
		cout << "\nВоин: дерется в ближнем бою при помощи клинков" << endl;
		break;
	case hero::Mage:
		cout << "\nМаг: пуляется заклинаниями при помощи магического жезла" << endl;
		break;
	case hero::Archer:
		cout << "\nЛучник: хорош в дальнем бою. Стреляет из лука в противника, попадая точно в цель" << endl;
		break;
	case hero::Rogue:
		cout << "\nРазбойник: использет катану, побеждая противников в ближнем бою. При помощи своего навыка может скрыть себя на несколько секунд от глаз противника" << endl;
		break;
	default:
		cout << "\nОШИБКА" << endl;
		return 1;
	}

	cout << "\n1. Обычное\n2. Необычное\n3. Редкое\n4. Эпическое\n5. Легендарное\nВыберите редкость оружия, нажав цифру: ";
	cin >> weaponInput;

	weapon rareWeapon = static_cast<weapon>(weaponInput);

	switch (rareWeapon) {
	case weapon::Common:
		cout << "\nОбычное" << endl;
		break;
	case weapon::Uncommon:
		cout << "\nНеобычное: +10% силы атаки, +10% крит. урона" << endl;
		break;
	case weapon::Rare:
		cout << "\nРедкое: +15% силы атаки, +15% крит. урона" << endl;
		break;
	case weapon::Epic:
		cout << "\nЭпическое: +20% силы атаки, +20% крит. урона, +10% крит. шанса" << endl;
		break;
	case weapon::Legendary:
		cout << "\nЛегендарное: +25% силы атаки, +25 крит.урона, +15% крит. шанса" << endl;
		break;
	default:
		cout << "\nОШИБКА" << endl;
		return 1;
	}

	cout << "\nИндекс персонажа: " << static_cast<int>(character) << endl;
	cout << "Индекс оружия: " << static_cast<int>(rareWeapon) << endl;

	return 0;
}