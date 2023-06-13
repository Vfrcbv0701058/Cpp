# include <iostream>
using namespace std;

template<typename T1>
class List{
private:
//    create class for one block of data in our list
    template <typename T>
    class Block{
    public:
        T data;
        Block * pNext;
        Block(T data = T(), Block * pNext = nullptr): data(data), pNext(pNext){}
    };
    
    int Size;
    Block<T1> *head;
//    pointer on first Block in our Linked List
public:
    List();
    void Push_back(T1 data);
    int Get_Size(){
        return Size;
    }
    
    T1& operator[](const int index);
};

template<typename T>
List<T>::List(){
    Size = 0;
    head = nullptr;
}
template<typename T>
void List<T>::Push_back(T data){
    if (head == nullptr)
        head = new Block<T>(data);
    else{
        Block<T> *current = head;
        while (current->pNext != nullptr) {
            current = current->pNext;
        }
        current -> pNext = new Block<T>(data);
    }
    Size++;
}

template<typename T>
T& List<T>::operator[](const int index){
    if (index < 0 || index >= Size)
        throw out_of_range("Index is out of range");
    
    Block<T> * current = head;
    int counter = 0;
    while(current != nullptr){
        if(counter == index)
            return current -> data;
        current = current -> pNext;
        counter++;
    }
    
    throw runtime_error("Error index");
}

int main(){
    srand(time(NULL));
    List<int>lst;
    lst.Push_back(543);
    lst.Push_back(8098);
    lst.Push_back(42);
    lst.Push_back(5);
    cout << lst[2] << endl;
    
    int numberCount = 0;
    cout << "Please enter size of list: ";
    cin >> numberCount;
    for (int i = 0; i < numberCount; i++)
        lst.Push_back(rand() % 10);
    for(int i = 0; i < lst.Get_Size(); i++)
        cout << lst[i] << endl;
}
