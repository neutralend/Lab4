#include <iostream>

const float GRAV = -9.8066f;

int main() {
	int thisThing = 2;

	float initY = 0.0f, finalY = 0.0f;
	float initVel = 0.0f, finalVel = 0.0f;
	float time = 0.0f;

	std::cout << "This is a test" << std::endl;

	std::cout << "What is your starting height (m): ";
	std::cin >> initY;
	std::cout << "What is your starting velocity (m/s): ";
	std::cin >> initVel;
	std::cout << "For how long will your object fall (s): ";
	std::cin >> time;

	finalVel = GRAV * time + initVel;
	finalY = (0.5 * GRAV * time * time) + (initVel * time) + initY;

	std::cout << "Your final height was " << finalY << "m." << std::endl
			  << "Your final velocity was " << finalVel << "m/s." << std::endl;

	std::cout << "A test fuction" << std::endl;
	useThisThing();
}

void useThisThing() {
	for (int i = 0; i < thisThing * 3; ++i) {
		for (int j = 0; j < i; ++j) {
			std::cout << "\\/*\\/ ";
		}
	}
}
