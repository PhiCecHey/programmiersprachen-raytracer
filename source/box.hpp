#include<glm/vec3.hpp >
#include "shape.hpp"
#include <cmath>

#ifndef BOX
#define BOX

class Box : Shape {
private:
	glm::vec3 max_;
	glm::vec3 min_;

public:

	Box(glm::vec3 max, glm::vec3 min) :
		max_{ max },
		min_{ min }
	{}

	float volume() const
	{
		float x, y, z;
		//x
		if (max_.x > min_.x) {
			x = max_.x - min_.x;
		}
		else {
			x = min_.x - max_.x;
		}
		//y
		if (max_.y > min_.y) {
			y = max_.y - min_.y;
		}
		else {
			y = min_.y - max_.y;
		}
		//z
		if (max_.z > min_.z) {
			z = max_.z - min_.z;
		}
		else {
			z = min_.z - max_.z;
		}

		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}

	float area() const
	{
		float x, y, z;
		//x
		if (max_.x > min_.x) {
			x = max_.x - min_.x;
		}
		else {
			x = min_.x - max_.x;
		}
		//y
		if (max_.y > min_.y) {
			y = max_.y - min_.y;
		}
		else {
			y = min_.y - max_.y;
		}
		//z
		if (max_.z > min_.z) {
			z = max_.z - min_.z;
		}
		else {
			z = min_.z - max_.z;
		}

		//Fläche a
		float a = x * y;
		//Fläche b
		float b = x * z;
		//Fläche c
		float c = y * z;

		return a + b + c;
	}

};
#endif