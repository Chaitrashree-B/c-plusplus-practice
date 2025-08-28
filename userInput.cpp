#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;

    std::cout << "Whats your age? " << std::endl;
    std::cin >> age;

    std::cout << "Whats your full name? " << std::endl;
    std::getline(std::cin >> std::ws,name);

    

    std::cout << "Hello " << name;
    std::cout << "You are " << age << " years old";

    return 0;
}
