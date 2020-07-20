#include "color.hpp"
#include <string>
#include <iostream>

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

	std::string name() const {
		return name_;
	}
	Color color() const {
		return color_;
	}
	virtual std::string type() const {
		return "Shape";
	}

	virtual float area() const = 0;
	virtual float volume() const = 0;
	virtual std::ostream& print(std::ostream& os)const {
		return os << "Name: " << name_ << " | Type: " << type()
			<< " | Color: " << color_.r << " " << color_.g << " " << color_.b
			<< " | Area: " << area() << " | Volume: " << volume() << "\n";
	}

};

std::ostream& operator<<(std::ostream& os, Shape const& s) {
	return s.print(os);
}

#endif