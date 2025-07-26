#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;
    Node* back;

    Node(int data1, Node* next1, Node* back1){
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1){
        data = data1;
        next = NULL;
        back = NULL;
    }
};

Node* convert(vector<int> &v){
    Node* head = new Node(v[0]);
    Node* temp = head;

    for(int i = 1; i < v.size(); i++){
        Node* newNode = new Node(v[i]);
        temp->next = newNode;
        newNode->back = temp;
        temp = temp->next;
    }
    return head;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    
    temp->next = NULL;
    head->back = NULL;
    delete temp;
    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* prev = temp->back;
    prev->next = NULL;
    temp->back = NULL;
    
    delete temp;
    return head;
}

Node* deleteKthElement(Node* head, int k){
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL && prev == NULL){
        delete temp;
        return NULL;
    }
    else if(prev == NULL){
        head = deleteHead(head);
        return head;
    }
    else if(front == NULL){
        head = deleteTail(head);
        return head;
    }
    else {
        prev->next = front;
        front->back = prev;

        temp->next = NULL;
        temp->back = NULL;
        delete temp;
        return head;
    }
}

void deleteNode(Node* temp){
    Node* prev = temp->back;
    Node* front = temp->next;

    if(front == NULL){
        prev->next = NULL;
        temp->back = NULL;
        delete temp;
        return; 
    }
    prev->next = front;
    front->back = prev;

    temp->next = NULL;
    temp->back = NULL;
    delete temp;
}

Node* insertHead(Node* head, int val){
    Node* newNode = new Node(val, head, nullptr);
    head->back = newNode;
    return newNode;
}

Node* insertTail(Node* head, int val){
    if(head == NULL) return new Node(val);
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val, nullptr, temp);
    temp->next = newNode;
    return head;
}

Node* insertKthElement(Node* head, int k, int val){
    if(k == 1){
        Node* newNode = new Node(val, head, nullptr);
        head->back = newNode;
        return newNode;
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k - 1) break;
        temp = temp->next;
    }
    Node* newNode = new Node(val, temp->next, temp);
    temp->next->back = newNode;
    temp->next = newNode;

    return head;
}

void insertNode(Node* temp, int val){
    Node* prev = temp->back;
    Node* newNode = new Node(val, temp, prev);
    prev->next = newNode;
    temp->back = newNode;
}

int main(){
    vector<int> v = {2, 3, 4, 1};
    Node* head = convert(v);
    insertNode(head->next->next, 5);
    printLL(head);
}