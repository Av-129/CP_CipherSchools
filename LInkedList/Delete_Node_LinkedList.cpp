Node *DelBegin(Node *head){
	if(head==NULL)return NULL:
else{
	Node *answer=head->next;
	free(head);
return answer;
}

}



Node *DelEnd(Node *head){
	if(head==NULL)return NULL;
	if(head->next==NULL){
	free(head);
	return NULL;
	}
	Node *answer=head;
	while(answer->next->next!=NULL){
	answer=answer->next;
	}
	free(answer->next);
	answer->next=NULL;
	return head;

}