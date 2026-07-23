#include <iostream>
#include <climits>

int main()
{

    std::cout << "===============================" << std::endl;
    std::cout << "Practical data type" << std::endl;
    std::cout << "===============================" << std::endl;
    std::cout << "This program demonstrates how data type works" << std::endl;
    std::cout << "for various kinds of information" << std::endl;

    std::cout << "===============================" << std::endl;
    std::cout << "Age section" << std::endl;

    int childAge = 8;
    int teenAge = 15;
    int adultAge = 42;

    std::cout << "childAge: " << childAge << std::endl;
    std::cout << "teenAge: " << teenAge << std::endl;
    std::cout << "adultAge: " << adultAge << std::endl;

    std::cout << "\n age data memory : " << std::endl;
    std::cout << "Size of int (for ages): " << sizeof(int) << std::endl;

    int totalAges = childAge + teenAge + adultAge;

    std::cout << "Total: " << totalAges << std::endl;

    double media = (childAge + teenAge + adultAge) / 3.0;

    std::cout << "media: " << media << std::endl;

    int diferenca = std::abs(childAge - teenAge);
    std::cout << "diferenca: " << diferenca << std::endl;

    std::cout << "===============================" << std::endl;
    std::cout << "Price data section" << std::endl;

    double coffe = 3.99;
    double laptop = 1299.99;
    double hourse = 35000.00;

    std::cout << "coffe: " << coffe << std::endl;
    std::cout << "laptop: " << laptop << std::endl;
    std::cout << "hourse: " << hourse << std::endl;

    float priceAsFlot = 19.99f;
    double priceAsDouble = 19.99;

    std::cout << "Price comparison" << std::endl;
    std::cout << "price as float: " << priceAsFlot << " ( uses )" << sizeof(float) << std::endl;
    std::cout << "price as double: " << priceAsDouble << " ( uses )" << sizeof(double) << std::endl;

    double totalPrice = coffe + laptop;
    std::cout << "totalPrice: " << totalPrice << std::endl;

    // ------ CHARACTER DATA SECTION ------
    std::cout << "\n------ CHARACTER DATA SECTION ------" << std::endl;
    std::cout << "Selecting appropriate data types for character information:" << std::endl;

    // Character variables for single characters
    char grade = 'A';
    char symbol = '#';
    char initial = 'J';

    // Display character information
    std::cout << "Student grade: " << grade << std::endl;
    std::cout << "Special symbol: " << symbol << std::endl;
    std::cout << "First initial: " << initial << std::endl;

    // Show how characters relate to numbers (ASCII values)
    std::cout << "\nCharacter to number conversion:" << std::endl;
    std::cout << "Grade '" << grade << "' has ASCII value: " << (int)grade << std::endl;
    std::cout << "Symbol '" << symbol << "' has ASCII value: " << (int)symbol << std::endl;

    // Show memory usage
    std::cout << "\nCharacter data memory usage:" << std::endl;
    std::cout << "Size of char: " << sizeof(char) << " byte" << std::endl;

    char k = 'K';
    char a = 'A';
    char u = 'U';
    char l = 'A';

    std::cout << "NAME K '" << k << "' has ASCII value: " << (int)k << std::endl;
    std::cout << "NAME A '" << a << "' has ASCII value: " << (int)a << std::endl;
    std::cout << "NAME U '" << u << "' has ASCII value: " << (int)u << std::endl;
    std::cout << "NAME A '" << l << "' has ASCII value: " << (int)l << std::endl;

    char favorite = 'F';
    std::cout << "My favorite '" << favorite << "' has ASCII value: " << (int)favorite << std::endl;

    // ------ BOOLEAN DATA SECTION ------
    std::cout << "\n------ BOOLEAN DATA SECTION ------" << std::endl;
    std::cout << "Using boolean data types for true/false information:" << std::endl;

    // Boolean variables for simple flags
    bool isActive = true;
    bool hasPermission = false;
    bool isCompleted = true;

    // Display boolean values (they show as 1 for true, 0 for false)
    std::cout << "User account active: " << isActive << std::endl;
    std::cout << "User has admin permission: " << hasPermission << std::endl;
    std::cout << "Task completed: " << isCompleted << std::endl;

    // Show memory usage
    std::cout << "\nBoolean data memory usage:" << std::endl;
    std::cout << "Size of bool: " << sizeof(bool) << " byte(s)" << std::endl;

    // Simple boolean comparisons
    std::cout << "\nBoolean comparisons:" << std::endl;
    std::cout << "Are both account active AND task completed? ";
    if (isActive == true && isCompleted == true)
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }

    // ------ SIMPLE PRODUCT EXAMPLE ------
    std::cout << "\n------ SIMPLE PRODUCT EXAMPLE ------" << std::endl;
    std::cout << "Combining multiple data types for a product:" << std::endl;

    // Product information using different data types
    int productId = 12345;
    double productPrice = 29.99;
    char productGrade = 'B';
    bool inStock = true;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productId << std::endl;
    std::cout << "Price: $" << productPrice << std::endl;
    std::cout << "Quality Grade: " << productGrade << std::endl;
    std::cout << "In Stock: " << inStock << std::endl;

    // Simple calculations
    double salesTax = productPrice * 0.08; // 8% tax
    double totalPrices = productPrice + salesTax;

    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTax << std::endl;
    std::cout << "Total with tax: $" << totalPrices << std::endl;

    // Memory usage summary
    int totalMemory = sizeof(productId) + sizeof(productPrice) + sizeof(productGrade) + sizeof(inStock);
    std::cout << "\nTotal memory used for this product: " << totalMemory << " bytes" << std::endl;

    std::cout << "Chanllenge:" << std::endl;

    // Product information using different data types
    int productIds = 1;
    double productPrices = 500.99;
    char productGrades = 'K';
    bool inStocks = false;

    // Display product information
    std::cout << "\nProduct Information:" << std::endl;
    std::cout << "Product ID: " << productIds << std::endl;
    std::cout << "Price: $" << productPrices << std::endl;
    std::cout << "Quality Grade: " << productGrades << std::endl;
    std::cout << "In Stock: " << inStocks << std::endl;

    // Simple calculations
    double salesTaxs = productPrices * 0.08; // 8% tax
    double totalPricess = productPrices + salesTaxs;

    std::cout << "\nPrice Calculations:" << std::endl;
    std::cout << "Sales tax (8%): $" << salesTaxs << std::endl;
    std::cout << "Total with tax: $" << totalPricess << std::endl;

    // Memory usage summary
    int totalMemorys = sizeof(productIds) + sizeof(productPrices) + sizeof(productGrades) + sizeof(inStocks);
    std::cout << "\nTotal memory used for this product: " << totalMemorys << " bytes" << std::endl;

    if (totalPrices < totalPricess == true)
    {
        std::cout << "1 product is more cheap than 2 product " << std::endl;
    }
    else
    {
        std::cout << "2 product is more expensive than 1 product" << std::endl;
    }

    return 0;
}

// g++ data_types_app.cpp -o data_types_app.exe
//.\data_types_app.exe