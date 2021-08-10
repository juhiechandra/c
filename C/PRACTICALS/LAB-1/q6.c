#include <stdio.h>
int main()
{
    int basic_pay, dearness_allowance, house_rent, vehicle_allowance, total_salary;
    basic_pay = 50000;
    dearness_allowance = basic_pay / 2;
    vehicle_allowance = basic_pay / 10;
    house_rent = basic_pay / 5;
    printf("Total salary of employ is %d", basic_pay + dearness_allowance + vehicle_allowance + house_rent);
}