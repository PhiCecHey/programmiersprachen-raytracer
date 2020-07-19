#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include<glm/vec3.hpp >
#include "shape.hpp"
#include "sphere.hpp"
#include "box.hpp"

TEST_CASE("5.2") {

	Box a{ glm::vec3{ 1,2,3 }, glm::vec3{ 4,5,6 } };
	
	REQUIRE(a.area() == 1);

}

int main(int argc, char* argv[])
{
	Box a{ glm::vec3{ 1,2,3 }, glm::vec3{ 4,5,6 } };
	return Catch::Session().run(argc, argv);
}
