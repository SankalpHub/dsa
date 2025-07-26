#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* next;

    Node(int data1, Node* next1){
        data = data1;
        next = next1;
    }
    Node(int data1){
        data = data1;
        next = NULL;
    }
};

Node* convert(vector<int> &v){
    Node* head = new Node(v[0]);
    Node* temp = head;

    for(int i = 1; i < v.size(); i++){
        Node* newNode = new Node(v[i]);
        temp->next = newNode;
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

int lengthLL(Node* head){
    int len = 0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    return len;
}

bool searchLL(Node* head, int val){
    Node* temp = head;
    while(temp != NULL){
        if(temp->data == val)
            return true;
        temp = temp->next;
    }
    return false;
}

Node* deleteHead(Node* head){
    if(head == NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    delete temp;

    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = NULL;

    return head;
}

Node* deleteKthElement(Node* head, int k){
    if(head == NULL) return NULL;
    if(k == 1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = nullptr;

    while(temp != NULL){
        k--;
        if(k == 0){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* deleteValue(Node* head, int val){
    if(head == NULL) return NULL;
    if(head->data == val){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head;
    Node* prev = NULL;

    while(temp != NULL){
        if(temp->data == val){
            prev->next = temp->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* insertHead(Node* head, int val){
    return new Node(val, head);
}

Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val, nullptr);
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    
    return head;
}

Node* insertBeforeTail(Node* head, int val){
    if(head == NULL || head->next != NULL){
        return new Node(val, head);
    }
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val, temp->next);
    temp->next = newNode;
    return head;
}

Node* insertKthElement(Node* head, int k, int element){
    if(head == NULL) {
        if(k == 1) return new Node(element, nullptr);
    }
    if(k == 1) {
        return new Node(element, head);
    }
    int cnt = 0;
    Node* temp = head;
    while(temp != NULL){
        cnt++;
        if(cnt == k - 1){
            Node* newNode = new Node(element, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

Node* insertBeforeValue(Node* head, int val, int element){
    if(head->data == val){
        return new Node(element, head);
    }
    Node* temp = head;
    while(temp->next != NULL){
        if(temp->next->data == val){
            Node* newNode = new Node(element, temp->next);
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main(){
    vector<int> v = {1, 8, 9 , 3};
    Node* head = convert(v);
    head = insertKthElement(head, 5, 5);
    printLL(head);
}