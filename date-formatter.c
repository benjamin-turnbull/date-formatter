/* converts a date from mm/dd/yyyy format to yyyy/mm/dd  */

#include <stdio.h>

int main(void)
{
    int month, day, year;

    printf("Enter a date in mm/dd/yyyy format: \n");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("%d/%d/%d", year, month, day);
}
