#include "Menuu.h"


Menu:: Menu(float width,float hight)
{
	if(!font.loadFromFile("kk.ttf")){}
	menu[0].setFont(font);
	menu[0].setFillColor(sf::Color::Red);
	menu[0].setString("play");
	menu[0].setPosition(sf::Vector2f(width / 2, hight / (Max_Number_of_Items * 1) * 1));

	menu[1].setFont(font);
	menu[1].setFillColor(sf::Color::White);
	menu[1].setString("option");
	menu[1].setPosition(sf::Vector2f(width / 2, hight / (Max_Number_of_Items * 1) * 4));

	menu[2].setFont(font);
	menu[2].setFillColor(sf::Color::White);
	menu[2].setString("exit");
	menu[2].setPosition(sf::Vector2f(width / 2, hight / (Max_Number_of_Items * 1) * 7));
	selecteditemindex = 0;
}
Menu ::~Menu() {

}
void Menu::draw(sf::RenderWindow &window) {
	for (int i = 0; i < 3; i++) {
		window.draw(menu[i]);
	}
}
void Menu::MoveUp() {
	if (selecteditemindex - 1 >= 0) {
		menu[selecteditemindex].setFillColor(sf::Color::White);
		selecteditemindex--;
		menu[selecteditemindex].setFillColor(sf::Color::Red);
	}
}
void Menu::MoveDown() {

	if (selecteditemindex + 1 <= 3) {
		menu[selecteditemindex].setFillColor(sf::Color::White);
		selecteditemindex++;
		menu[selecteditemindex].setFillColor(sf::Color::Red);
	}
}




