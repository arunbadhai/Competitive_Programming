#include<iostream>

using namespace std;

// linked list
struct node{
  int data;
  node* next;
  node(int dat):data(dat),next(nullptr){}
};

void insertAtHead(node* &head,int data){
  node* newNode = new node(data);
  newNode->next = head;
  head = newNode;
}

void readList(node* &head){
  int x;
  std::cin>>x;

  while(x!=-1){
    insertAtHead(head,x);
    std::cin>>x;
  }
}

void display(node* head){
  while(head != nullptr){
    std::cout<<head->data<<" ";
    head = head->next;
  }
}

// solution function
node* reverseKGroup(node* head, int k){

    

}

int main(){

  node* head = nullptr;
  readList(head);
  display(head);
  cout<<"\n";

  head = deleteDuplicates(head);
  display(head);
  cout<<"\n";

  return 0;
}
