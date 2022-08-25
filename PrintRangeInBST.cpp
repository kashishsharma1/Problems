#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }

};

void printRange(Node* root, int k1, int k2){
    if(root == NULL){
        return;
    }

    if(k1 < root -> data){
        printRange(root -> left,k1,k2);
    }

    if(k1 <= root -> data and k2 >= root -> data){
    cout<<root -> data<<" ";
    }

    printRange(root -> right,k1,k2);
    
}


int main(){

    int k1,k2;
    cout<<"Enter k1 and k2"<<endl;
    cin>>k1>>k2;

    Node* root = new Node(40);
    root -> left = new Node(20);
    root -> right = new Node(60);
    root -> left -> left = new Node(10);
    root -> left -> right = new Node(30);
    root -> right -> left = new Node(50);
    root -> right -> right = new Node(70);

    printRange(root,k1,k2);
    return 0;
}