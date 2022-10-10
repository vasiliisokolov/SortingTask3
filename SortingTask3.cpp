#include <iostream>
#include <vector>


bool check_format(int);
void sort_vector(std::vector<int>&);

int main()
{
    std::vector<int> vec;
    int input;
    std::cout << "Fill the vector!" << std::endl;
    bool action = true;
    while (action)
    {
        std::cout << "Enter the number: " << std::endl;
        std::cin >> input;
        
        if (check_format(input))
        {
            vec.push_back(input);
        }
        else if (input == -1)
        {
            sort_vector(vec);
            std::cout << "Fifth number: " << vec[4] << std::endl;
        }
        else if (input == -2)
        {
            action = false;
        }
        else
        {
            std::cout << "False input!" << std::endl;
        }
    }
}

bool check_format(int input)
{
    if (input > 9 || input < 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void sort_vector(std::vector<int>& vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (vec[j] > vec[j + 1])
            {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp;
            }
        }
    }
}