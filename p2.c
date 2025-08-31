#include <stdio.h>

int main(void)
{
double price_oranges = .95;
double price_energy = 1.5;
double price_yogurt = .75;
double tax_rate = .065;
double oranges = 0;
int energy = 0;
int yogurt = 0;
double total_oranges;
double total_energy;
double total_yogurt;
double total_taxable;
double tax;
double grand_total;

printf("Welcome to Sunshine Mart");
printf("How many pounds of oranges do you have?");
scanf("%lf", &oranges);
printf("How many energy drinks do you have?");
scanf("%d", &energy);
printf("How many yogurts do you have?");
scanf("%d", &yogurt);

total_oranges = oranges*price_oranges;
total_energy = energy*price_energy;
total_yogurt = yogurt*price_yogurt;
total_taxable = total_yogurt+total_energy;
tax = total_taxable*tax_rate;
grand_total = total_taxable+total_oranges+tax;

printf("Item	Cost	Tax\n");
printf("Oranges	%.2f\n", total_oranges);
printf("EDrinks	%.2f\n	%.2f\n", total_energy, total_energy*tax_rate);
printf("Yogurt %.2f\n	%.2f\n", total_yogurt, total_yogurt*tax_rate);
printf("Total Tax	%.2f\n", tax);
printf("Grand Total	%.2f\n", grand_total);

return 0;
} 
