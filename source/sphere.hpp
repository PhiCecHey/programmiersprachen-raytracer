#include <cmath>
#include<glm/vec3.hpp>
#include<corecrt_math_defines.h>
#include "shape.hpp"
#include <string>

#ifndef SPHERE
#define SPHERE

class Sphere : Shape {

private:
	glm::vec3 center_;
	float radius_;

public:
	Sphere(glm::vec3 center, float radius) :
		center_{ center },
		radius_{ radius }
	{}
	Sphere(glm::vec3 center, float radius, std::string name, Color color) :
		center_{ center },
		radius_{ radius },
		Shape(name, color)
	{}

	float area() const
	{
		return 4 * M_PI * pow(radius_, 2);
	}

	float volume() const
	{
		return 4.0 / 3.0 * M_PI * pow(radius_, 3.0);
	}
};

#endif