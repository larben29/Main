#include <fstream>
#include <iostream>
#include <iterator>
#include <random>
#include <vector>

int main() {

    std::vector<std::vector<int>> matrix(4, std::vector<int>(4, 0));

    //Generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(-50, 50);

    for (auto& row : matrix) {

        std::generate(row.begin(), row.end(), [&gen, dist]() { return dist(gen); });
        std::copy(row.begin(), row.end(), std::ostream_iterator<int>(std::cout, " "));
        std::cout << '\n';

    }

   
    std::ofstream oFile("C:\\Users\\larbe\\Documents\\nums.txt");

    for (const auto& row : matrix) {

        std::copy(row.begin(), row.end(), std::ostream_iterator<int>(oFile, " "));
        oFile << '\n';

    }

    system("PAUSE");
    return 0;

}