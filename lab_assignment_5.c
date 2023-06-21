#include <stdio.h>
#include <stdlib.h>
typedef struct node {
char letter;
struct node* next;
} node;
// Returns number of nodes in the linkedList.
int length(node* head)
{
   int count;
    struct node* temp = head;
    if (temp == NULL){
        printf("List is Empty");
    }
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count; 

}
// parses the string in the linkedList
// if the linked list is head -> |a|->|b|->|c|
// then toCString function wil return "abc"
char* toCString(node* head)

{
    int i = 0;
    char* bodyAlpha = malloc((length(head)+1)*sizeof(char))
    struct node* temp = head;
    while(temp != NULL){
        bodyAlpha[i]=temp;
        i++;
        temp -> next;
    }

}

// inserts character to the linkedlist
// f the linked list is head -> |a|->|b|->|c|
// then insertChar(&head, 'x') will update the linked list as foolows:
// head -> |a|->|b|->|c|->|x|
void insertChar(node** pHead, char c)
{
    
}

// deletes all nodes in the linkedList.

void deleteList(node** pHead)
{
    temp=head;
    head= head->next;
    free(temp);
}

int main(void)

{
int i, strLen, numInputs;
node* head = NULL;
char* str;
char c;
FILE* inFile = fopen("input.txt","r");
fscanf(inFile, " %d\n", &numInputs);
while (numInputs-- > 0)
{
fscanf(inFile, " %d\n", &strLen);
for (i = 0; i < strLen; i++)
{
fscanf(inFile," %c", &c);
insertChar(&head, c);
}
printf("abcdef");
str = toCString(head);
printf("String is : %s\n", str);
free(str);
deleteList(&head);
if (head != NULL)
{
printf("deleteList is not correct!");
break;
}
}
fclose(inFile);
}
