#include <iostream>

template<typename T>
class Stack
{
public:
    Stack(int cap = 32) : depth(0)
    {
        if(cap < 1) {
            cap = 1;
        }
        capacity = cap;
        data = new T[capacity];
    }

    virtual ~Stack()
    {
        delete[] data;
    }

    inline int size()
    {
        return depth;
    }
    
    inline void clear()
    {
        depth = 0;
    }

    const T& top()
    {
        if(depth == 0) {
            std::cout << "Stack::top(): stack underflow\n";
            return;
        }
        return data[depth - 1];
    }

    const T& pop()
    {
        if(depth == 0) {
            std::cout << "Stack::pop(): stack underflow\n";
            return {};
        }
        return data[--depth];
    }

    void push(const T& t)
    {
        if(depth == capacity) {
            T* newdata = new T[capacity * 2];
            for(int i = 0; i < capacity; ++i) {
                newdata[i] = data[i];
            }
            delete data;
            capacity *= 2;
            data = newdata;
        }
        data[depth++] = t;
    }

    void print()
    {
        for(int i = 0; i < depth; ++i) {
            std::cout << data[i] << std::endl;
        }
    }

private:
    int depth{};
    int capacity{};
    T* data{};
};

int main()
{
    Stack<int> s(2);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    
    s.print();
    
    s.pop();
    s.pop();
    s.pop();

    s.print();
}

