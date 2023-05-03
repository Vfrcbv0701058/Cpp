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
    
    /// Деструктор
    ~MyClass(){
        cout << "Вызвался деструктор \t" << this << endl;
        delete[] data;
        // данные освобождаются для двух массивов потому что вызываются два раза
    }
};

MyClass Foo2(){
    cout << "Класс Foo2" << endl;
    MyClass temp(32);
    return temp;
};

void Foo(MyClass  value){
    cout << "Функция foo" << endl;
}

int main(){
    MyClass a(10); // конструктор копирования не работает
    MyClass b(a); // конструктор копирования работает
}
