#include "main.h"

/**
*
*/

int main(void) {
    int Ops, limit, identifier;
    FILE *fp;
    char *symbol = "*******";
    printf("%s Bienvenue!%s\n\n%sGestion Des Produits%s\n", symbol, symbol, symbol, symbol);

    while(1) {
        Welcome();
        printf("Enter the Operation Number: ");
        scanf("%d", &Ops);
        switch(Ops) {
            case 0:
                printf("Program is Closing....\n");
                exit(0);
            case 1:
                addProduct();
                break;
            case 2:
                printf("How many Product you want to Enter: ");
                scanf("%d", &limit);
                addProducts(limit);
                break;
            case 3:
                readProducts();
                break;
            case 4:
                // TODO: Call DeleteProduct Function
                break;
            case 5:
                printf("Select Search mode\n0: Break\n1: Search by Code\n2: Search By quantite\n3: Search By Stock\n");
                if (identifier == 0) {
                    break;
                }
                scanf("%d", &identifier);
                searchProduct(identifier);
                break;
            case 6:
                // TODO: call addStock function
                break;
            case 7:
                // TODO: call buyProduct function
                break;
            case 8:
                // TODO: call DisplayStats function
                break;
            default:
                printf("Error: Enter number from 0 to 8\n");
        }
    }
    return (0);
}