#include <iostream>

using namespace std;

template<typename T, int CAPACITY = 8>
class CyclicBuffer {
private:
    T buffer[CAPACITY];
    int p_read; 
    int p_write; 
    int count; 
public:
    CyclicBuffer() : p_read(0), p_write(0), count(0) {}

    bool empty() {
        return count == 0;
    }

    bool full() {
        return count == CAPACITY;
    }

    T get() {
        if (empty()) {
            throw "Buffer is empty";
        }
        T value = buffer[p_read];
        p_read = (p_read + 1) % CAPACITY;
        count--;
        return value;
    }

    void put(T value) {
        if (full()) {
            throw "Buffer is full";
        }
        buffer[p_write] = value;
        p_write = (p_write + 1) % CAPACITY;
        count++;
    }

    void print() const {
        for (int i = 0; i < count; i++) {
            int index = (p_read + i) % CAPACITY;
            cout << buffer[index] << " ";
        }
        cout << endl;
    }
};


class MyClass {
private:
    int value;
public:
    MyClass(int val) : value(val) {}

    int getValue() const {
        return value;
    }
};

int main() {
    CyclicBuffer<int> intBuffer;

    for (int i = 1; i <= 10; i++) {
        intBuffer.put(i);
    }

    cout << "Int Buffer: ";
    intBuffer.print();

    while (!intBuffer.empty()) {
        int value = intBuffer.get();
        cout << "Got value: " << value << endl;
    }

    cout << endl;

    CyclicBuffer<MyClass, 16> objBuffer;

    for (int i = 1; i <= 5; i++) {
        MyClass obj(i);
        objBuffer.put(obj);
    }

    cout << "Object Buffer: ";
    objBuffer.print();

    while (!objBuffer.empty()) {
        MyClass obj = objBuffer.get();
        cout << "Got object with value: " << obj.getValue() << endl;
    }

    return 0;
}
