#include <iostream>
#include <iomanip>

int main() {
    
    std::cout << "Welcome to the Warhawk Hotel!" << std::endl;

    
    double tax_rate = 0.035;

    
    int num_nights;

    
    std::cout << "How many nights will you be staying with us?" << std::endl;
    if (!(std::cin >> num_nights)) {
        std::cout << "Invalid input!" << std::endl;
        return 1;
    }

    
    if (num_nights <= 0) {
        std::cout << "Invalid input!" << std::endl;
        return 2;
    }

   
    double subtotal = 24.99 + (num_nights * 99.99);

    
    double tax = subtotal * tax_rate;

   
    double total = subtotal + tax;

    
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Nights: " << num_nights << std::endl;
    std::cout << "Sub: $" << subtotal << std::endl;
    std::cout << "Tax: $" << tax << std::endl;
    std::cout << "Total: $" << total << std::endl;

    
    double amount_paid;
    std::cout << "How much will you be paying? $" << std::endl;
    if (!(std::cin >> amount_paid)) {
        std::cout << "Invalid input!" << std::endl;
        return 3;
    }

    
    if (amount_paid < total) {
        std::cout << "Insufficient payment. Order canceled!" << std::endl;
        return 4;
    }

    
    double change_due = amount_paid - total;

    
    std::cout << "Paid: $" << amount_paid << std::endl;
    std::cout << "Change: $" << change_due << std::endl;
    std::cout << "Enjoy your stay!" << std::endl;

    return 0;
}