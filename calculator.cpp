#include <iostream>

int main() {

    double sum;
    int temp, max;
    int j, k;
    int numbers[10];
    int size = sizeof(numbers)/sizeof(int);

    std::cout << "Welcome to sorting calculator!" << std::endl;         
    std::cout << "Please enter 10 random numbers. " << size << std::endl;

    for(int i = 0; i < size; i++)                   
        std::cin >> numbers[i];

    std::cout << "Sorting your inputs... " << std::endl;

    max = numbers[0];
    
    for(int i = 0; i < size;i++ )
    {
        for(k=i+1; k < size; k++)
        {
            if (numbers[i] > numbers[k])
            {
                temp = numbers[i];
                numbers[i] = numbers[k];
                numbers[k] = temp;
            }
        }
        sum += numbers[i];

        if (numbers[i] > max)
            max = numbers[i];
        
    }
    std::cout << "Numbers in ascending order" << std::endl;
    for(int i = 0; i < size;i++)
        std::cout << numbers[i] << "\t";
    std::cout << std::endl;
    std::cout << "Total sum of your input: " << sum << std::endl;
    std::cout << "The largest number in your input " << max << std::endl;

    return 0;
}
