//List ADT header

class List
{

    public:
      void insert(int val, int k);// insert val at the k-th position
      int get(int k);// get the element at the k-th position
      void remove( int k);// remove from the k-th position
      int size( ); //returns how many elements in the List
      void clear( ); //Remove all elements from the List
      
      ~List(); //d'tor (needed since we are using dynamic memory)
               //d'tor (destructor used to perform "termination housekeeping"

  
  private:// using a singly-liked list as the underlying data-structure
  
   class Node;// forward declaration of a class
 
   Node* frontPtr = nullptr;//initialize linked-list to be empty
   int num_elements = 0; //number of items in the List
};
