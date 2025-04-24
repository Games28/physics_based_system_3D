#ifndef CONTACT_H
#define CONTACT_H
#include "Vector.h"
#include "Object.h"

struct Contact_t
{
	Object* objA;
	Object* ObjB;
	
	vec3_t ptOnA_WorldSpace;
	vec3_t ptOnB_WorldSpace;
	vec3_t ptOnA_LocalSpace;
	vec3_t ptOnB_LocalSpace;


	float separationDistance;
	float timeOfImpact;

	vec3_t normal; // in world space coords
	

	Contact_t() = default;
	~Contact_t() = default;

	void ResolveContact(Contact_t& contact);
};

#endif // !CONTACT_H


