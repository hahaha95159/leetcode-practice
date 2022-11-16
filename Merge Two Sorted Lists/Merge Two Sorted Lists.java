class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode newNode = new ListNode();
        ListNode temp = newNode;
        while(list1 != null && list2 != null){
            if(list1.val < list2.val){
                newNode.next = list1;
                list1 = list1.next;
            }
            else if(list1.val >= list2.val){
                newNode.next = list2;
                list2 = list2.next;                
            }
            newNode = newNode.next;
        }
        if(list1 == null) newNode.next = list2;
        if(list2 == null) newNode.next = list1;
        return temp.next;
    }
}