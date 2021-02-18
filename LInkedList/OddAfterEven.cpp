Node *OddAfterEven(Node *head){
	Node *es=Null, eE=NULL,os=NULL,oE=NULL;
	for(node *answer=head;answer!=NULL;nswer=answer->next){
	int x=answer->data;
	if(x%2==0){
	if(es==NULL){
	es=answer;
	eE=es;
	}
	else{
	eE->next=answer;
	eE=eE->next;
	}
	}
	else{
	if(os==NULL){
	os=answer;
	oE=os;
	}
	else{
	oE->next=answer;
	oE=oE->next;
	}
	}
	}
	if(os==NULL or es==NULL)return NULL;
	eE->next=os;
	oE->next=NULL;
	return es;
}