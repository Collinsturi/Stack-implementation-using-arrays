#include<iostream>
#define maxsize 10
using namespace std;

struct stack{
	int num[maxsize];
	int top = -1;

	void push(int data){
		if(top == maxsize -1){
			cout<<"Stack overflow";
			return; 
		}
		top++;
		num[top] = data;
	}

	void pop(){
		if(top == -1){
			cout<<"The stack is empty.";
			return;
		}
	
		top--;
	}
	int returntop(){
		return num[top];
	}
	void print(){
		cout<<"The Stack: ";
		for(int i = 0; i <= top; i++){
			cout<<num[i]<<", ";
		}
		cout<<endl;
	}	
};

int main(){
	stack stack1;
	
	stack1.push(3);
	stack1.push(4);
	stack1.push(5);
	stack1.push(6);
	stack1.push(7);
	
	stack1.print();
	
	stack1.pop();
	stack1.pop();
	
	stack1.print();
	
	
}
