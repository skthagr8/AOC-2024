#include <vector>
#include <iostream>
#include <forward_list>
#include <list>
#include <algorithm>
#include <functional>
#include <cstdlib>
#include <sstream>


int main(){

    std::vector<int> v = {1,2,3,4,5};
    std::vector<int> v2 = {6,7,8,9,10};
    
    int difference;

    int sum = 0;

    std::vector<long long> v3 = {};

    // Print the two separate vectors
    std::cout << "First column: ";
    for (int num : v) {
       // std::cout << num << " ";
    }
    std::cout << "\n";

    std::cout << "Second column: ";
    for (int num : v2) {
       // std::cout << num << " ";
    }
    std::cout << "\n";
    
    std::sort(v.begin(), v.end());
    std::sort(v2.begin(), v2.end());

       // Print the two separate vectors
    std::cout << "First column: ";
    for (int num : v) {
      //  std::cout << num << " ";
    }
    std::cout << "\n";

    std::cout << "Second column: ";
    for (int num : v2) {
      //  std::cout << num << " ";
    }
    std::cout << "\n";


    for (size_t i = 0; i < v.size(); i++){
           difference = std::abs(v[i] - v2[i]);
         //  std::cout << difference << std::endl;
           v3.push_back(difference);
    
    }

    for (int n:v3){
    //  std::cout << n << std::endl;
    }
    
    
    for (size_t n:v3){
        sum += n;   
    }
    std::cout << "Calculated sum: " << sum << std::endl;
    int expected_sum = 0;

    // "Undo" step: Verify the sum by manually calculating the expected sum of differences
    // Calculate the expected sum by iterating through the elements and adding their absolute differences
    for (size_t i = 0; i < v.size(); i++) {
            expected_sum += std::abs(v[i] - v2[i]);
        
    }

    std::cout << "Expected sum: " << expected_sum << std::endl;

    // Verify if the calculated sum matches the expected sum
    if (sum == expected_sum) {
        std::cout << "The sums match!" << std::endl;
    } else {
        std::cout << "The sums do not match!" << std::endl;
    }
    return 0;
}
