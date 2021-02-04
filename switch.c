#include <stdio.h>

int main(void)
{
    int choice, value;
    printf("Convert :\n");
    printf("\t1: Decimal to octal: \n");
    printf("\t2: Decimal to HexDecimal: \n");
    printf("\t3:octal  to Decimal : \n");
    printf("\t4: octal to HexDecimal: \n");
    printf("\t5: HexDecimal to Decimal: \n");
    printf("\t6: HexDecimal to octal: \n");
    printf("t7: exit \n");

    printf("Enter your choice: (1-7):");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Enter the decimal nuumber:");
        scanf("%d", &value);
        printf("Decimal %d = %o in octal", value, value);
        break;

    case 2:
        printf("Enter the decimal nuumber:");
        scanf("%d", &value);
        printf("Decimal %d = %x in HexDecimal", value, value);
        break;

    case 3:
        printf("Enter the octal nuumber:");
        scanf("%o", &value);
        printf("octal %o = %d in Decimal", value, value);
        break;

    case 4:
        printf("Enter the octal nuumber:");
        scanf("%o", &value);
        printf(" octal %o = %x in HexDecimal", value, value);
        break;

    case 5:
        printf("Enter the HexDecimal nuumber:");
        scanf("%x", &value);
        printf("HexDecimal %x = %d in Decimal", value, value);
        break;

    case 6:
        printf("Enter the HexDecimal nuumber:");
        scanf("%x", &value);
        printf("HexDecimal %x = %o in octal", value, value);
        break;

    case 7:
        break;
    default:
        printf("\n Invalid choice:");
    }
    printf("\nPress any key to exitL:");
}