#include <stdio.h>
#include <string.h>

// global variable 
int choice;
int id[5];
char name[5][30];
char father[5][30];
int age[5];
long long int accountNo[5];
long long int aadharNo[5];
int balance[5] = {0};               // Set initial balance to 0 for all accounts

int count = 0;

// Function declaration
void displayMenu();
void createAccount();
void displayAcc();
void withdraw();
void checkBalance();
void deposit();

int main()
{
    int choice;
    int running = 1;

    while (running)
    {
        displayMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            createAccount();
            break;

        case 2:
            
            displayAcc();
            break;

        case 3:
        
            withdraw();
            break;
        

        case 4:
        
            checkBalance();
            break;
        

        case 5:

            deposit();
            break;
        

        case 6:
            printf("Exiting the program.\n Thank you!\n");
            running = 0;
            break;

        default:
            printf("Invalid choice! Please select from the menu.\n");
        }
    }

    return 0;
}
void displayMenu()
{
        printf("\nMenu:\n");
        printf("1. Create Account\n");
        printf("2. Display Account Details\n");
        printf("3. Withdraw\n");
        printf("4. Check Balance\n");
        printf("5. Deposit\n");
        printf("6. Exit\n");
}

void createAccount()
{
    if (count >= 5)
            {
                printf("Account limit (5) reached!\n");
                return;
            }
                long long int tempAcc;
                id[count] = count + 1;                  // for auto-increment ID

                printf("Enter Name: ");
                scanf(" %[^\n]", name[count]);

                printf("Enter Aadhar Number: ");
                scanf("%lld", &aadharNo[count]);

                printf("Enter Age: ");
                scanf("%d", &age[count]);

                printf("Enter Father's Name: ");
                scanf(" %[^\n]", father[count]);

                while (1)                               // for 11 digit number
                {
                    printf("enter 11-digit account number: ");
                    scanf("%lld", &tempAcc);
                    if (tempAcc >= 10000000000 && tempAcc <= 99999999999)
                    {
                        accountNo[count] = tempAcc;
                        break;
                    }else
                    {
                        printf("Invalid!! Account number must be 11 digits.\n");
                    }
                }

                balance[count] = 0;                     // Default balance
                printf("Account created successfully! Account ID: %d\n", id[count]);

                count++;
}

void displayAcc()
{
    if (count == 0)
            {   
                printf("No account found!\n");
            }
            else
            {
                for (int i = 0; i < count; i++)
                {
                    printf("\n--- Account %d ---\n", i + 1);
                    printf("Name: %s\n", name[i]);
                    printf("Father's Name: %s\n", father[i]);
                    printf("Aadhar Number: %lld\n", aadharNo[i]);
                    printf("Age: %d\n", age[i]);
                    printf("Account Number: %lld\n", accountNo[i]);
                    printf("Balance: ₹%d\n", balance[i]);
                }
            }
}

void withdraw()
{
    long long int accNo;
            int amt, found = 0;
            printf("Enter Account Number to withdraw from: ");
            scanf("%lld", &accNo);

            for (int i = 0; i < count; i++)
            {
                if (accountNo[i] == accNo)
                {
                    found = 1;
                    printf("Enter amount to withdraw: ");
                    scanf("%d", &amt);
                    if (amt > 0 && amt <= balance[i])
                    {
                        balance[i] -= amt;
                        printf("Withdrawn ₹%d successfully. New Balance: ₹%d\n", amt, balance[i]);
                    }
                    else
                    {
                        printf("Insufficient balance or invalid amount.\n");
                    }
                    break;
                }
            if (accountNo[i] != accNo)
            {
                printf("Account not found!\n");
            }
            }           
}

void checkBalance()
{
    long long int accNo;
            int found = 0;
            printf("Enter Account Number to check balance: ");
            scanf("%lld", &accNo);

            for (int i = 0; i < count; i++)
            {
                if (accountNo[i] == accNo)
                {
                    printf("Current balance: ₹%d\n", balance[i]);
                    found = 1;
                    break;
                }
            else
            {
                printf("Account not found!!\n");
            }
            }
}

void deposit()
{
    long long int accNo;
            int amt, found = 0;
            printf("Enter Account Number to deposit into: ");
            scanf("%lld", &accNo);

            for (int i = 0; i < count; i++)
            {
                if (accountNo[i] == accNo)
                {
                    found = 1;
                    printf("Enter amount to deposit: ");
                    scanf("%d", &amt);
                    if (amt > 0)
                    {
                        balance[i] += amt;
                        printf("Deposited ₹%d successfully. New Balance: ₹%d\n", amt, balance[i]);
                    }
                    else
                    {
                        printf("Invalid amount.\n");
                    }
                    break;
                }
            if (aadharNo[i] != accNo)
            {
                printf("Account not found!!\n");
            
            }
            }
}

