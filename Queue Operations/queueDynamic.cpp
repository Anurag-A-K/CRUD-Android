# include<iostream.h>
#include<process.h>
#include<conio.h>
struct Node
{
 int EmpNo;
 char EmpName[20];
 Node *link;
} ;

class Queue
{
  Node *front,*rear;
 public:
  Queue()
  {
     front=NULL;
     rear=NULL;
  }
  void Insert();
  void Delete();
  void Display();
};

void Queue :: Insert()
{
  Node*np=new Node;
   if(np==NULL)
    {  cout<<"\n Memory Overflow";
       getch();
       exit(0);
    }
    cout<<"Enter the EmpNo and Salary to be inserted";
    cin>>np->EmpNo;
    cin>>np->EmpName;
    np->link=NULL;
    if(rear==NULL)
     {
      front=np;
      rear=np;
     }
    else
     { rear->link=np;
       rear=np;
     }
 }

 void Queue::Delete()
 {
   Node*temp=new Node;
   if(front==NULL)
   {
      cout<<"\n Queue Underflow";
      getch();
       exit(0);
   }
   temp=front;
   front=temp->link;
   cout<<"The deleted element = "<<temp->EmpNo<<" "<<temp->EmpName;
   delete temp;
  }

 void Queue::Display()
 {
   Node*temp=new Node;
   if (front==NULL)
   {
     cout<<"Queue is empty";
     getch();
     exit(0);
    }
    cout<<" \n START";
    temp=front;
    while(temp!=NULL)
    {
      cout<<"<-"<<temp->EmpNo<<" "<<temp->EmpName;
      temp=temp->link;
    }
    cout<<"<-Rear";
 }
 void main()
 {
   int choice;
   clrscr();
   Queue Q;
   do
   {  clrscr();
      cout<<" \n        IMPLEMENTATION OF LINKED LIST     \n\n";
      cout<<" \n            M A I N  M E N U \n";
      cout<<" \n       1----> Insert Operation \n";
      cout<<"\n       2----> Delete Operation  \n";
      cout<<"\n       3----> Display all the Nodes \n";
      cout<<"\n       4----> Exit\n\n";
      cout<<"Select your choice :";
      cin>>choice;
     switch(choice)
     {
       case 1: Q.Insert();
	       break;
       case 2: Q.Delete();
	       break;
       case 3: Q.Display();
     }
      cout<<"\n \n Press any key to continue ...";
      getch();
 }while(choice!=4);
}
