/*  21. Merge Two Sorted Lists
    Input: list1 = [1,2,4], list2 = [1,3,4]
    Output: [1,1,2,3,4,4]
*/
// O(n+m), O(1)
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{
    int i = 0, j = 0;

    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;

    ListNode *head = list1;
    if (list1->val > list2->val)
    {
        head = list2;
        list2 = list2->next;
    }
    else
    {
        list1 = list1->next;
    }
    ListNode *cur = head;
    while (list1 && list2)
    {
        if (list1->val <= list2->val)
        {
            cur->next = list1;
            list1 = list1->next;
        }
        else
        {
            cur->next = list2;
            list2 = list2->next;
        }
        cur = cur->next;
    }
    if (!list1)
        cur->next = list2;
    else
        cur->next = list1;

    return head;
}

// O(n+m), O(n+m)
ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
{

    if (list1 == nullptr)
        return list2;
    if (list2 == nullptr)
        return list1;

    if (list1->val <= list2->val)
    {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    }
    else
    {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}