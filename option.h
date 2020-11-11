#pragma once
#include<SFML/Graphics.hpp>
#define Max_Number_of_Itemsoption 3
class option
{

	
	public:
	
		option(float width, float hight);
		~option();
		void draw(sf::RenderWindow& window1);
		void MoveUpoption();
		void MoveDownoption();
		int mainmanupressedoption()
		{
			return selecteditemindexoption;
		}
	private:
		int selecteditemindexoption;
		sf::Font fontoption;
		sf::Text menuoption[Max_Number_of_Itemsoption];
	
		

};

