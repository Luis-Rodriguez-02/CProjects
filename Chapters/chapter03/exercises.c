// Create a program that accepts date from user as mm / dd / yyyy then displays it in yyyymmdd
#include <stdio.h>
/*
int main(void)
{
    int month, day, year;
    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You enterted the date %d%d%d", year, month, day);
    return 0;
}
*/

/*
#include <stdio.h>

int main(void)
{
    int item_number, purchase_month, purchase_day, purchase_year;
    float unit_price;
    printf("Enter item number: ");
    scanf("%d", &item_number);
    printf("Enter unit price: ");
    scanf("%f", &unit_price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &purchase_month, &purchase_day, &purchase_year);
    printf("Item\tUnit\t\tPurchase Date\n");
    printf("%d\t$%f\t%02d/%02d/%04d", item_number, unit_price, purchase_month, purchase_day, purchase_year);

    return 0;
}
*/


#include <stdio.h>

int main(void)
{
    // ISBN: xxx-x-xxx-xxxxx-x 
    // GS1 Prefix - Group Identifier - Publisher code - Item Number - Check Digit
    int prefix, group_identifier, publisher_code, item_number, check_digit;
    printf("Enter ISBN Number (XXX-X-XXX-XXXXX-X): ");
    scanf("%3d-%d-%d-%d-%d", &prefix, &group_identifier, &publisher_code, &item_number, &check_digit);
    printf("GS1 Prefix: %d\nGroup Identifier: %d\nPublisher Code: %d\n Item Number: %d\nCheck Digit: %d",
	   prefix, group_identifier, publisher_code, item_number, check_digit);
}
