#include "CollisionDetection.h"

bool CollisionDetection::IsColliding(Object* a, Object* b, Contact_t& contact)
{
    return IsCollidingPolygonToPolygon(a,b,contact);
}

bool CollisionDetection::IsCollidingPolygonToPolygon(Object* a, Object* b, Contact_t& contact)
{
    return false;
}
