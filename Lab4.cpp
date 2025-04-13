#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    // 1. Ціна зі знижкою 15% від 450 грн
    int price = 450;
    int discount = 15;
    int discounted_price = price - (price * discount / 100);
    printf("1. Discounted price: %d\n", discounted_price);

    // 2. Вік людини за роком народження
    int birth_year;
    printf("2. Enter birth year: ");
    scanf_s("%d", &birth_year);
    int age = 2025 - birth_year;
    printf("   Age: %d\n", age);

    // 3. Відстань між двома точками (x1, y1) і (x2, y2)
    double x1, y1, x2, y2;
    printf("3. Enter x1 y1: ");
    scanf_s("%lf %lf", &x1, &y1);
    printf("   Enter x2 y2: ");
    scanf_s("%lf %lf", &x2, &y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("   Distance: %lf\n", distance);

    // 4. Кінцева ціна товару з введеною знижкою
    float item_price, item_discount;
    printf("4. Enter item price: ");
    scanf_s("%f", &item_price);
    printf("   Enter discount in %%: ");
    scanf_s("%f", &item_discount);
    float final_price = item_price - (item_price * item_discount / 100);
    printf("   Final price: %.2f\n", final_price);

    // 5. Сума цифр тризначного числа
    int number;
    printf("5. Enter a three-digit number: ");
    scanf_s("%d", &number);
    int digit_sum = (number / 100) + (number / 10 % 10) + (number % 10);
    printf("   Sum of digits: %d\n", digit_sum);
    
    return 0;
}

