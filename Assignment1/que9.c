#include <stdio.h>

int main() {
    int amount;
    int ten_notes, five_notes, one_notes;

    // Input 
    printf("Enter the amount to withdraw: ");
    scanf("%d", &amount);

    // Calculate 
    ten_notes = amount / 10;
    amount = amount % 10;

    five_notes = amount / 5;
    amount = amount % 5;

    
    // Output 
    printf("\nCurrency distribution:\n");
    printf("₹10 notes: %d\n", ten_notes);
    printf("₹5 notes : %d\n", five_notes);
    printf("₹1 notes : %d\n", one_notes);

    return 0;
}