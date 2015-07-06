#include<iostream>
#include<malloc.h>
using namespace std;
class bst
{
public:
 int data;
 bst *left,*right;
 bst *insert(bst *root,int val)
 {
   if(root==NULL)
   {
     root=new bst;
     root->data=val;
     root->left=NULL;
     root->right=NULL;

     }
     else
     if(val<root->data)
     root->left=insert(root->left,val);
     else
     if(val>root->data)
     root->right=insert(root->right,val);
     return root;
}
void preorder(bst *root)
{
    if(root)
   {
     cout<<"\n"<<root->data;
     preorder(root->left);
     preorder(root->right);
    }
}
void inorder(bst *root)
{

  if(root)
  {
    inorder(root->left);
    cout<<"\n"<<root->data;
    inorder(root->right);
}
}
void postorder(bst *root)
{

  if(root)
  {
    postorder(root->left);
    postorder(root->right);
    cout<<"\n"<<root->data;
}
}
bst *findmin(bst *root)
{
  if(root==NULL)
  return NULL;
  else
  {
  while(root->left)
  root=root->left;
  return root;
  }
  }


bst *delete1(bst*root,int val)
{
  bst *temp;
  if(root==NULL)
  return NULL;
  else if(val<root->data)
  root->left=delete1(root->left,val);
  else
  if(val>root->data)
  root->right=delete1(root->right,val);
  else
  if(root->left && root->right)
  {
     temp=findmin(root->right);

     root->data=temp->data;
     root->right=delete1(root->right,temp->data);
    }
    else
    {
      temp=root;
      if(root->left==NULL)
      root=root->right;
      else
      if(root->right==NULL)
      root=root->left;
      free(temp);
    }

    return root;
}
};

      int main()
      {
         bst *root=NULL,a;
         int data1[10]={1,2,3,4,5,6,7,8,9,10},i;
         for(i=0;i<10;i++)
         root=a.insert(root,data1[i]);
         cout<<"\n"<<"Preorder";
         a.preorder(root);
         cout<<"\n"<<"Inorder";
         a.inorder(root);
         cout<<"\n"<<"Postorder";
         a.postorder(root);
         root=a.delete1(root,7);
         a.inorder(root);
         return 0;
        }





