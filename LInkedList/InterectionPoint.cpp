Node *getIntersectionNode(Node *headA, Node *headB) {
        Node* tempA=headA, *tempB=headB;
        while(tempA != tempB){
            if(tempA == NULL) tempA = headB;
            else if(tempA) tempA = tempA->next;
            if(tempB == NULL) tempB = headA;
            else if (tempB) tempB = tempB->next;
        }
        return tempA;
    }