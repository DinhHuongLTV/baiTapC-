#include <iostream>

void print(int *p, int n) {
    for (int *i = p; i < p+n; i++) 
        std::cout << *i << " ";
    std::cout << std::endl;
}

int main(void) {
    int *myArr[5];
    int arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr3[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr4[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr5[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    myArr[0] = arr1;
    myArr[1] = arr2;
    myArr[2] = arr3;
    myArr[3] = arr4;
    myArr[4] = arr5;

    for (int i = 0; i<5; i++)
        print(myArr[i], 10);

    return 0;
}