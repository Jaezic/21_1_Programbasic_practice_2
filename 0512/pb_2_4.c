#include <stdio.h>
#define SIZE 10
void printArray(unsigned int input[]);
void mean(unsigned int []);
void median(unsigned int []);
void mode(unsigned int [], unsigned int []);
void bubbleSort(unsigned int []);

int main(void){
    unsigned int frequency[10] = {0};
    unsigned int response[SIZE] = {6,7,8,9,8,7,8,9,8,9};
    mean(response);
    median(response);
    mode(frequency, response);
}
void printArray(unsigned int input[]){
    for(int i=0; i<SIZE; i++)
        printf("%d ", input[i]);
}

void mean(unsigned int answer[]){
    unsigned int total =0;
    for (size_t j = 0; j < SIZE; ++j){
        total += answer[j];
    }
    printf("The mean value is : %u / %u = %.4f\n\n", total, SIZE, (double) total / SIZE);
}

void median(unsigned int answer[]){
    printArray(answer);
    bubbleSort(answer);
    printf("\n\nThe sorted array is ");
    printArray(answer);
    printf("\n\nThe medina is %u\n\n", answer[SIZE/2]);
}

void mode(unsigned int freq[], unsigned int answer[]){
    for(int rating = 1; rating <= 9; ++rating)
        freq[rating] = 0;
    for(int j = 0; j<SIZE; ++j)
        ++freq[answer[j]];
    unsigned int largest = 0;
    unsigned int modeValue = 0;
    for (int rating = 1; rating <=9; ++rating){
        printf("%8u%11u     ", rating, freq[rating]);
        if(freq[rating] > largest){
            largest = freq[rating];
            modeValue = rating;
        }
        for(unsigned int h = 1; h <= freq[rating]; ++h){
            printf("*");
        }
        puts("");
    }
    printf("The mode is %u (occurred %u times).",modeValue, largest);
}

void bubbleSort(unsigned int answer[]){
    int temp;
    for (int i = 0; i < SIZE - 1; i++)
    {
        for (int j = 0; j < SIZE - 1 - i; j++)
        {
            if (answer[j] > answer[j + 1])
            {
                temp = answer[j];
                answer[j] = answer[j + 1];
                answer[j + 1] = temp;
            }
        }
    }    
}