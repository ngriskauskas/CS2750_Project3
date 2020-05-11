/*
  file: test.c
*/
#include "list.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{

  Node *head = NULL;
  menu(head);

  return EXIT_SUCCESS;
}

int menu(Node *head)
{
  int item;
  do
  {
    printf("\n\nPick an (int) option:\n1. Insert Head\n2. Insert tail\n3. Delete a Node\n4. Delete All\n5. Display\n6. Exit\n\n");
    scanf("%d", &item);
    int val;
    switch (item)
    {
    case 1:
      val = askVal();
      head = List_insert(head, val);
      break;
    case 2:
      val = askVal();
      List_insert_last(head, val);
      break;
    case 3:
      val = askVal();
      List_delete(head, val);
      break;
    case 4:
      List_destroy(head);
      break;
    case 5:
      List_print(head);
      break;
    case 6:
      break;
    default:
      printf("Invalid selection\n\n");
    }
  } while (item != 6);
}

int askVal()
{
  printf("Enter a value: ");
  int val;
  scanf("%d", &val);
  return val;
}
