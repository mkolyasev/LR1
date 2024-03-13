#include <iostream>
#include <vector>

#include <lib/lr1.h>

int main() {
    std::vector<double> arr = {10.00, -14.00, 15.00, 20.00, -21.00, 25.00, 3.0};
    std::vector<double> result = minusOneAndCube(arr);
   

    std::cout << "Array processing result:" << std::endl;
    for (double num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
 
}