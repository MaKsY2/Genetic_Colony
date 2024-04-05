#ifndef OBJECT_HPP
#define OBJECT_HPP

namespace genetic
{

    enum ObjectType
    {
        EMPTY,
        WALL,
        FOOD,
        AGENT,
        POISON
    };

    class Object
    {
    public:
        virtual ~Object() = default;
        Object() = default;
        Object(const Object &) = default;
        Object(ObjectType aType);
        Object &operator=(const Object &) = default;
        ObjectType type() const;

    private:
        ObjectType mType;
    };
}

#endif