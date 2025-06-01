#include <stdio.h>
#include <string.h>

// Function to remove a task at a given index
void remove_item(char array[][50], int *tasks, int idx) {
    if (idx < 0 || idx >= *tasks) {
        printf("Invalid index.\n");
        return;
    }
    // Shift tasks up to fill the removed spot
    for (int i = idx; i < *tasks - 1; i++) {
        strcpy(array[i], array[i+1]);
    }
    (*tasks)--; // Decrease task count
    printf("Updated list:\n");
    for (int i = 0; i < *tasks; i++) {
        printf("%d. %s\n", i+1, array[i]);
    }
}

// Function to ask if user wants to display the list
int display_list(void) {
    char x;
    printf("Do you want to see your current list? (Y)es or (N)o: ");
    scanf(" %c", &x);
    return (x == 'Y' || x == 'y');
}

int main(void) {
    int x, c = 0;
    printf("Welcome to the TO-DO LIST program\n");
    printf("Enter the number of tasks you have in mind: ");
    scanf("%d", &x);
    getchar(); // Clear newline from input buffer

    char array[x][50], item[50], ch;

    // Add tasks to the list
    for (int i = 0; i < x; i++) {
        printf("Adding list item %d\n", i+1);
        printf("Enter the name of item: ");
        fgets(item, sizeof(item), stdin);
        item[strcspn(item, "\n")] = 0; // Remove newline
        strcpy(array[i], item);
        c++;
        printf("Do you want to continue adding to list? y/n: ");
        scanf(" %c", &ch);
        getchar(); // Clear newline
        if (ch == 'n' || ch == 'N') {
            break;
        }
    }

    // Display the list if user wants
    if (display_list()) {
        for (int i = 0; i < c; i++) {
            printf("List item %d => %s\n", i+1, array[i]);
        }
    } else {
        printf("You have a total of %d items in your current list\n", c);
    }

    // Remove a task by index
    int idx;
    char R;
    do{
    printf("Enter the item number you want to remove from the list: ");
    scanf("%d", &idx);
    idx -= 1; // Convert to 0-based index
    remove_item(array, &c, idx);
    printf("do you want to remove anyother item? yes or no");
    scanf(" %c",&R);
    } while (R!='n'||R!='N');
    return 0;
}
