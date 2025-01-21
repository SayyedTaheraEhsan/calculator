#include <stdio.h>
#include <stdbool.h>

bool canPlaceFlowers(int* flowerbed, int flowerbedSize, int n) {
    int i = 0;
    int count = 0;
    
    while (i < flowerbedSize) {
        
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbedSize - 1 || flowerbed[i + 1] == 0)) {
            
      
            flowerbed[i] = 1;
            count++;
            
        
            i += 2;
        } else {
            i++;
        }
    }
    
    
    return count >= n;
}

int main() {
    int flowerbed[] = {1, 0, 0, 0, 1}; 
    int flowerbedSize = sizeof(flowerbed) / sizeof(flowerbed[0]);
    int n = 1; // Number of new flowers to be planted

    bool result = canPlaceFlowers(flowerbed, flowerbedSize, n);
    
    if (result) {
        printf("True: %d flowers can be planted without violating the rule.\n", n);
    } else {
        printf("False: %d flowers cannot be planted without violating the rule.\n", n);
    }

    return 0;
}