#include <iostream>
using namespace std;
struct Node{
    int data;
    Node*next;

};
class sll{
    Node*head;
    Node*tail;
public:
    sll(){
        head=NULL;
        tail=NULL;
    }
    void insert(int val) {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            Node *ptr = head;
            while (ptr->next != NULL){
                ptr = ptr->next;
            }
            ptr->next = new_node;
        }
    }
    void insertAtPostition(int val,int pos) {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            Node *pre=new Node;
            Node *cur=new Node;
            Node *temp=new Node;
            cur=head;
           for(int i=1;i<pos;i++){
               pre=cur;
               cur=cur->next;
               }
           temp->data=val;
           pre->next=temp;
           temp->next=cur;
        }
    }
    void push_stack(int val) {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL) {
            head = new_node;
        } else {
            new_node->next=head;
            head=new_node;
        }
    }
    void queue(int val) {
        Node *new_node = new Node;
        new_node->data = val;
        new_node->next = NULL;

        if (head == NULL) {
            head = tail=new_node;
        } else {
            tail->next=new_node;
            tail=new_node;
        }
    }
    void display(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<"  ";
            temp=temp->next;
        }
        cout<<endl;
    }
    void display_stack(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;
        }
    }
    void display_queue(){
        Node* temp=head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main() {
    sll l;
    sll k;
    sll q;
    int llist_count,stack_count,queue_count,n;
    cout<<"1.Linked List"<<endl;
    cout<<"2.Insert in a Specific Position in Linked List"<<endl;
    cout<<"3.Stack"<<endl;
    cout<<"4.Queues"<<endl;
    cout<<"5.Insert linked list to head"<<endl;
    cout<<"6.Insert linked list to tail"<<endl;
    cout<<"Please Enter Number"<<endl;
    cin>>n;
    switch (n) {
        case 1:
            cout<<"Insert linked list :";
            cin >> llist_count;

            for (int i = 0; i < llist_count; i++) {
                int llist_item;
                cin >> llist_item;
                l.insert(llist_item);
            }
            cout<<"Linked List = " ;
            l.display();
            break;
        case 2:
            cout<<"Insert postion and value :";
            int pos,val;
            cin>>pos>>val;
            l.insertAtPostition(val,pos);
            cout<<"After Insert = ";
            l.display();
            break;
        case 3:
            cout<<"Insert Stack :";
            cin>>stack_count;
            for (int i = 0; i < stack_count; i++) {
                int stack_item;
                cin >> stack_item;
                k.push_stack(stack_item);
            }
            cout<<"Stack is = "<<endl;
            k.display_stack();
            break;
        case 4:
            cout<<"Insert Queue :";
            cin>>queue_count;
            for (int i = 0; i < queue_count; i++) {
                int queue_item;
                cin >> queue_item;
                q.queue(queue_item);
            }
            cout<<"Queue = ";
            q.display_queue();
            break;
        case 5:
            cout<<"Insert Linked List :";
            cin>>stack_count;
            for (int i = 0; i < stack_count; i++) {
                int stack_item;
                cin >> stack_item;
                l.push_stack(stack_item);
            }
            cout<<"Insert to Head Linked List = "<<endl;
            l.display();
            break;
        case 6:
            cout<<"Insert Linked List :";
            cin>>queue_count;
            for (int i = 0; i < queue_count; i++) {
                int queue_item;
                cin >> queue_item;
                q.queue(queue_item);
            }
            cout<<"Insert linked list to Tail = ";
            q.display_queue();
            break;
    }
    return 0;
}
