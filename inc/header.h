#include <stdio.h>
#include <string.h>
#include <conio.h>

struct order{
    char name[50];
    int order_number;
    int number_of_food;
    int cost;
}p[10000];
int order_count = 0, served_count = 0, waiting_now = 0;

