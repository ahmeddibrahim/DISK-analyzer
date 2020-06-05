#include "BinarySearchTree.hpp"

class file
{
    public:
    string name;
    long long size;
    bool dir;
    bool root;
    char* path;
    long long directory_size;
     //AVLTree<file>* TREE;
    BSTNode<file>* Ptr_to_Directory;
    BinarySearchTree<BSTNode<file>,file> *tree;
    BinarySearchTree<BSTNode<file>,file> * my_tree;
   
    //void Insert(file item,AVLNode<file>*n,AVLTree<file> *t);
    file();
    
    bool  operator>(const file &it)const;//O(1)
    bool operator<(const file &it)const;//O(1)
    bool operator !=(const file &it)const;//O(1)
    bool operator ==(const file &it)const;
    ~file();
   
};

file::file()
{
    name="";
    directory_size=0;
    dir=false;
    path= (char*) malloc(256*sizeof(char));
    //Ptr_to_Directory= new BSTNode<file>;
}
// void file:: Insert(file item,AVLNode<file>* n,AVLTree<file> *t)
// {
//    if(dir)
//     {
//         AVLTree<file>* newTree= new AVLTree<file>;
//         if(n!=NULL)
//         {
//             newTree->setRoot(n);
//             //*Ptr_to_Directory=&(*(newTree->getRoot()));
//         }
//     }  
//     else 
//     t->insert(item);
// }
ostream& operator<<(ostream& os, const file& dt)
{
    
    if(dt.dir)
        os << dt.size << " " <<dt.name<<" (dir)"<<endl;
    else 
       os << dt.size << " " <<dt.name<<endl;
    return os;
}

bool  file:: operator< (const file &it)const
{// overloading operator
    if(size<it.size)// Less than
        return true;
    else if(size==it.size)
    {// if they are equal take check index to avoid removing dublicate ip
        if(name<it.name)
            return true;
    }
        else
            return false;
}

bool  file :: operator> (const file &it)const
{// Overloading operator
    if(size > it.size)// greater than
        return true;
    else if(size==it.size)
    { // if they are equal take check index to avoid removing dublicate ip
        if(name>it.name)
            return true;
    }
    else
        return false;
}
bool file:: operator!=(const file &it)const
{// Overloading operator
    if(size!=it.size)// not equal
        return true;
    else
        return false;
}
bool file:: operator ==(const file &it)const
{
    if(size==it.size)
        return true;
    else
        return false;

}

file::~file()
{
    // free(TREE);
}