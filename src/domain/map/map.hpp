#ifndef MAP_HPP
#define MAP_HPP

#include <vector>

#include "../objects/object.hpp"

namespace genetic
{
    class Map
    {
    private:
        std::vector<std::vector<std::shared_ptr<Object>>> mMap;

    public:
        Map(int height, int width);
        ~Map();
        std::vector<std::vector<int>> getMap();
    };
}

#endif
