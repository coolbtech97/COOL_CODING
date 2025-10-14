// Delete a Node
// 1. Delete first Node
// 2. Delete Last Node
// 3. Delete Particular Node
    // maintain-  if linked list doesnot exist          if(head==NULL) nothing do
    //            if linked list has only 1 node        if(head->next==NULL) head=NULL; WRONG WRONG WRONG   data still stores memory
    //            if linked list more than 1 node                           node *temp=head;
    // HANDLE THESE CASES                                                   head=NULL;
    //                                                                      delete temp;