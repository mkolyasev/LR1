#include "lr1.h"

std::vector<double> minusOneAndCube(const std::vector<double>& array) {
  
    std::vector<double> result = array;
    bool MinusOne = false;

    for (double num : array) {
        if (num < -1) {
            MinusOne = true;
            break;
        }
    }

    if (MinusOne) {
        for (double& num : result) {
            if (num < 0) {
                num = num * num * num; 
            }
        }
    }

    return result;
}