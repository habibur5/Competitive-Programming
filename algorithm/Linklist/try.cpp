#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};
class LinkedList{
    Node* head;
    Node* tail;
public:
    LinkedList(){
        head = tail = NULL;
    }
    void printLinkList(){
        Node* temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next; 
        }

    }
    void push_front(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }else{
            newNode->next = head;
            head = newNode;
        }
        
    }
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL) head = tail = newNode;
        else{
            tail->next = newNode;
            tail = newNode;
        }
    }
    void pop_front(){

    }
    void pop_back(){

    }
};
int main(){
    LinkedList ll;
    ll.push_back(2);
    ll.push_back(3);
    ll.push_back(4);
    ll.push_front(1);

    ll.printLinkList();
    return 0;
}