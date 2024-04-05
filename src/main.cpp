#include <SFML/Graphics.hpp>

#include "graphics/graphics.hpp"
#include "domain/map/map.hpp"

int main()
{
    genetic::Graphics graphics;
    genetic::Map map(100, 100);

    auto window = sf::RenderWindow{{1920u, 1080u}, "CMake SFML Project"};
    window.setFramerateLimit(144);

    while (window.isOpen())
    {
        for (auto event = sf::Event{}; window.pollEvent(event);)
        {
            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
        }
        window.clear();
        graphics.update(map.getMap(), window);
        window.display();
    }
}