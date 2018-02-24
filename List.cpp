class Node // This self-referential class stores integer data
{
 public:        //This data won't be public 
    int data;
    Node* link; //this attribute makes it a self-referential class

};

Node* frontPtr=nullptr;//initialize linked-list to be empty


//inserting to the front
//step 1
Node* newPtr = new Node{val};

//step 2
newPtr->link = frontPtr; //preserve what frontPtr is pointing to

//step 3
frontPtr = newPtr; //update the front of the linked-list

