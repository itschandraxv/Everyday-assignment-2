#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int highestbase(int);  // a user defined fn. for find highest base
int main() {
    double arr[50];
    int highest;
    long scalingfactor=(int)4999999999;
    long shiftingvalue=(int)5000000000;
    srand(time(NULL));
    for (int i = 0; i < 50; i++)
    {
        arr[i] = rand() % scalingfactor + shiftingvalue;
    }
    for (int i = 0; i < 50; i++)
    {
        highest = highestbase(arr[i]);
        printf("Highest base of %f is %d\n\n", arr[i],(highest+1));
    }
    return 0;
}
int highestbase(int n) {
    int digit,highest=0;
    while (n>0)
    {
        digit=n%10;
        if (digit>highest)
        {
            highest=digit;
            n=n/10;
        }
        return highest;
    }
    
}