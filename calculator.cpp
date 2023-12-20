#include <iostream> /*flag = where I left last time*/

int main() {

    double sum;
    int temp, max;
    int j, k;
    int numbers[10];
    int size = sizeof(numbers)/sizeof(int);     //get array size which is 10

    std::cout << "Welcome to sorting calculator!" << std::endl;     //Calculator interface START
    std::cout << "Please enter 10 random numbers. " << size << std::endl;   

    for(int i = 0; i < size; i++)   //Enter 10 random numbers and store it in array variable numbers[i]
        std::cin >> numbers[i];

    std::cout << "Sorting your inputs... " << std::endl;  

    max = numbers[0];      //int max = value of numbers[0]
    
    //numbers sorting start here 
    for(int i = 0; i < size; i++ )   
    {
        for(k=i+1; k < size; k++)   //set 2 comparer, arrary 'i' and 'k' where value array k is bigger by 1 than array 'i' 
        {
            if (numbers[i] > numbers[k])    //if array 'i' bigger than 'k' NOTE: if the '>' symbol flipped, it will become descending order
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
