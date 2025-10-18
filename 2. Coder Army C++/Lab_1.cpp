#include <stdio.h>
#include <stdlib.h>
#define MAX 5
struct Stack {
    int arr[MAX];
    int top;
};
void initStack(struct Stack* s) {
    s->top = 2;
    s->arr[0] = 10;
    s->arr[1] = 20;
    s->arr[2] = 30;
}
int isEmpty(struct Stack* s) {
    return s->top == -1;
}
int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}
void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        s->arr[++(s->top)] = value;
        printf("%d pushed to stack\n", value);
    }
}
void pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack Underflow! Cannot pop\n");
    } else {
        printf("%d popped from stack\n", s->arr[s->top--]);
    }
}
void peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Top element: %d\n", s->arr[s->top]);
    }
}
void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = s->top; i >= 0; i--) {
            printf("%d ", s->arr[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack s;
    initStack(&s);
    int choice, value;
    printf("Initial Stack:\n");
    display(&s);

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &value);
            push(&s, value);
            break;
        case 2:
            pop(&s);
            break;
        case 3:
            peek(&s);
            break;
        case 4:
            display(&s);
            break;
        case 5:
            printf("\nFinal Stack before exit:\n");
            display(&s);
            exit(0);
        default:
            printf("Invalid choice! Try again.\n");
        }
    }
    return 0;
}
