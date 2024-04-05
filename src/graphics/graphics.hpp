#ifndef GRAPHICS_HPP
#define GRAPHICS_HPP

#include <vector>

namespace genetic
{
    class Graphics
    {
    public:
        Graphics();
        void update(std::vector<std::vector<int>> map, const sf::RenderWindow &window);
        ~Graphics();
    };
}

#endif