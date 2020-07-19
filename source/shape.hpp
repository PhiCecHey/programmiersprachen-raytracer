
#ifndef SHAPE
#define SHAPE

class Shape {

private:

public:
	Shape() = default;

	virtual float area() const = 0;
	virtual float volume() const = 0;

};

#endif