// (Population projection) UBoS projects population based on the
// following assumptions:
// One birth every 7 seconds
// One death every 13 seconds
// One new immigrant every 45 seconds
// Write a program to display the population for each of the next five years. Assume the current population is 312032486 and one year has 365 days.

#include <iostream>

int main() {
    long long population = 312032486;
    
    // Total seconds in one year (365 days)
    int seconds_per_year = 365 * 24 * 60 * 60;
    
    // Calculate annual changes
    int births = seconds_per_year / 7;
    int deaths = seconds_per_year / 13;
    int immigrants = seconds_per_year / 45;
    
    int net_change = births - deaths + immigrants;
    
    // Display population for each of the next 5 years
    for (int year = 1; year <= 5; ++year) {
        population += net_change;
        std::cout << "Year " << year << " population: " << population << "\n";
    }

    return 0;
}
