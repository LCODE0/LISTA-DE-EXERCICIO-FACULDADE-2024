#include <iostream>
#include <vector>
#include <cmath>
#include <numeric>
using namespace std;

namespace std {

double calculateStandardDeviation(const vector<double>& v) {
    double sum = accumulate(v.begin(), v.end(), 0.0);
    double mean = sum / v.size();

    double sq_sum = inner_product(v.begin(), v.end(), v.begin(), 0.0);
    double stdev = sqrt(sq_sum / v.size() - mean * mean);

    return stdev;
}

}

int main() {
    vector <double> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double standardDeviation = std::calculateStandardDeviation(v);
    
    std::cout << "Standard Deviation: " << standardDeviation << std::endl;
    
    return 0;
}