// hackalong
#include <iostream>
#include <string>
#include <vector>
#include <map>

int main(){
    std::map<std::string, double> prices = {
        {"banana", 0.99},
        {"apple", 1.49},
        {"pear", 1.29}
    };

    std::string fruit;
    double price;

    while (true) {
        std::cout << "Enter a fruit name (or 'done' to quit): ";
        std::cin >> fruit;
        if (fruit == "done") {
            break;
        }

        std::cout << "Enter price for " << fruit << ": ";
        std::cin >> price;
        prices[fruit] = price;
    }

    std::cout << "\nFruit prices:\n";
    for (const auto& [name, p] : prices) {
        std::cout << "  " << name << ": $" << p << "\n";
    }
    
    return 0;
}