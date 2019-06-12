/*This is a function problem.You only need to complete the function given below*/
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/



//my code
void MyQueue:: push(int x){
    QueueNode *temp=new QueueNode(x);
    if(temp==NULL)
        return ;
    else{
        if(front==NULL)
            front=temp;
        else
            rear->next=temp;
        
        rear=temp;    
    }    
}
/*The method pop which return the element
  poped out of the queue*/
  
  
  
  
  
//my code  
int MyQueue :: pop(){
    if(front==NULL)
        return -1;
    else{
        int item=front->data;
        front=front->next;
        return item;
    }    
}
