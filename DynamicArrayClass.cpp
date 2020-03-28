class DynamicArray
{
private:
    int* data;
    int nextIndex;
    int capacity;
public:
    DynamicArray()
    {
        data=new int[5];
        nextIndex=0;
        capacity=5;
    }

    DynamicArray(DynamicArray const &d)
    {
        this->data = new int[d.capacity];
        for(int i=0; i < d.nextIndex;i++)
            this->data[i]=d.data[i];
        this->nextIndex=d.nextIndex;
        this->capacity = d.capacity;

    }
    void addElement(int a)
    {
        if(nextIndex == capacity)
        {
            int* newData = new int[2*capacity];
            for(int i=0;i < capacity;i++)
                newData[i]=data[i];
            delete [] data;
            data = newData;
            capacity = 2*capacity;
        }
        data[nextIndex]=a;
        nextIndex++;
    }

    int getElement(int index) const
    {
        if(index < nextIndex)
            return data[index];
        else
            return -1;
    }

    void add(int index,int element)
    {
        if(index < nextIndex)
            data[index] = element;
        else if(index == nextIndex)
            addElement(element);
        else
            return;
    }
    void print() const
    {
        for(int i=0;i < nextIndex;i++)
            cout << data[i] << " ";
        cout << endl;
    }
    void operator=(DynamicArray const &d)
    {
         this->data = new int[d.capacity];
        for(int i=0; i < d.nextIndex;i++)
            this->data[i]=d.data[i];
        this->nextIndex=d.nextIndex;
        this->capacity = d.capacity;

    }
};
