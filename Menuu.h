#pragma once
#include<SFML/Graphics.hpp>
#define Max_Number_of_Items 3
class Menu
{public:
	Menu(float width, float hight);
	~Menu();
	void draw(sf::RenderWindow& window);
	void MoveUp();
	void MoveDown();
	int mainmanupressed() 
	{
		return selecteditemindex;
	}
private:
	int selecteditemindex;
	sf::Font font;
	sf::Text menu[Max_Number_of_Items];
};

