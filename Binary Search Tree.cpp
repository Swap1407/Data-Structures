#include<iostream>
using namespace std;

struct node
{
    int data;
    node* left,*right;
};

class bt
{
    public:
    void create(node* root,node* New);
    node* getNode();
    void preorder(node*);
    void inorder(node*);
    void postorder(node*);
    void search(node*, int val);
};

node* bt :: getNode()
{
    node *New = new node;
    New->left = NULL;
    New->right = NULL;
    cout<<"enter the value"<<endl;
    cin>>New->data;
    return New;
};


void bt :: create(node* root,node* New)
{
    if(root->data > New->data)
	{
        if(root->left==NULL)
        root->left=New;
        else
        create(root->left, New);
    }
    else
    {
        if(root->right==NULL)
        root->right=New;
        else
        create(root->right, New);
        }
};

void bt ::preorder(node *temp)
{
    if(temp!=NULL)
	{
        cout<<endl<<temp->data;
        preorder(temp->left);
        preorder(temp->right);
    }
};

void bt ::inorder(node *temp)
{
    if(temp!=NULL)
	{
        inorder(temp->left);
        cout<<endl<<temp->data;
        inorder(temp->right);
    }
}

void bt ::postorder(node *temp)
{
    if(temp!=NULL)
	{
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data;
    }
}

void bt :: search(node *temp, int val)
{
    if(temp->data == val)
	{
        cout<<"number is present";
    }
    else if(temp->data > val)
	{
        if(temp->left == NULL)
		{
            cout<<"number is not present";
           return;
        }
        else  
		{
        temp = temp->left;
        if(temp->data == val)
		{
           cout<<"number is present";
           return;
           }
        
        else 
            search(temp, val);
        };
    }
    else if(temp->data < val)
	{
        temp = temp->right;
        if(temp == NULL)
		{
             cout<<"number is not present";
           return;
        }
        else 
		{
            temp = temp->right;
            if(temp->data == val)
			{
           cout<<"number is present";
           return;
           }
           else
            search(temp, val);
    }
    }

    else if( temp->left == NULL && temp->right == NULL)
	{
        cout<<"number is not  present";
        return;
           }
}


int main()
{
    bt b;    
    node* root= NULL, *New;
    int ch,val,n,i;
    cout<<"\n1:Create\n2inorder""\n3:preorder\n4:Postorder\n5:search\n6:Exit";
    while(1)
	{
	    cout<<"\n Please enter the choice"<<endl;
        cin>>ch;

        switch (ch)
     {
        case 1:
        cout<<"\nEnter no of nodes: ";
        cin>>n;
        for(i=0;i<n;i++)
        {
            New=b.getNode();
            if(root==NULL)
            root=New;
            else
            b.create(root,New);
            }
            break;

        case 2:
        if(root==NULL)
        cout<<"\nnot";
        else
        b.inorder(root);
        break; 

        case 3:
        if(root==NULL)
        cout<<"\nnot";
        else
        b.preorder(root);
        break;  

        case 4:
        if(root==NULL)
        cout<<"\nnot";
        else
        b.postorder(root);
        break; 

        case 5:
        cout<<"which no. you want to search: ";
        cin>>val;
        b.search(root,val);       
        break;

        default:
        exit(0);
     }
    }
}
