bool isPalin(Node* head){
         
        
        Node* curr= head;
 
        stack <int> s;
  
 
        while(curr != NULL){
                s.push(curr->data);
 
               
                curr = curr->next;
        }
 
       
        while(head != NULL ){
             
         
             int d=s.top();
 
             
             s.pop();
 
    
            if(head -> data != d){
                return false;
            }
 
         
           head=head->next;
        }
 
return true;
}