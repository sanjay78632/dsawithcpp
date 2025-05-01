#include <iostream>
#include <cmath> // Required for std::round
using namespace std;

int main() {
    float basePrice;
    cout << "Enter the base price of the product: ";
    cin >> basePrice;

    // Increase price by 10%
    float increasedPrice = basePrice * 1.10f;

    // Round off the price using std::round
    int roundedPrice = static_cast<int>(round(increasedPrice));

    cout << "The final rounded price after 10% increase is: " << roundedPrice << endl;

    return 0;
}
