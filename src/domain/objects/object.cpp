#include "object.hpp"

namespace genetic
{
    ObjectType Object::type() const
    {
        return mType;
    }

    Object::Object(ObjectType aType) : mType(aType) {}

}