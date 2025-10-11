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
			
		Node* Parent=new Node(72);
		Node* Child1=new Node(12);
		Node* Child2=new Node(159);
			
		Parent->Left=Child1;
		Parent->Right=Child2;
			
			cout<<Parent->Data<<endl;
			cout<<Parent->Left->Data<<endl;
			cout<<Parent->Right->Data;
	
	
	return 0;
}
