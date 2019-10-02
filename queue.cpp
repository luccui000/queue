#include <iostream>
using namespace std;
/*************************************************************************************************
 * Class : Queue (Hang Doi  < Last In Last Out > )
 * Func : empty
 ************************************************************************************************/

class Queue
{
    public:
        Queue();
        ~Queue();
        // Kiem tra hang doi co dang rong hay khong
        bool isEmpty();
        // Lay kich thuoc (so phan tu hien co) cua hang doi
        int getSize(){
            return size + 1;
        }
        // Them phan tu e vao cuoi hang doi
        void enqueue(int e);
        // Xoa phan tu o dau hang doi
        int dequeue();
    private:
        struct Node
        {
            int elem;
            Node * next;
        };
        Node * front; // con tro toi nut dau danh sach
        Node * back; // con tro toi nut cuoi danh sach
        int size;
};
bool Queue::isEmpty(){
    Node *p;
    if(p->next == NULL)
        return true;
    return false;
}
void Queue::enqueue(int e){
    Node *p = new Node;
    if(p->next == NULL){
        p->elem = e;
        p->next = NULL;
    }else{
        p = p->next;
        p->elem = e;
    }
}

int main(){

}