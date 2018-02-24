class Node // This self-referential class stores integer data
{
 public:        //This data won't be public 
    int data = 0;
    Node* link = nullptr; //this attribute makes it a self-referential class

};

/*
 * For trivial classes such as above, compiler 
 * will write the following c'tors for us
 * 
 * Node()
 * Node(int)
 * Node(int, Node*)
 */ 


Node* frontPtr=nullptr;//initialize linked-list to be empty

//.val is the data to insert
// k is the position to insert at
insert(int val, int k)
{
//inserting to the front
//step 1
Node* newPtr = new Node{val};

if (k == 1)
{
//step 2
newPtr->link = frontPtr; //preserve what frontPtr is pointing to

//step 3
frontPtr = newPtr; //update the front of the linked-list
return; //quit the function
}
else //insert at another location
{
 Node* iPtr=nullptr;
int i = 1;

//step 4 (get a pointer to the (k-1)th node
for ( iPtr= frontPtr; i < k-1; i++)
 {
 iPtr = iPtr->link;   
  } 

//step 5
newPtr->link = iPtr ->link; 


//step 6
iPtr->link = newPtr;

}


}
