#include "task15.h"
#include <iostream>
#include <string>
#include <vector>

void task15(){
    int numRows;
    std::cin >> numRows;
    std::vector<int> vec(numRows);
    for (int i = 0; i < numRows; i++){
        int a = 1;
        vec[i]= a;
        for (int j = 0; j <=i; j++){
            //vec[j] = a;
            std::cout << vec[i] << " ";
            a = a * (i - j) / (j + 1);
            vec[i]= a;
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
