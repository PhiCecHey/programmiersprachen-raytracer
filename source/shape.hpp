#include "color.hpp"
#include <string>

#ifndef SHAPE
#define SHAPE

class Shape {

private:
	std::string name_;
	Color color_;

public:
	Shape() = default;
	Shape(std::string name, Color color) :
		name_{ name },
		color_{ color }
	{}

	virtual float area() const = 0;
	virtual float volume() const = 0;

};

#endif