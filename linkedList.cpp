#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = n;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<< temp -> data<<" -> ";
        temp = temp -> next;
    }
    cout<<"NULL"<<endl;
}

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    n -> next = head;
    head = n;
}

bool search(node* head,int key){
    node* temp = head;
    while(temp != NULL){
        if(temp -> data == key){
            return true;
        }
        temp = temp -> next;
    }
    return false;
}

bool searchRecursive(node* head,int key){
    if(head == NULL){
        return false;
    }
    if(head -> data == key){
        return true;
    }
    else{
        return searchRecursive(head -> next,key);

    }

}

void buildList(node* &head){
    int data;
    cin>>data;

    while(data != -1){
        insertAtTail(head,data);
        cin>>data;
    }
}

istream& operator>>(istream &is,node* &head){
    buildList(head);
    return is;
}

ostream& operator<<(ostream &os,node* &head){
    display(head);
    return os;
}

node* midPoint(node* &head){
    if(head == NULL || head -> next == NULL){
        return head;
    }

    node* slow = head;
    node* fast = head -> next;

    while(fast != NULL && fast -> next != NULL){
        fast = fast -> next -> next;
        slow = slow -> next;
    }
    return slow;
}

node* merge(node* a,node* b){
    if(a == NULL){
        return b;
    }
    else if(b == NULL){
        return a;
    }
    node* c;

    if(a -> data < b-> data){
        c = a;
        c -> next = merge(a -> next,b);
    }
    else{
        c = b;
        c -> next = merge(a,b -> next);
    }
    return c;
}

node* mergesort(node* head){
    //base case
    if(head == NULL || head-> next == NULL){
        return head;
    }

    node* mid = midPoint(head);
    node* a = head;
    node* b = mid -> next;
    mid -> next = NULL;

    a = mergesort(a);
    b = mergesort(b);

    node* c = merge(a,b);
    return c;
}

int length(node* &head){
    int len = 0;
    while(head != NULL){
        head = head -> next;
        len += 1;
    }
    return len;
}

void insertAtMiddle(node* &head,int val,int p){
    if(head == NULL || p == 0){
        insertAtHead(head,79);
    }
    else if(p > length(head)){
        insertAtTail(head,79);
    }
    else{
        int jump = 1;
        node* temp = head;
        while(jump <= p-1){
            temp = temp -> next;
            jump += 1;
        }
        node* n = new node(val);
        n -> next = temp -> next;
        temp -> next = n;
    }
}

void deletion(node* &head, int val){
    if(head == NULL){
        return;
    }
    if(head -> next == NULL){
        delete head;
    }
    node* temp = head;
    while(temp -> next -> data != val){
        temp = temp ->next;
    }

    node* todelete = temp -> next;
    temp ->next = temp -> next -> next;
    delete todelete;
}

void deleteAtHead(node* &head){
    node* todelete = head;
    head = head -> next;
    delete todelete;
}

int main(){
    node* head = NULL;
    /*insertAtTail(head,56);
    insertAtTail(head,6);
    insertAtTail(head,35);
    display(head);
    insertAtMiddle(head,79,2);
    display(head);
    insertAtHead(head,1);
    display(head);
    cout<<search(head,35)<<endl;
    cout<<search(head,0)<<endl;
    deletion(head,6);
    display(head);
    deleteAtHead(head);
    display(head);*/

    /*buildList(head);
    display(head);*/

   // node* head2 = NULL;
    cin>>head;
    //>>head2;
    cout<<head<<endl;
    //<<head2;
   head = mergesort(head);
   cout<<head;


    return 0;
}