#include<stdio.h>
struct Date
{
    int day, month, year;
};

void read(struct Date *date) {

    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &date -> day, &date -> month, &date -> year);
}

void print(struct Date date) {

    printf("%2d/%2d/%2d\n", date.day, date.month, date.year);
}
int isDateEqual(struct Date d1, struct Date d2 )
{
    return (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year);
}
int main()
{

    struct Date d1,d2;

    read(&d1);
    read(&d2);
    print(d1);
    print(d2);

    if(isDateEqual(d1,d2))
        printf("\nDates are same");
    else
        printf("\nDates are not same");

}
