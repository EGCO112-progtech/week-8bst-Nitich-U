// An integer binary search tree

struct TreeNode {                                           
    struct TreeNode *leftPtr; // pointer to left subtree
   int data; // node value                               
    struct TreeNode *rightPtr; // pointer to right subtree
}; // end structure treeNode 
        
typedef struct TreeNode * TreeNodePtr; // synonym for TreeNode*
                    
typedef struct {
 int size;
 TreeNodePtr root;
}BST;

// prototypes

void insertNode( BST *, int );
/*
void insertNode_R(TreeNodePtr * t,int value){
  if(t==NULL){
   t=new TreeNode;
  if(t){
  t->leftPtr=NULL;
  t->rightPtr=NULL;
  t->data=value;
   }
  }
  else{
     if(t->data>=value) //left
        
     else //right
      
   }
}
*/
void insertNode( BST *b, int value ){
  TreeNodePtr t =b->root,new_node;
  int inserted=0;
 new_node =(TreeNodePtr) malloc(sizeof(struct TreeNode));
 if(new_node){
  new_node->leftPtr=NULL;
  new_node->rightPtr=NULL;
  new_node->data=value;
  /*First Node*/
  if(!b->root) b->root=new_node;
  else {
while(!inserted){
   if(t->data >=value){
     /* move/insert to the left*/
         if(!t->leftPtr){
            t->leftPtr=new_node;
            inserted=1;
            break;
         }
         else{
            t=t->leftPtr;
         }
         /*
         if(t->leftPtr){
            t=t->leftPtr;
            continue;
         printf("loop2");   
         }
         t->leftPtr=new_node;
         inserted=1;
         printf("loop");
         */
     }
    
  
   else{
       /* move/ insert to the right*/
         if(!t->rightPtr){
            t->rightPtr=new_node;

            inserted=1;
            break;
         }
         else{
            t=t->rightPtr;
         }
         /*
         if(t->rightPtr){
            t=t->rightPtr;
            continue;
         printf("loop2");
         }
         t->rightPtr=new_node;
         inserted=1;
         printf("loop");
         */
     }
    
    
 
   
  }//end while  
  }//end else;
  b->size++;
  }
  
}//end function


void inOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      inOrder( treePtr->leftPtr ); //Recursion to the left
 
      printf("%3d",treePtr->data) ;  //print the value 
   
      inOrder( treePtr->rightPtr ); //Recursion to the right
   } // end if                          
} // end 

void preOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      printf("%3d",treePtr->data) ;  //print the value 

      preOrder( treePtr->leftPtr ); //Recursion to the left
 
      preOrder( treePtr->rightPtr ); //Recursion to the right
   } // end if                          
} // end 


void postOrder( TreeNodePtr treePtr )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
        
      postOrder( treePtr->leftPtr ); //Recursion to the left
 
      postOrder( treePtr->rightPtr ); //Recursion to the right

      printf("%3d",treePtr->data) ;  //print the value 
   } // end if                          
} // end 

int size=0;

void treeOrder( TreeNodePtr treePtr, int sub )
{ 
   // if tree is not empty, then traverse
   if ( treePtr != NULL ) {        
      
      sub++;
      
      treeOrder( treePtr->rightPtr, sub ); //Recursion to the right
      
      
      for(int i=1;i<sub;i++)
      {
         printf("   ");

      }
      
      printf("%3d",treePtr->data) ;  //print the value 
      
      printf("\n");
      
      

      treeOrder( treePtr->leftPtr, sub ); //Recursion to the left
      
      
      
   } // end if                          
} // end