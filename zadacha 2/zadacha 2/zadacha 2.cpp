
#include <iostream>
#include <cstdlib>


int main()
{
    int* a = new int[100];
    int* b = new int[50];

    for (int i = 0; i < 100; ++i) {
        a[i] = rand() % 30;
    }

    for (int j = 0; j < 50; ++j) {
        b[j] = rand() % 20;
    }
    int s = 0;
    for (int e = 0; e < 50; ++e) {
        if (a[e] == b[e]) {
            s += 1;
        }
        
    }
    std::cout << s << std::endl;
}
