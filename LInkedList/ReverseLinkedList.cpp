Node *Reverse(Node *head){
	vecotr<int>answer;
	for(Node *start=head;start!=NULL;start=start->next){
		answer.push_back(start->data);
	}

	for(Node *start=head;start!=NULL;start=start->next){
		start->data=answer.back();
		answer.pop_back();
	}
	return head;
}
