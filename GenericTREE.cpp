#include<iostream>
#include<vector>
#include<queue>

using namespace std;

template<typename T>
class TreeNode{
    public:
    T data;
    vector<TreeNode<T>*> children;

    TreeNode(T data){
        this -> data = data;
    }
};

TreeNode<int>* levelWiseInput(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);

    while(pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<"Enter number of children of "<<front-> data<<endl;
        int numChild;
        cin>>numChild;
        for(int i = 0; i < numChild;i++){
            int childData;;
            cout<<"Enter" << i <<"th child of" << front-> data<<endl;
            cin>>childData;
            TreeNode<int>* child = new TreeNode<int>(childData);
            front -> children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}

/*void printTreeLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0){
        TreeNode<int>* front = pendingNodes.front();
        pendingNodes.pop();
        cout<<front -> data<<":";
        for (int i = 0; i < front->children.size(); i++){
            cout<<front ->children[i] -> data<<",";
            pendingNodes.push(front ->children[i]);
            printTreeLevelWise(front->children[i]);
        }
        cout<<endl;
        
    }
    
    return;
}*/

int countNodes(TreeNode<int>* root){
    int count = 1;
    for(int i = 0; i < root -> children.size();i++){
        count += countNodes(root -> children[i]);
    }
    return count;
}

void preorder(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    cout<< root -> data<<" ";
    for(int i = 0; i < root -> children.size();i++){
        preorder(root -> children[i]);
    }
}

void postorder(TreeNode<int>* root){
    if(root == NULL){
        return;
    }
    
    for(int i = 0; i < root -> children.size();i++){
        preorder(root -> children[i]);
    }
    cout<< root -> data<<" ";
}

TreeNode<int>* takeInput(){
    int rootData;
    cout<<"Enter data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);

    int n;
    cout<<"Enter number of children of "<<rootData<<endl;
    cin>>n;
    for (int i = 0; i < n; i++){
        TreeNode<int>* child = takeInput();
        root -> children.push_back(child);
    }
    return root;
}

void printTree(TreeNode<int>* root){
    if(root == NULL){
        return;//edge case
    }

    cout<<root -> data <<":";
    for(int i = 0; i < root -> children.size();i++){
        cout<<root -> children[i] -> data<<",";
    }
    cout<<endl;
    for(int i = 0; i < root -> children.size();i++){
        printTree(root -> children[i]);
    }
}

int main(){

    TreeNode<int>* root = levelWiseInput();

    //printTreeLevelWise(root);
    printTree(root);
    cout<<endl;
    cout<<countNodes(root);
    return 0;
}