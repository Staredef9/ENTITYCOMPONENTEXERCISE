#include "Vec2f.hpp"
#include "Vec2f.h"

float& Vec2f::operator[](int i)
{
    // TODO: insert return statement here
    return(&x)[i];
}

const float& Vec2f::operator[](int i) const
{
    // TODO: insert return statement here
    return (&x)[i];

}
