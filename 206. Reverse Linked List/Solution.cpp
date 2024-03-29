class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
            return head;

        ListNode *new_head = reverseList(head->next);

        head->next->next = head;
        head->next = nullptr;

        return new_head;
    }
};
