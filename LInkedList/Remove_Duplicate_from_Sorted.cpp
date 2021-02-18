Node *UniqueLinkedList(Node *List){
	Node *answer=List;
	if(answer==NULL)return List;
	while(answer->next!=NULL){
	if(answer->data==answer->next->data){
	answer->next=answer->next->next;
	}
	else{
	answer=answer->next;
	}
	}
	return List;

}