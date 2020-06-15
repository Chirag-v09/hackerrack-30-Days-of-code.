

      Node* insert(Node *head,int data)
      {
          if(head == NULL)
          {
              Node *n = new Node(data);
              head = n;
          }
          else
          {
              Node *temp = head;
              while(temp->next)
              {
                  temp = temp->next;
              }
              Node *n = new Node(data);
              temp->next = n;
          }
          return head;
      }

