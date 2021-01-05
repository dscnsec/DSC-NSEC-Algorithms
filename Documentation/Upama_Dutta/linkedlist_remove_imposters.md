# Remove Imposters

question can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/remove_impostors.md"> here </a> <br>
Answer can be found here : <a href="https://github.com/dscnsec/DSC-NSEC-Algorithms/blob/master/5.%20Linked%20List/remove_impostors/Remove_Impostors_chalti.cpp">here </a><br>

 We will be deleting M nodes after N number of nodes, so we can esily find it by using loops. 
 so for that we will be taking a  while loop which will traverse the
 whole linkedlist, and make :- first node's next will be the M+1 th nodes address, and do this for N times <br><br>

 <p align="center"><i>
 Node *temp = head, *aux;
    while (temp) //start traversing in the linkedlist
    {
        int pos = M - 1;
        int cov = N;
        while (temp and pos--) //skipping
            temp = temp->next;
        if (temp == NULL)
            return;
        aux = temp->next;
        while (aux and cov--)
            aux = aux->next; 
        temp->next = aux;
        temp = temp->next;
    }
 </i>
 </p>

 <br>

 Time complexity : O(n) <br>
 Space complexity : O(n)