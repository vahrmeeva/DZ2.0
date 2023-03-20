#include <iostream>
#include <string>
#include <vector>
#include "task13.h"

void task13(){
    int n = 0; int m = 0;
    std::cout << "input n:" << std::endl;
    std::cin >> n;
    std::cout << "input m:" << std::endl;
    std::cin >> m;
    int i;

    std::vector <int> arr1(n+m);
    std::vector <int> arr2(m);

    for(i = 0; i < n; i++) {
        std::cin >> arr1[i];
    }
    for(i = 0; i < m; i++) {
        std::cin >> arr2[i];
    }
    std::cout << "arr1" << std::endl;
    for(i = 0; i < n+m; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << "\n" << "arr2" << std::endl;
    for(i = 0; i < m; i++) {
        std::cout << arr2[i] << " ";
    }
    int j = 0;
    for(i = n; i>=n && i<n+m; i++){
        arr1[i] = arr2[j];
        j++;
    }

    std::cout << "\n" << "arr1" << std::endl;
    for(i = 0; i < n+m; i++) {
        std::cout << arr1[i] << " ";
    }
    int l = n+m;

    for (int i = 0; i < n+m-1; i++) { // 2 вложенных цикла из-за того, чтобы уйти сравнивая за последний элемент
        for (int j = 0; j < n+m-1; j++) {
            if (arr1[j] > arr1[j + 1])
                std::swap(arr1[j], arr1[j+1]);//свапаем соседние элементы, если левый меньше правого
        }
    }

    std::cout << "\n" << "arr1" << std::endl;
    for(i = 0; i < n+m; i++) {
        std::cout << arr1[i] << " ";
    }

}

