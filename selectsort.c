#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    int number;
    struct node* next;
} node;

int main(int argc, char* argv[]){
    //Initializing list
    node* list = NULL;
    //Adding CLI values to list
    for (int i = 1; i < argc; i++){
        int number = atoi(argv[i]);

        node* n = malloc(sizeof(node));
        if (n == NULL){
            free(n);
            return 1;
        }   

        n->number = number;
        n->next = list;
        list = n;
    }

    node* sorted = list;
    //Pointer to where the lowest value in the list is
    node* low_index;

    //Iterating through the list
    for (node* i = list; i != NULL; i = i->next){
        long low = 3e8; //Probably a bad solution, but initializing high number
        
        //Starting point moves up 1 for every iteration
        //Iterates through remaining values and finds lowest
        for (node* j = i; j != NULL; j = j->next){ 
            if (j->number < low){
                low = j->number;
                low_index = j->next;
            }
        }

        //Finds where the lowest value initially was
        //and replaces it with the first value in the list
        for (node* j = i; j != NULL; j = j->next){
            if (low_index == j->next){
                j->number = i->number;
            }
        }

        sorted->number = low;
        printf("%i\n", sorted->number);
        sorted = sorted->next;
    }
    return 0;
}


