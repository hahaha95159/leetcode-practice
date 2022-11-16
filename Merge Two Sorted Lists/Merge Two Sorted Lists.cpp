class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode newNode(0);
	ListNode * tmp;
    tmp = &newNode;
	while(list1 != NULL && list2 != NULL){
		if(list1->val < list2->val){
			tmp->next = list1;
			list1 = list1->next;
		}else{
			tmp->next = list2;
			list2 = list2->next;
		}
		tmp = tmp->next;
	}
	if(list1 == NULL) tmp->next = list2;
	if(list2 == NULL) tmp->next = list1;
	return newNode.next;
    }
};