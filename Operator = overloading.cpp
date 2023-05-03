#include <iostream>
#include <string>
using namespace std;

class MyClass{
private:
    int size;
public:
    int *data;
    /// Создание и заполнение массива
    MyClass(int size){
        this -> size = size;
// Мы создаем новую вещь и хотим, чтобы она имела размер, поэтому мы устанавливаем размер новой вещи таким, каким мы ее задаем
        /// Заполняем новый массив
        this -> data = new int [size];
        for (int i = 0; i<size; i++)
            data[i] = i;
        cout << "Вызвался конструктор\t" << this << endl;
    }

    /// Конструктор копирования
    MyClass(const MyClass &other){
        cout << "Вызвался конструктор копирования\t" << this << endl;
        this -> size = other.size;
// Мы хотим, чтобы новая вещь имела тот же размер, что и копируемая вещь, поэтому мы устанавливаем ее размер таким же, как размер копируемой вещи
        this -> data = new int[other.size];
        for(int i = 0; i < other.size; i++)
            this -> data[i] = other.data[i];
    }
    
    MyClass & operator = (const MyClass &other){
        cout << "Вызвался оператор = \t" << this << endl;
        this -> size = other.size;
        if (this -> data != nullptr)
            delete[] this -> data;
        
        this -> data = new int [other.size];
        for (int i = 0; i < other.size; i++)
            this -> data[i] = other.data[i];
        return *this;
    }
    
    /// Деструктор
    ~MyClass(){
        cout << "Вызвался деструктор \t" << this << endl;
        delete[] data;
        // данные освобождаются для двух массивов потому что вызываются два раза
    }
};

int main(){
    MyClass a(10);
//    MyClass b = a; // Конструктор копирования
    MyClass b(2);
//    a = b;
    MyClass c(5);
    c = a = b;
}
