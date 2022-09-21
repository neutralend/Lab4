#include <iostream>

int main{
  int thisThing = 2;
  std::cout << "Main" << std::endl;

}

void useThisThing() {
  for (int i=0; i<thisThing*3; ++i) {
    for (int j=0; j<i; ++j) {
      std::cout << "\\/*\\/ ";
    }
  }
}
