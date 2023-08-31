#include <SFML/Graphics.hpp>

#include "player.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(600, 400), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::CircleShape player = init_player_sprite();

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Q))
            {
                window.close();
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Up))
            {
                // Using method Transformable.move().
                player.move(0.f, -10.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
            {
                player.move(0.f, 10.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left))
            {
                player.move(-10.f, 0.f);
            }
            else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
            {
                player.move(10.f, 0.f);
            }
        }

        window.clear();
        window.draw(shape);
        window.draw(player);
        window.display();
    }

    return 0;
}
