#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node* next;
} node;

int main(int argc, char* argv[]){

    //Creating the linked list
    node* list = NULL;
    int temp;

    for (int i = 1; i < argc; i++){
        int num = atoi(argv[i]);

        node* temp = malloc(sizeof(node));

        if (temp == NULL){
            free(temp);
            return 1;
        }

        temp->number = num;
        temp->next = list;
        list = temp;
    }

    int temp2;
    for (node* i = list; i != NULL; i = i->next){
        for (node* j = i->next; j != NULL; j = j->next){
            if (j->number < i->number){
                temp2 = j->number;
                j->number = i->number;
                i->number = temp2;
            }
        }
    }

    node* ptr = list;
    while (ptr != NULL){
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }

}
