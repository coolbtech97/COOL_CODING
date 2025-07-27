/**
 * @file 2_Vector_in_2D.cpp
 * @brief Demonstration of 2D vectors in C++
 */
#include <iostream>
#include <vector>
#include <iomanip>

/**
 * @brief Display a 2D vector with formatted output
 * @param matrix The 2D vector to display
 */
void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    std::cout << "2D Vector:" << std::endl;
    int row_count = 1;
    for (const auto& row : matrix) {
        std::cout << "Row " << std::setw(2) << row_count++ << ": ";
        for (const auto& elem : row) {
            std::cout << std::setw(2) << elem << " ";
        }
        std::cout << std::endl;
    }
}

int main()
{
    // A 1D vector can be declared as:
    // std::vector<int> arr;
    // Or initialized with a size and default value:
    // std::vector<int> arr(size, initial_value);

    // A 2D vector is a vector of vectors.
    // It can be initialized like this:
    // std::vector<std::vector<int>> arr2(rows, std::vector<int>(cols, initial_value));

    //INITIALISE 2D VECTOR
    const int rows = 4;
    const int cols = 4;
    std::vector<std::vector<int>> v(rows, std::vector<int>(cols, 0));

    int num = 0;
    for(int i = 0; i < rows; i++)
        for(int j = 0; j < cols; j++)
            v[i][j] = num++;

    // Displaying the 2D vector using a dedicated function
    displayMatrix(v);
    
    return 0;
}