#include <iostream>

using namespace std;

class DynamicArray
{
    int *data;
    int nextIndex;
    int capacity;

public:
    DynamicArray()
    {
        data = new int[5];
        nextIndex = 0;
        capacity = 5;
    }

    DynamicArray(int c)
    {
        data = new int[5];
        nextIndex = 0;
        capacity = c;
    }

    DynamicArray(DynamicArray const &d)
    {
        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        // shallow copy this-> data = d.data;
        this->data = new int[d.capacity]; // I didnt add 1 because there is no need to copy the null character also.

        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    void add(int element)
    {
        if (nextIndex == capacity)
        {
            int *newData = new int[2 * capacity];
            for (int i = 0; i < capacity; i++)
            {
                newData[i] = data[i];
            }

            delete[] data; // if not there will be a memory leak
            data = newData;
            capacity = capacity * 2;
        }

        data[nextIndex] = element;
        nextIndex++;
    }

    void add(int element, int i)
    {
        if (i < nextIndex)
        {
            data[i] = element;
        }
        else if (i == nextIndex)
        {
            add(element);
        }
        else
        {
            return;
        }
    }

    int getELement(int i) const
    {
        if (i >= 0 && i < nextIndex)
        {
            return data[i];
        }
        else
        {
            return -1;
        }
    }

    void print() const
    {
        for (int i = 0; i < nextIndex; i++)
        {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    void operator=(DynamicArray const &d)
    {
        // overload the copy assignment operator

        this->nextIndex = d.nextIndex;
        this->capacity = d.capacity;
        // shallow copy this-> data = d.data;
        this->data = new int[d.capacity]; // I didnt add 1 because there is no need to copy the null character also.

        for (int i = 0; i < d.nextIndex; i++)
        {
            this->data[i] = d.data[i];
        }
    }

    int getCapacity() const
    {
        return capacity;
    }
};