#include<iostream.h>
#include<process.h>
#include<conio.h>
#define n 5
class STACK
{
   int st[n];
   int top;
  public:
   STACK()
   {
     top=-1;
   }
  void Push();
  void Pop();
  void Display();
};

void STACK:: Push()  // Function to insert an element into stack
{
  clrscr();
  if( top==n-1)
  {
    cout<<" Stack is Full " ;
    getch();
    exit(0);
  }
  top++;
  cout<<"Enter the element to be inserted ";
  cin>>st[top];
 }
void STACK:: Pop() // Function to delete a Node from stack.
{
  clrscr();
  if(top == -1)
  {
       cout<<"Stack Underflow";
       getch();
       exit(0);
  }
  cout<<" The deleted element is " << st[top];
  top--;
}
void STACK:: Display() // Function to display all elments from a stack
{
  clrscr();
  cout<<"Top  \n";
  for(int i=top; i>=0;i--)
    cout<<st[i]<<"\n";
}

void main()
{
   int choice;
   clrscr();
   STACK S;
   do
   {
      clrscr();
      cout<<"\n    STATIC IMPLEMENTATION OF STACK    \n\n";
      cout<<"\n            M A I N  M E N U \n";
      cout<<"\n       1----> Push Operation  \n";
      cout<<"\n       2----> Pop  Operation  \n";
      cout<<"\n       3----> Display all the elements \n";
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
  }
    getch( );
   } while(choice!=4);
  }
