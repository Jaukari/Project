#include <iostream>
#include <string>

int main() {

    std::string measurement;
    std::cout << "Select a measurement type:" << std::endl;
    std::getline(std::cin, measurement);
    std::cout << "1) Distance (meter/foot)" << std::endl;
    std::cout << "2) Temperature (Celsius/Fahrenheit)" << std::endl;
    std::cout << "3) Mass (gram/pound)" << std::endl;
    std::string choice;
    std::cout << "Enter 1, 2, or 3: ";
    std::getline(std::cin, choice);
 
    if (choice < 1 || choice > 3) {
        std::cout << "Invalid selection." << std::endl;
        return 0;
    }

    std::cout << "Will you enter the value in:" << std::endl;
    std::cout << "1) Metric" << std::endl;
    std::cout << "2) Imperial" << std::endl;
    std::cout << "Enter 1 or 2: ";

























	return 0;
}