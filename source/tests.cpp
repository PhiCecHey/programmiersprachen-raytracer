#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<glm/vec3.hpp >
#include "shape.hpp"
#include "sphere.hpp"
#include "box.hpp"

TEST_CASE("5.2") {

	Box a{ glm::vec3{ 1,2,3 }, glm::vec3{ 4,5,6 } };
	REQUIRE(a.area() == 54);
	REQUIRE(a.volume() == Approx(5.19615));

	Sphere b{ {0.0, 0.0, 0.0}, 7.0 };
	REQUIRE(b.area() == Approx(615.752));
	REQUIRE(b.volume() == Approx(1436.755));
}

int main(int argc, char* argv[])
{
	return Catch::Session().run(argc, argv);
}
