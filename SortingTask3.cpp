#include <iostream>
#include <vector>

bool check_format(int);
void sort_vector(std::vector<int>&);

int main()
{
    std::vector<int> vec;
    int input = 0;
    std::cout << "Fill the vector!\n";
    bool action = true;
    while (action)
    {
        std::cin >> input;
        if (input != -1 && input != -2 && check_format(input))
        {
            vec.push_back(input);
        }
        else if (input == -1)
        {
            sort_vector(vec);

        }
    }
}

bool check_format(int input)
{
    return false;
}

void sort_vector(std::vector<int>&)
{

}