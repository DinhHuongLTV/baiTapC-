// ? thao tác với mảng 2 chiều bằng con trỏ 1 chiều

#include <iostream>

void sort(int *p, int m, int n) {
    for (int *t1 = p; t1 < p+m*n-1; t1++)
        for (int *t2 = t1+1; t2<p+m*n; t2++) {
            if (*t1 > *t2) {
                int temp = *t1;
                *t1 = *t2;
                *t2 = temp;
            }
        }
}

int main(void) {
    int m, n, *p;
    std::cout << "Nhap so hang: "; std::cin >> m;
    std::cout << "Nhap so cot: "; std::cin >> n;

    p = new int[m*n];

    // làm theo kiểu con trỏ p luôn trỏ vào đầu mảng, không thay đổi trong quá trình thao tác
    for (int *t = p; t<p+m*n; t++) 
        std::cin >> *t;

    // sap xep
    sort(p, m, n);

    
    for (int *t = p; t<p+m*n; t++) {
        if ((t - p)%n == 0) std::cout << std::endl;
        std::cout << *t << " ";
    }
    delete[] p;
    return 0;
}