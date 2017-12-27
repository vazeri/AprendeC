//**************************************
// Name: A Simple Binary Tree Program
// Description:To Learn and use and traversals in a binary tree
// By: technicalganesh
//
//This code is copyrighted and has// limited warranties.Please see http://www.Planet-Source-Code.com/vb/scripts/ShowCode.asp?txtCodeId=10930&lngWId=3//for details.//**************************************
#include<conio.h>
#define PREORDER 1
#define POSTORDER 2
#define INORDER 3
#include "binaryTree.h"
#include <iostream>
using namespace std;

class TreeNode
{
	public:
	TreeNode *LChild;
	char val;
	TreeNode *RChild;
	TreeNode()
	{
		LChild=NULL;
		RChild=NULL;
	}
};
class Tree
{
	private:
		TreeNode *Root;
		void Attach(TreeNode *t, TreeNode *n)
		{
			if(t->val>n->val)
			{
				if(t->LChild==NULL)
					t->LChild=n;
				else
					Attach(t->LChild,n);
			}
			if(t->val<n->val)
			{
				if(t->RChild==NULL)
					t->RChild=n;
				else
					Attach(t->RChild,n);
			}
		}
		void PreOrder(TreeNode *t)
		{
			if(t!=NULL)
			{
				cout<<" "<<t->val;
				PreOrder(t->LChild);
				PreOrder(t->RChild);
			}
		}
		void InOrder(TreeNode *t)
		{
			if(t!=NULL)
			{
				InOrder(t->LChild);
				cout<<" "<<t->val;
				InOrder(t->RChild);
			}
		}
		void PostOrder(TreeNode *t)
		{
			if(t!=NULL)
			{
				PostOrder(t->LChild);
				PostOrder(t->RChild);
				cout<<" "<<t->val;
			}
		}
		int search(TreeNode *LocalRoot, int v, TreeNode **x, TreeNode **parent, int *found)
		{
			*found=0;
			*parent=NULL;
			*x=NULL;
			while((LocalRoot!=NULL)&&(!(*found)))
			{
				if(LocalRoot->val==v)
				{
					*found=1;
					*x=LocalRoot;
				}
				else
				{
					*parent=LocalRoot;
					if(LocalRoot->val>v)
						LocalRoot=LocalRoot->LChild;
					else
						LocalRoot=LocalRoot->RChild ;
				}
			}
		}
	public:
		Tree()
		{
			Root=NULL;
		}
		void AddNode(char v)
		{
			TreeNode *n=new TreeNode;
			n->val=v;
			if(Root==NULL)
				Root=n;
			else
				Attach(Root,n);
		}
		void Traverse(int Order)
		{
			switch(Order)
			{
				case PREORDER: PreOrder(Root);break;
				case POSTORDER: PostOrder(Root);break;
				case INORDER: InOrder(Root);
			}
			cout<<endl;
		}
		void Remove(int v)
		{
			TreeNode *parent, *x, *xsucc,*xc;
			int found;
			if(Root!=NULL)
			{
				search(Root, v,&x,&parent,&found);
				if(found)
				{
					if((x->LChild!=NULL)&&(x->RChild!=NULL))
					{
						xsucc=x->RChild;
						xc=NULL;
						while(xsucc->LChild!=NULL)
						{
							xc=xsucc;
							xsucc=xsucc->LChild;
						}
						x->val=xsucc->val;
						if(xc!=NULL)
							xc->LChild=xsucc->RChild;
						else
							x->RChild=xsucc->RChild;
						delete(xsucc);
					}
					else
					{
						if(x->LChild!=NULL)
						{
							if(parent!=NULL)
							{
								if(parent->LChild==x)
									parent->LChild=x->LChild;
								else
									parent->RChild=x->LChild;
							}
							else
								Root=x->LChild;
						}
						else
						{
							if(x->RChild!=NULL)
							{
								if(parent!=NULL)
								{
									if(parent->LChild==x)
										parent->LChild=x->RChild;
									else
										parent->RChild=x->RChild;
								}
								else
									Root=x->RChild;
							}
							else
							{
								if(parent!=NULL)
								{
									if(parent->LChild==x)
										parent->LChild=NULL;
									else
										parent->RChild=NULL;
								}
								else
									Root=NULL;
							}
						}
						delete(x);
					}
				}
			}
		}
};

int main()
{
	Tree s;
	char ch,x;
	do
	{
		//clrscr();
		cout<<"Tree"<<endl;
		cout<<"Pre Order: ";
		s.Traverse(PREORDER);
		cout<<"In Order: ";
		s.Traverse(INORDER);
		cout<<"Post Order: ";
		s.Traverse(POSTORDER);
		cout<<"Menu..."<<endl;
		cout<<"1. Insert"<<endl<<"2. Remove"<<endl;
		cout<<"3. Exit"<<endl<<"Enter the Choice: ";
		ch=getche();
		switch(ch-48)
		{
			case 1:
				cout<<endl<<"Enter the Charactor to be Inserted: ";
				x=getche();
				getch();
				s.AddNode(x);
				break;
			case 2:
				cout<<endl<<"Enter the Charactor to be Removed: ";
				x=getche();
				s.Remove(x);
				getch();
				break;
		}
	}while(ch-48!=3);
}
