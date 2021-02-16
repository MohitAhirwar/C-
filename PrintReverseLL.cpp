void fun1(node* head)
{
  if(head == NULL)
    return;
  
  fun1(head->next);
  printf("%d  ", head->data);
}
