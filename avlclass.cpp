#include<iostream>
using namespace std;
class avl
{

 int data;
  avl *left,*right;
public:
int height( avl *root)
{
 if(root==NULL)
 return 0;
 int lh,rh;
  lh=height(root->left);
  rh=height(root->right);
 return max(lh,rh)+1;
}
int max(int a,int b)
{
return (a>b)?a:b;
}


avl *leftrotation( avl *root)
 {
    struct avl *temp=root->right;
   struct avl *y2=temp->left;
   root->right=y2;
   temp->left=root;
    return temp;
 }
  avl *rightrotation( avl *root)
 {
   struct avl *temp=root->left;
   struct avl *y2=temp->right;
   root->left=y2;
   temp->right=root;

   return temp;
}
 avl *lrrotation( avl *root)
{
  root->left=leftrotation(root->left);
  return rightrotation(root);
}
 avl *rlrotation( avl *root)
{
  root->right=rightrotation(root->right);
  return leftrotation(root);
}
 avl *insert( avl *root,int value)
{
 if(root==NULL)
{
 root=new avl;
 root->data=value;
 root->left=root->right=NULL;
 return root;
 }

if(value<root->data)
{
 root->left=insert(root->left,value);
 if(height(root->left)-height(root->right)>1)
{
 if(value<root->left->data)
{
 root=rightrotation(root);
}
else
root=lrrotation(root);
}
}
else
if(value>root->data)
{
 root->right=insert(root->right,value);
 if(height(root->right)-height(root->left)>1)
{
 if(value>root->right->data)
 root=leftrotation(root);
 else
 root=rlrotation(root);
}
}
return root;
}


void preorder( avl *root)
{
 if(root==NULL)
 return;

 preorder(root->left);
 cout<<"\n"<<root->data;
 preorder(root->right);
 return;
}
};
int main()
{
  avl c;
  avl *root=NULL;
  int a[10],size,i;
  cout<<"Enter size";
  cin>>size;
  for(i=0;i<size;i++)

  cin>>a[i];
  for(i=0;i<size;i++)

    root=c.insert(root,a[i]);



c.preorder(root);
return 0;
}





