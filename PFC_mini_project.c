
//NAME -PRAVEEN SAHU, ERP- RU-25-11004

//The aim of this project is to check whether a number is a strong number by calculating the sum of the factorials of its digits and comparing it with the original number.	Check strong numbers	C, VS Code, Github	Strong/Not
#include <stdio.h>

int main() {
    int num, temp, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    if (sum == num)
        printf("Strong Number\n");
    else
        printf("Not Strong Number\n");

    return 0;
}
