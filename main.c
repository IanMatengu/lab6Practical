#include <stdio.h>

int main(void)
{
    float salaries[5];  
    int i;

    
    for (i = 0; i < 5; i++)
    {
        printf("Enter salary %d: ", i + 1);
        scanf("%f", &salaries[i]);
    }

    
    printf("\nEmployee Salaries:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%.2f\n", salaries[i]);
    }

    return 0;
}