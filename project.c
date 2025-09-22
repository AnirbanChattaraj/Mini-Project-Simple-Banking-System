#include <stdio.h>

int main() {
    int choice;
    double balance = 1000.0;  // initial balance
    double amount;

    printf("Welcome to Mini Banking System!\n");

    do {
        // Menu
        printf("\n--- MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Your current balance is: %.2lf\n", balance);
        } 
        else if (choice == 2) {
            printf("Enter amount to deposit: ");
            scanf("%lf", &amount);
            if(amount > 0) {
                balance += amount;
                printf("Amount deposited successfully!\n");
            } else {
                printf("Invalid amount!\n");
            }
        } 
        else if (choice == 3) {
            printf("Enter amount to withdraw: ");
            scanf("%lf", &amount);
            if(amount > 0 && amount <= balance) {
                balance -= amount;
                printf("Withdrawal successful!\n");
            } else {
                printf("Insufficient balance or invalid amount!\n");
            }
        } 
        else if (choice == 4) {
            printf("Thank you for using our system!\n");
        } 
        else {
            printf("Invalid choice! Please try again.\n");
        }

    } while(choice != 4);

    return 0;
}
