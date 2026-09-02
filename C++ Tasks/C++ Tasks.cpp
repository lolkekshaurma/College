
//KT1________________

#include <iostream>
#include <vector>
#include <chrono>
#include <execution>
#include <random>

int main()
{
    setlocale(LC_ALL, "Russian");

    int numbers[32768];
    for (int i = 0; i < 32768; ++i) numbers[i] = rand() % (-1000 - 1000 + 1) + -1000;

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 32768; ++i) std::cout << numbers[i] << std::endl;
    auto end = std::chrono::high_resolution_clock::now();
    auto t1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);


    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 32768; ++i) std::cout << numbers[i] << '\n';
    end = std::chrono::high_resolution_clock::now();
    auto t1e = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);


    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 32768; ++i) {
        printf("%d\n", numbers[i]);

    }
    end = std::chrono::high_resolution_clock::now();
    auto t2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);



    int summOFALL = 0;
    int& summ = summOFALL;
    start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 32768; ++i) {
        summ = summ + numbers[i];
    }
    end = std::chrono::high_resolution_clock::now();
    printf("%d", summ);
    auto t3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end - start);

    std::cout << std::endl;
    std::cout << "Cout endl: " << t1 << std::endl;
    std::cout << "Cout |n: " << t1e << std::endl;
    std::cout << "printf: " << t2 << std::endl;
    std::cout << "summmmmmm: " << t3 << std::endl;

}

//KT1=============================


