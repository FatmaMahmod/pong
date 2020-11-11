



#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>
#include<cmath>
#include<iostream>
#include<string>
#include"Menuu.h"
#include"option.h"
#include<algorithm>
#include<cstring>
#include<sstream>

using namespace sf;
int page_number;
int page_numberofopyion;
int main()
{
   while (true) {
       float x=0;
                 float y=0 ;
                 String status;
        
        RenderWindow window(VideoMode(600, 600), "Hello ");
        
        Menu menu(window.getPosition().x, window.getPosition().y);
        //back ground
        Texture background;
        if (!background.loadFromFile("gg.jpg")) {
         std::   cout << "errot";
        }
        background.setRepeated(true);
        Sprite spr;
        spr.setTexture(background);
        spr.setTextureRect(sf::IntRect(90, 250, 600, 600));
        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event)) {

                switch (event.type) {
                case sf::Event::KeyReleased:
                    switch (event.key.code) {
                    case sf::Keyboard::Up:
                        menu.MoveUp();
                        break;
                    case sf::Keyboard::Down:
                        menu.MoveDown();
                        break;

                    case sf::Keyboard::Return:
                        int x = menu.mainmanupressed();
                        if (x == 0) {
                            window.close();
                            page_number = 0;
                        }
                        if (x == 1) {
                            window.close();
                            page_number = 1;
                        }
                        if (x == 2) {
                            window.close();
                            page_number = 2;
                        }

                        break;
                    }
                    break;
                case sf::Event::Closed:
                    window.close();
                    break;
                }
                window.clear();
                window.draw(spr);
                menu.draw(window);
               
                window.display();
            }
        }
          if (page_number == 1) {
                RenderWindow window1(VideoMode(600, 600), "option ");
                option menuoption(window1.getPosition().x, window1.getPosition().y);

                Texture background;
                if (!background.loadFromFile("gg.jpg")) {
                    std::cout << "errot";
                }
                background.setRepeated(true);
                Sprite spr;
                spr.setTexture(background);
                spr.setTextureRect(sf::IntRect(90, 250, 600, 600));
                while (window1.isOpen())

                {
                    sf::Event event;
                    while (window1.pollEvent(event)) {
                        switch (event.type) {
                        case sf::Event::KeyReleased:
                            switch (event.key.code) {
                            case sf::Keyboard::Up:
                                menuoption.MoveUpoption();
                                break;
                            case sf::Keyboard::Down:
                                menuoption.MoveDownoption();
                                break;
                            case sf::Keyboard::Return:
                                int t = menuoption.mainmanupressedoption();
                                if (t == 0) {
                                    window1.close();
                                    page_numberofopyion = 0;

                                }
                                if (t == 1) {
                                    window1.close();
                                    page_numberofopyion = 1;

                                }
                                if (t == 2) {
                                    window1.close();
                                    page_numberofopyion = 2;

                                }
                            }
                            break;

                        case sf::Event::Closed:
                            window1.close();
                            break;
                        }
                        window1.clear();
                        window1.draw(spr);
                        menuoption.draw(window1);
                       
                        window1.display();
                    }

                }
            }
          
                if (page_numberofopyion == 0) {
                        x = 0.15;
                        y = 0.15;
                   
                    }  if (page_numberofopyion == 1) {
                        x = 0.45;
                        y = 0.45;
                       
                    }  if (page_numberofopyion == 2) {
                        x = 0.65;
                        y = 0.65;
                      
                    }
               
            
         
                    if (page_number == 0) {
                        RenderWindow window1(VideoMode(600, 600), "Hello sfml");
                        //back ground
                        Texture backgroundofplay;
                        if (!backgroundofplay.loadFromFile("6.png")) {
                            std::cout << "errot";
                        }
                        backgroundofplay.setRepeated(true);
                        Sprite sprofplay;
                        sprofplay.setTexture(backgroundofplay);
                        sprofplay.setTextureRect(sf::IntRect(90, 250, 600, 600));
//sound of game
                        SoundBuffer buffer;
                        if (!buffer.loadFromFile("vv.wav")) {
                            std::cout << "ll";
                        }
                        sf::Sound sound;
                        sound.setBuffer(buffer);
                        sound.play();
                        //sound of ball
                        sf::Sound soundofball;
                        SoundBuffer bufferofball;
                        if (!bufferofball.loadFromFile("xxx.wav")) {
                            std::cout << "ll";
                        }
                        
                        soundofball.setBuffer(bufferofball);
                       
                        Menu menu(window1.getPosition().x, window1.getPosition().y);
   //rectangle1
                        sf::RectangleShape rec1(sf::Vector2f(9, 100));
                      //  rec1.setSize(sf::Vector2f(10, 100));
                        rec1.setPosition(sf::Vector2f(0, 300));
                        rec1.setFillColor(sf::Color::Green);
                        //rectangle2
                        sf::RectangleShape rec2(sf::Vector2f(9, 100));
                      rec2.setPosition(sf::Vector2f(590, 300));
                      rec2.setFillColor(sf::Color::Green);
                      //circle
                      sf::CircleShape cir(7);
                        cir.setPosition(sf::Vector2f(345, 230)); 
                        cir.setFillColor(sf::Color::Cyan);
                     //   sf::Text text;
                       // sf::Text text1;
                        sf::Font font;
                        if (!font.loadFromFile("kk.ttf")) {
                            throw("COULD NOT LOAD FONT!");
                        }     //score
                            sf::Text score;
                            score.setCharacterSize(30);
                            score.setFont(font);
                            score.setFillColor(sf::Color::Red);
                            score.setPosition(sf::Vector2f(220, 10));
                            score.setString("0    score    0");
                            int rec1score = 0;
                            int rec2score=0;

                      
                        while (window1.isOpen())

                        {
                            sf::Event event;
                            while (window1.pollEvent(event)) {
                                switch (event.type) {
                                case sf::Event::Closed:
                                    window1.close();
                                    break;
                                }
                            }
                         //   text.move(sf::Vector2f(0.2, 0));

                           // text1.move(sf::Vector2f(0.2, 0));
                            cir.move(x, y);

                            if (Keyboard::isKeyPressed(sf::Keyboard::Down)) {
                                rec1.move(sf::Vector2f(0, 1));
                            }
                            if (Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                                rec1.move(sf::Vector2f(0, -1));
                            }
                            if (Keyboard::isKeyPressed(sf::Keyboard::Right)) {
                                rec2.move(sf::Vector2f(0, 1));
                            }
                            if (Keyboard::isKeyPressed(sf::Keyboard::Left)) {
                                rec2.move(sf::Vector2f(0, -1));
                            }
                            if (cir.getGlobalBounds().intersects(rec1.getGlobalBounds()) == true) {
                                x = -x;
                                soundofball.play();
                            }
                            if (cir.getGlobalBounds().intersects(rec2.getGlobalBounds()) == true) {
                                x = -x;
                                soundofball.play();
                            }
                            if (cir.getPosition().y < 0)
                                y = -y;
                            if (cir.getPosition().y > 600)
                                y = -y;
                            if (cir.getPosition().x > 600) {
                              rec1score++;
                                cir.setPosition(sf::Vector2f(300, 300));
                            }
                            if (cir.getPosition().x < 0) {
                                rec2score++;
                                cir.setPosition(sf::Vector2f(300, 300));
                                //std::cout << rec2score << std::endl << rec1score;
                            }

                            /*if (cir.getPosition().x > 600) {
                                cir.setPosition(sf::Vector2f(345, 230));

                                text.setFont(font);
                                text.setCharacterSize(50);
                                text.setStyle(Text::Bold);
                                text.setString("rec1win");
                                text.setPosition(sf::Vector2f(100, 70));
                            }
                            if (cir.getPosition().x < 0) {
                                cir.setPosition(sf::Vector2f(345, 230));

                                text1.setFont(font);
                                text1.setCharacterSize(50);

                                text1.setStyle(Text::Bold);

                                text1.setString("rec2 win");
                                text1.setPosition(sf::Vector2f(200, 50));
                                cir.setPosition(sf::Vector2f(345, 230));

                            }*/
                         
                            
                               

                                window1.clear();
                                window1.draw(sprofplay);
                                window1.draw(rec1);
                               // window1.draw(text);
                                //window1.draw(tex
                                window1.draw(cir);
                                window1.draw(rec2);
                                //   menu.draw(window1);
                               //score
                                std::stringstream textscore;
                                textscore << rec1score << "     score   " << rec2score;
                                score.setString(textscore.str());
                                window1.draw(score);
                                window1.display();

                            }
                        }
                    
            if (page_number == 2) {
                break;
            }
          
        
    
}
        return 0;
    
}
    