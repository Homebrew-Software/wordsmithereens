#include <SFML/Graphics.hpp>

sf::CircleShape init_player_sprite()
{
    sf::CircleShape player(50.f);
    player.setFillColor(sf::Color::White);
    return player;
}
