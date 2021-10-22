#include <stdio.h>
#include <stdlib.h>

int main()
{
    int purchaser;
    float purchaseTotal, salesTax, teachersDiscount, discountedTotal, total;

    printf("Press [1] if you are a Teacher and [2] if NOT: ");
    scanf("%d", &purchaser);

    // This loop will repeat until the user enters either 1 or 2


    if (purchaser == 1)
    {
        printf("Total purchases: $");
        scanf("%f", &purchaseTotal);
        printf("\n******************** Receipt.txt *********************\n");

        if(purchaseTotal >= 100)
        {
            printf("Total purchases: $%.2f\n", purchaseTotal);
            teachersDiscount =  purchaseTotal * 0.12f;
            printf("Teacher's discount: %.2f\n", teachersDiscount);
            discountedTotal =  purchaseTotal - teachersDiscount;
            printf("Discounted total: %.2f\n", discountedTotal);
            salesTax = discountedTotal * 0.05f;
            printf("Sales tax: %.2f\n", salesTax);
            total = discountedTotal + salesTax;
            printf("Total $%.2f", total);
            printf("\n******************** Receipt.txt *********************\n");
        }
        else
        {
            printf("Total purchases: $%.2f\n", purchaseTotal);
            teachersDiscount = purchaseTotal * 0.10f;
            printf("Teacher's discount: %.2f\n", teachersDiscount);
            discountedTotal = purchaseTotal - teachersDiscount;
            printf("Discounted total: %.2f\n", discountedTotal);
            salesTax = purchaseTotal * 0.05f;
            printf("Sales tax: %.2f\n", salesTax);
            total = purchaseTotal + salesTax;
            printf("Total $%.2f", total);
            printf("\n******************** Receipt.txt *********************\n");
        }

    }
    else if (purchaser == 2)
    {
        printf("\n******************** Receipt.txt *********************\n");
        printf("Total purchases: $");
        scanf("%f", &purchaseTotal);
        salesTax = purchaseTotal * 0.05f;
        printf("Sales tax: %.2f\n", salesTax);
        total = purchaseTotal + salesTax;
        printf("Total: $%.2f\n", total);
        printf("******************** Receipt.txt *********************\n");
    }
    else
    {
        while (purchaser != 1 && purchaser != 2)
        {
            printf("Press [1] if you are a Teacher and [2] if NOT: ");
            scanf("%d", &purchaser);

            if (purchaser == 1)
    {
        printf("Total purchases: $");
        scanf("%f", &purchaseTotal);
        printf("\n******************** Receipt.txt *********************\n");

        if(purchaseTotal >= 100)
        {
            printf("Total purchases: $%.2f\n", purchaseTotal);
            teachersDiscount =  purchaseTotal * 0.12f;
            printf("Teacher's discount: %.2f\n", teachersDiscount);
            discountedTotal =  purchaseTotal - teachersDiscount;
            printf("Discounted total: %.2f\n", discountedTotal);
            salesTax = discountedTotal * 0.05f;
            printf("Sales tax: %.2f\n", salesTax);
            total = discountedTotal + salesTax;
            printf("Total $%.2f", total);
            printf("\n******************** Receipt.txt *********************\n");
        }
        else
        {
            printf("Total purchases: $%.2f\n", purchaseTotal);
            teachersDiscount = purchaseTotal * 0.10f;
            printf("Teacher's discount: %.2f\n", teachersDiscount);
            discountedTotal = purchaseTotal - teachersDiscount;
            printf("Discounted total: %.2f\n", discountedTotal);
            salesTax = purchaseTotal * 0.05f;
            printf("Sales tax: %.2f\n", salesTax);
            total = purchaseTotal + salesTax;
            printf("Total $%.2f", total);
            printf("\n******************** Receipt.txt *********************\n");
        }

    }
    else if (purchaser == 2)
    {
        printf("\n******************** Receipt.txt *********************\n");
        printf("Total purchases: $");
        scanf("%f", &purchaseTotal);
        salesTax = purchaseTotal * 0.05f;
        printf("Sales tax: %.2f\n", salesTax);
        total = purchaseTotal + salesTax;
        printf("Total: $%.2f\n", total);
        printf("******************** Receipt.txt *********************\n");
    }

        }
    }

    return 0;
}
