#include "PhysicsObject.h"

PhysicsObject::PhysicsObject()
{

}

float PhysicsObject::getMass()
{
	return mass;
}

void PhysicsObject::setMass(float m)
{
	mass = m;
}

glm::vec2 PhysicsObject::getVelocity()
{
	return velocity;
}

void PhysicsObject::setVelocity(glm::vec2 v)
{
	velocity = v;
}