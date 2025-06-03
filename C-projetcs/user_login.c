#include <stdio.h>

int main()
{
    printf("Hi and Welcome to our Login System\n");

    int ID, c = 0;  // ID stores user input, c counts incorrect login attempts

    while (1) {
        printf("Enter your logged-in ID Number: ");
        scanf("%d", &ID);

        switch (ID) {
            case 1001: printf("Hello User1!\n"); break;
            case 1002: printf("Hello User2!\n"); break;
            case 1003: printf("Hello User3!\n"); break;
            case 1004: printf("Hello User4!\n"); break;
            case 1005: printf("Hello User5!\n"); break;
            case 1006: printf("Hello User6!\n"); break;
            case 1007: printf("Hello User7!\n"); break;
            case 1008: printf("Hello User8!\n"); break;
            case 1009: printf("Hello User9!\n"); break;
            case 1010: printf("Hello User10!\n"); break;
            case 1011: printf("Hello User11!\n"); break;
            case 1012: printf("Hello User12!\n"); break;
            case 1013: printf("Hello User13!\n"); break;
            case 1014: printf("Hello User14!\n"); break;
            case 1015: printf("Hello User15!\n"); break;
            case 1016: printf("Hello User16!\n"); break;
            case 1017: printf("Hello User17!\n"); break;
            case 1018: printf("Hello User18!\n"); break;
            case 1019: printf("Hello User19!\n"); break;
            case 1020: printf("Hello User20!\n"); break;
            case 1021: printf("Hello User21!\n"); break;
            case 1022: printf("Hello User22!\n"); break;
            case 1023: printf("Hello User23!\n"); break;
            case 1024: printf("Hello User24!\n"); break;
            case 1025: printf("Hello User25!\n"); break;
            case 1026: printf("Hello User26!\n"); break;
            case 1027: printf("Hello User27!\n"); break;
            case 1028: printf("Hello User28!\n"); break;
            case 1029: printf("Hello User29!\n"); break;
            case 1030: printf("Hello User30!\n"); break;
            case 1031: printf("Hello User31!\n"); break;
            case 1032: printf("Hello User32!\n"); break;
            case 1033: printf("Hello User33!\n"); break;
            case 1034: printf("Hello User34!\n"); break;
            case 1035: printf("Hello User35!\n"); break;
            case 1036: printf("Hello User36!\n"); break;
            case 1037: printf("Hello User37!\n"); break;
            case 1038: printf("Hello User38!\n"); break;
            case 1039: printf("Hello User39!\n"); break;
            case 1040: printf("Hello User40!\n"); break;
            case 1041: printf("Hello User41!\n"); break;
            case 1042: printf("Hello User42!\n"); break;
            case 1043: printf("Hello User43!\n"); break;
            case 1044: printf("Hello User44!\n"); break;
            case 1045: printf("Hello User45!\n"); break;
            case 1046: printf("Hello User46!\n"); break;
            case 1047: printf("Hello User47!\n"); break;
            case 1048: printf("Hello User48!\n"); break;
            case 1049: printf("Hello User49!\n"); break;
            case 1050: printf("Hello User50!\n"); break;

            default:
                printf("You are not logged in\n");
                c++;  // increment failed login counter
                break;
        }

        if (ID >= 1001 && ID <= 1050) {
            printf("Hello and Welcome to The WonderLand System ||<>||\n");
            break;
        }

        if (c == 3) {
            printf("Hey, you tried to sign in the system too many times!\n");
            printf("You are not logged in. FAKE!\n");
            break;
        }
    }

    // Final message depending on login status
    if (c == 3) {
        printf("You should call the support team to recover your ID Number.\n");
    } else {
        printf("Thanks for logging into the system!\n");
    }

    return 0;
}
