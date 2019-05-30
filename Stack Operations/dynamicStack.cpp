# include<iostream.h>
#include<process.h>
#include<conio.h>
struct student
{
 int Rollno;
 char Name[20];
 student *link;
} *np,*temp;

class Stack
{
    student *top;
  public:
   Stack()
   {
	top=NULL;
   }
   void Push();
   void Pop();
   void Display();
};

void Stack::Push()
{
   np=new student;
   if(np==NULL)
    {
       cout<<"\n Memory Overflow";
       exit(0);
    }
    cout<<"Enter the Rollno and name to be inserted";
    cin>>np->Rollno;
    cin>>np->Name;
    np->link=NULL;
    if(top==NULL)
       top=np;
    else
    {
	np->link=top;
	top=np;
    }
 }

 void Stack::Pop()
 {
   if( top==NULL)
   {
      cout<<"\n Stack Underflow";
      getch();
      exit(0);
    }
    temp=top;
    top=top->link;
    cout<<"The deleted element = "<<temp->Rollno<<"  "<<temp->Name<<"\n";
    delete temp;
  }

 void Stack::Display()  // Function to display all nodes from stack
 {
   clrscr();
   cout<<"\n \n";
   if (top==NULL)
   {
     cout<<"Stack Underflow";
     exit(0);
    }
    temp=top;
    cout<<"TOP ";
    while(temp!=NULL)
    {
      cout<<"<-"<<temp->Rollno<<" "<<temp->Name;
      temp=temp->link;
    }
    cout<<" End";
 }
 void main()
 {
   int choice;
   clrscr();
   Stack S;
   do
   {  clrscr();
      cout<<"\n    DYNAMIC IMPLEMENTATION OF STACK    \n\n";
      cout<<"\n            M A I N  M E N U \n";
      cout<<"\n       1----> Push Operation  \n";
      cout<<"\n       2----> Pop Operation   \n";
      cout<<"\n       3----> Display all the Elements \n";
      cout<<"\n       4----> Exit\n\n";
      cout<<"Select your choice :";
      cin>>choice;
      switch(choice)
      {
       case 1: S.Push();
	       cout<<"\n Data is inserted. \n Press any key to continue ...";
	        break;
       case 2: S.Pop();
	       cout<<"\n Press any key to continue ...";
	       break;
       case 3: S.Display();
	       cout<<"\n Press any key to continue ...";
	       break;
       }
       getch( );
 }while(choice!=4);
}
