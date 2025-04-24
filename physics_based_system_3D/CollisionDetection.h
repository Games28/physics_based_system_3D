#ifndef COLLISIONDETECTION_H
#define COLLISIONDETECTION_H
#include "Object.h"
#include "Contact.h"

struct CollisionDetection
{
	static bool IsColliding(Object* a, Object* b, Contact_t& contact);
	static bool IsCollidingPolygonToPolygon(Object* a, Object* b, Contact_t& contact);
};

#endif // !COLLISIONDETECTION_H


