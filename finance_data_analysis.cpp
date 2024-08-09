#include <iostream>
#include <vector>
#include <string>

// Structure to represent financial data
struct FinancialData {
    std::string date;
    double price;
    int volume;
};

// Function to calculate average price
double calculateAveragePrice(const std::vector<FinancialData>& data) {
    double sum = 0.0;
    for (const auto& entry : data) {
        sum += entry.price;
    }
    return sum / data.size();
}

int main() {
    // Vector to store financial data
    std::vector<FinancialData> stockData;

    // Adding some sample data
    stockData.push_back({"2023-01-01", 100.0, 1000});
    stockData.push_back({"2023-01-02", 101.5, 1200});
    stockData.push_back({"2023-01-03", 99.5, 800});

    // Calculate and print average price
    double avgPrice = calculateAveragePrice(stockData);
    std::cout << "Average price: " << avgPrice << std::endl;

    return 0;
}