#include <iostream>
#include <vector>

using namespace std;

// Function to generate the Tribonacci series
vector<long long> generateTribonacci(int n) {
    vector<long long> tribonacciSeries(n);

    if (n >= 1) tribonacciSeries[0] = 0;
    if (n >= 2) tribonacciSeries[1] = 1;
    if (n >= 3) tribonacciSeries[2] = 1;

    for (int i = 3; i < n; ++i) {
        tribonacciSeries[i] = tribonacciSeries[i-1] + tribonacciSeries[i-2] + tribonacciSeries[i-3];
    }

    return tribonacciSeries;
}

int main() {
    int n;
    cout << "Enter the number of terms in the Tribonacci series: ";
    cin >> n;

    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    vector<long long> tribonacciSeries = generateTribonacci(n);

    cout << "Tribonacci series:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << tribonacciSeries[i] << " ";
    }
    cout << endl;

    return 0;
}