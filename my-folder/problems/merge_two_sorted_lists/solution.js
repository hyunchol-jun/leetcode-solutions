/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    // Make a dummy Node at the start of the result
    const dummyNode = new ListNode();

    // Reference to the currently visited node
    let currentNode = dummyNode;

    // Repeat as long as list1 and list2 are valid nodes
    // Find smaller value and add to the next value of currentNode
    while (list1 && list2) {
        if (list1.val < list2.val) {
            currentNode.next = list1;
            currentNode = currentNode.next;
            list1 = list1.next;
        } else {
            currentNode.next = list2;
            currentNode = currentNode.next;
            list2 = list2.next;
        }
    }

    // At this point either list is empty, so add the non-empty one to next
    currentNode.next = list1 ? list1 : list2;

    // Return the list except the first dummy node
    return dummyNode.next;
};