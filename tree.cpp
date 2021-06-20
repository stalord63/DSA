#include<bits/stdc++.h>
using namespace std;

struct Node{

int data;
Node *left;
Node *right;
Node(int x){
    data=x;
    left=right=NULL;
}
};
void print( 
     Node* head){

if(head==NULL)
return;
print(head->left);
cout<<head->data<<" ";

print(head->right);




}

int main()
{


Node *root=new Node(10);
root->left=new Node(20);
root->right=new Node(30);
print(root);
return 0;




}













