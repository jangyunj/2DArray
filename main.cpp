#include <iostream>
#include <string>

int main()
{
    // 2D array -> [row][column]
    // Also, you only need to initialize the column size, so row can be left blank

    std::string cars[][3] = {{"Mustang", "Escape", "F-150"},         // Ford
                             {"Corvette", "Equinox", "Silverado"},   // Mustang
                             {"Challenger", "Durango", "Ram 1500"}}; // Dodge

    std::cout << cars[0][0] << " ";
    std::cout << cars[0][1] << " ";
    std::cout << cars[0][2] << '\n';
    std::cout << cars[1][0] << " ";
    std::cout << cars[1][1] << " ";
    std::cout << cars[1][2] << '\n';
    std::cout << cars[2][0] << " ";
    std::cout << cars[2][1] << " ";
    std::cout << cars[2][2] << '\n';

    // // Nested loops can also be used

    // int rows = sizeof(cars) / sizeof(cars[0]);
    // int columns = sizeof(cars[0]) / sizeof(cars[0][0]);

    // for (int i = 0; i < rows; i++)
    // {
    //     for (int j = 0; j < columns; j++)
    //     {
    //         std::cout << cars[i][j] << " ";
    //     }
    //     std::cout << '\n';
    // }
}