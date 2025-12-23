#include <stdio.h>
#include <string.h>

#define MAX 50
#define SIZE 100

int main() {
    char list[MAX][SIZE];
    int count = 0;
    int ch = 0;

    while (ch != 3) {
        printf("\nTO DO LIST\n");
        printf("1. Add\n");
        printf("2. Show\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &ch);
        getchar();

        if (ch == 1) {
            if (count < MAX) {
                printf("Enter task: ");
                fgets(list[count], SIZE, stdin);
                list[count][strcspn(list[count], "\n")] = '\0';
                count++;
                printf("Added\n");
            } else {
                printf("List full\n");
            }
        }
        else if (ch == 2) {
            if (count == 0) {
                printf("No tasks\n");
            } else {
                printf("Tasks:\n");
                for (int i = 0; i < count; i++) {
                    printf("%d %s\n", i + 1, list[i]);
                }
            }
        }
        else if (ch == 3) {
            printf("Bye\n");
        }
        else {
            printf("Wrong choice\n");
        }
    }

    return 0;
}
