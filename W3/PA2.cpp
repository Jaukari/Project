#include <iostream>
#include <string>

int main() {
    std::string grade172, grade174;

    std::cout << "Please enter your A-F grade or X if you have not taken the course." << std::endl;

    std::cout << "COMPSCI 172: ";
    std::cin >> grade172;

    std::cout << "COMPSCI 174: ";
    std::cin >> grade174;

    
    auto valid = [](const std::string& g) {
        return g == "A" || g == "B" || g == "C" || g == "D" || g == "F" || g == "X";
        };

    if (!valid(grade172) || !valid(grade174)) {
        std::cout << "Invalid letter grade." << std::endl;
        return 0;
    }

    
    bool passed172 = (grade172 == "A" || grade172 == "B" || grade172 == "C");
    bool passed174 = (grade174 == "A" || grade174 == "B" || grade174 == "C");

    if (!passed172 && !passed174) {
        std::cout << "You need to pass either COMPSCI 172 or COMPSCI 174 to continue." << std::endl;
        return 0;
    }

    
    int course;
    std::cout << "Enter the course number you plan on enrolling in next semester: ";

    if (!(std::cin >> course)) {
        std::cout << "Invalid course number." << std::endl;
        return 0;
    }

    
    if (course != 220 && course != 221 && course != 222) {
        std::cout << "That is not a valid intermediate programming course number." << std::endl;
        return 0;
    }

    
    if (course == 220) {
        if (passed172) {
            std::cout << "That's a good choice for a Java programmer!" << std::endl;
        }
        else {
            std::cout << "You might want to reconsider taking Intermediate Java" << std::endl;
        }
    }
    else if (course == 221) {
        std::cout << "Anyone can enroll in Intermediate C#!" << std::endl;
    }
    else { 
        if (passed174) {
            std::cout << "That's a good choice for a C++ programmer!" << std::endl;
        }
        else {
            std::cout << "You might want to reconsider taking Intermediate C++" << std::endl;
        }
    }

    return 0;
}