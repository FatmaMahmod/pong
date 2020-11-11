#include "option.h"




option::option(float width, float hight)
{
	if (!fontoption.loadFromFile("kk.ttf")) {}
	menuoption[0].setFont(fontoption);
	menuoption[0].setFillColor(sf::Color::Red);
	menuoption[0].setString("esay");
	menuoption[0].setPosition(sf::Vector2f(width / 2, hight / (Max_Number_of_Itemsoption * 1) * 1));
	menuoption[0].Bold;
	menuoption[1].setFont(fontoption);
	menuoption[1].setFillColor(sf::Color::White);
	menuoption[1].setString("normal");
	menuoption[1].setPosition(sf::Vector2f(width / 2, hight / (Max_Number_of_Itemsoption * 1) * 4));

	menuoption[2].setFont(fontoption);
	menuoption[2].setFillColor(sf::Color::White);
	menuoption[2].setString("hard");
	menuoption[2].setPosition(sf::Vector2f(width / 2, hight / (Max_Number_of_Itemsoption * 1) * 7));
	selecteditemindexoption = 0;
}

option::~option()
{
}void option::draw(sf::RenderWindow& window1) {
	for (int i = 0; i < 3; i++) {
		window1.draw(menuoption[i]);
	}
}
void option::MoveUpoption() {
	if (selecteditemindexoption - 1 >= 0) {
		menuoption[selecteditemindexoption].setFillColor(sf::Color::White);
		selecteditemindexoption--;
		menuoption[selecteditemindexoption].setFillColor(sf::Color::Red);
	}
}
void option::MoveDownoption() {

	if (selecteditemindexoption + 1 <= 3) {
		menuoption[selecteditemindexoption].setFillColor(sf::Color::White);
		selecteditemindexoption++;
		menuoption[selecteditemindexoption].setFillColor(sf::Color::Red);
	}
}
