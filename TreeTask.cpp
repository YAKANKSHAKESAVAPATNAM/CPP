#include<iostream>
using namespace std;
class Node{
	public:
		int Data;
		Node* Left;
		Node* Right;
		Node(int value){
			Data=value;
			Left=NULL;
			Right=NULL;
			
		}
		
};
int main(){
		Node* Parent=new Node(100);
		Node* Child1=new Node(80);
		Node* Child2=new Node(90);
		Node* Child3=new Node(70);
		Node* Child4=new Node(60);
		Node* Child5=new Node(120);
		Node* Child6=new Node(150);
		Node* Child7=new Node(50);
		
		
			
		Parent->Left=Child1;
		Parent->Right=Child2;
		Child1->Left=Child3;
		Child1->Right=Child4;
		Child2->Left=Child5;
		Child2->Right=Child6;
		Child3->Left=Child7;
			
			cout<<Parent->Data<<endl;
			cout<<Parent->Left->Data<<endl;
			cout<<Parent->Right->Data<<endl;
			cout<<Child1->Left->Data<<endl;
			cout<<Child1->Right->Data<<endl;
			cout<<Child2->Left->Data<<endl;
			cout<<Child2->Right->Data<<endl;
			cout<<Child3->Left->Data<<endl;
			
			Node* temp=Parent;
			while(temp!=NULL){
				cout<<temp->Data<<" ";
				temp=temp->Left;
			}
			cout<<endl;
			
			
			
			
			
	
return 0;	
}
