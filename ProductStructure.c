#include<stdio.h>
#define GST 0.18
#define TRANSPORTATION_COST 500

int main() {
    int numProducts, i;
    printf("Enter the number of products: ");
    scanf("%d", &numProducts);
    float basePrice[numProducts], discount[numProducts], finalPrice[numProducts], totalGST=0, totalTransportationCost=0, totalFinalPrice=0;
    int quantity[numProducts];
    float totalProductPrice[numProducts];
    float grandTotal=0;
    float transportationCostPerProduct[numProducts];
    for(i=0; i<numProducts; i++) {
        printf("Enter the base price of product %d: ", i+1);
        scanf("%f", &basePrice[i]);
        printf("Enter the discount on product %d: ", i+1);
        scanf("%f", &discount[i]);
        printf("Enter the quantity of product %d: ", i+1);
        scanf("%d", &quantity[i]);
        totalProductPrice[i] = basePrice[i] - (basePrice[i] * discount[i] / 100);
        totalGST += totalProductPrice[i] * GST;
        transportationCostPerProduct[i] = TRANSPORTATION_COST / numProducts;
        totalTransportationCost += transportationCostPerProduct[i];
        finalPrice[i] = totalProductPrice[i] + totalProductPrice[i] * GST + transportationCostPerProduct[i];
        totalFinalPrice += finalPrice[i];
    }
    for(i=0; i<numProducts; i++) {
        printf("Product %d: \n", i+1);
        printf("Base Price: %.2f\n", basePrice[i]);
        printf("Discount: %.2f\n", discount[i]);
        printf("Quantity: %d\n", quantity[i]);
        printf("Total Product Price: %.2f\n", totalProductPrice[i]);
        printf("Transportation Cost per product: %.2f\n", transportationCostPerProduct[i]);
        printf("Final Price: %.2f\n", finalPrice[i]);
        printf("\n");
    }
    grandTotal = totalFinalPrice;
    printf("Total GST: %.2f\n", totalGST);
    printf("Total Transportation Cost: %.2f\n", totalTransportationCost);
    printf("Grand Total: %.2f\n", grandTotal);
    return 0;
}