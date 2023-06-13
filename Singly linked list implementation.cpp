#include<iostream>
#include<string>
using namespace std;

template<typename T>
class List{
private:
    template<typename T_1>
    class Node{
    public:
        Node *pNext;
        T date;
        Node(T_1 data = T_1(), Node *pNext = nullptr): pNext(pNext), date(data){}
    };
    
    int Size;
    Node<T> *head;
public:
    List();
    ~List();
    void Push_Back(T data);
    void Pop_front();
    int Get_Size(){return Size;}
    void clear();
    void push_front(T data);
    void insert(int index, T data);
    void removeAT(int index);
    void Pop_Back();
    T& operator[](const int index);
};

template<typename T>
List<T>::List(){
    Size = 0;
    head = nullptr;
}
template<typename T>
List<T>::~List(){
    clear();
}
template<typename T>
void List<T>::Push_Back(T data){
    if(head == nullptr)
        head = new Node<T>(data);
    else{
        Node<T>* current = this -> head;
        while(current->pNext != nullptr){
            current = current -> pNext;
        }
        current -> pNext = new Node<T>(data);
    }
    Size ++;
}
template<typename T>
T& List<T>::operator[](const int index) {
    if (index < 0 || index >= Size)
        throw out_of_range("Index is out of range");

    int counter = 0;
    Node<T>* current = this->head;
    while (current != nullptr) {
        if (counter == index)
            return current->date;
        current = current->pNext;
        counter++;
    }
    
    throw runtime_error("error index");;
}
template<typename T>
void List<T>:: Pop_front(){
    Node<T> *temp = head;
    head = head -> pNext;
    delete temp;
    Size--;
}
template<typename T>
void List<T>::clear(){
    while (Size) {
        Pop_front();
    }
}
template<typename T>
void List<T>::push_front(T data){
    head = new Node<T>(data, head);
    Size++;
}
template<typename T>
void List<T>::insert(int index, T data){
    if(index > List<T>::Get_Size())
        throw "Index out of list";
    else{
        if(index == 0)
            push_front(data);
        else{
            Node<T>* previous = head;
            for (int i = 0; i < index - 1; i++)
                previous = previous->pNext;
            previous -> pNext = new Node<T>(data, previous ->pNext);
            Size++;
        }
    }
}
template<typename T>
void List<T>::removeAT(int index){
    if (index > List<T>::Get_Size())
        throw "Index out of list";
    else{
        if (index == 0)
            Pop_front();
        else{
            Node<T> *previous = head;
            for (int i = 0; i < index - 1; i++)
                previous = previous->pNext;
            
            Node<T> *toDelete = previous ->pNext;
            previous->pNext = toDelete->pNext;
            delete toDelete;
            Size--;
        }
    }
}
template<typename T>
void List<T>::Pop_Back(){
    removeAT(Size-1);
}

int main(){
    List<int> lst;
    lst.Push_Back(5);
    lst.Push_Back(15);
    lst.Push_Back(20);
    for (int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
    lst.Pop_front();
    cout << "Pop Front" << endl;
    for (int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
    cout << "Push front" << endl;
    lst.push_front(324);
    for (int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
    cout << "Insert" << endl;
    lst.insert(1, 99);
    for (int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
    cout << "Remove AT" << endl;
    lst.removeAT(3);
    for (int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
    cout << "Pop back" << endl;
    lst.Pop_Back();
    for (int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
    lst.clear();
    cout << "lst.clear\nElements in list: " << lst.Get_Size() << endl;
}
