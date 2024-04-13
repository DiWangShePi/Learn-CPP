#include <iostream>

using namespace std;

void log(const char* message);
int main() {
    std::cout << "Hello World!" << std::endl;
    log("Hello Again!");
    exit(0);
}