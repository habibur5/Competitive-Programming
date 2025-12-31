#include <stdio.h>

// Define a new node
struct Node{
    int data;
    struct Node *next;
};
/// create a node function

struct Node* createNode(int data){
    struct Node* newNode = (struct Node*) malloc(sizeof(struct Node));
}

// Function to insert data at the end

void push_back(struct Node** Tail, int data){
    struct Node* newNode = createNode(data);

}

// print the linkedList value

void printLinkedList(struct Node *p){
    while(p !=NULL){
        print("%d ", p->data);
        p = p->next;
    }
}
void push_back(int data){

}

int main(){
    

    return 0;
}