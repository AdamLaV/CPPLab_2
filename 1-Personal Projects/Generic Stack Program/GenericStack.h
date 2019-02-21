

  1  #ifndef STACK_H
  2  #define STACK_H
  3  
  4  template<typename T>
  5  class Stack
  6  {
  7  public:
  8    Stack();
  9    bool empty() const;
 10    T peek() const;
 11    void push(T value);
 12    T pop();
 13    int getSize() const;
 14  
 15  private:
 16    T elements[100];
 17    int size;
 18  };
 19  
 20  template<typename T>
 21  Stack<T>::Stack()
 22  {
 23    size = 0;
 24  }
 25  
 26  template<typename T>
 27  bool Stack<T>::empty() const
 28  {
 29    return (size == 0);
 30  }
 31  
 32  template<typename T>
 33  T Stack<T>::peek() const
 34  {
 35    return elements[size - 1];
 36  }
 37  
 38  template<typename T>
 39  void Stack<T>::push(T value)
 40  {
 41    elements[size++] = value;
 42  }
 43  
 44  template<typename T>
 45  T Stack<T>::pop()
 46  {
 47    return elements[--size];
 48  }
 49  
 50  template<typename T>
  int Stack<T>::getSize() const
  {
    return size;
   }  
   #endif

