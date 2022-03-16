/********************************************
Program to demonstrate linked lists
*********************************************/

# include <stdio.h>
# include <stdlib.h>

// Define the structure of a node
// of the list

struct node {
	int			info;
	struct node	*next; 
};


// Creates a node with info given as
// parameter dynamically and returns 
// its address

struct node* create_node(int inf) {

	struct node *tmp;

	// allocate memory dynamically
	tmp = (struct node*)malloc(sizeof(struct node));
	tmp->info = inf;
	tmp->next = NULL;
	
	return(tmp);
}
    
// Creates a node 
// Inputs info from keyboard, creates
// a node dynamically and returns
// its address
struct node* create_node_interactive() {

	struct node *tmp;
	int inf;
	
	printf("Info: ");
	scanf("%d", &inf);
	tmp = create_node(inf);
				
	return(tmp);
}



void delete_node(struct node *n) {
	free(n);
	return;
}

void display_node(struct node *n) {
	printf("Info = %d\n", n->info);
	return;
}

void examine_node(struct node *n) {
	printf("Address of node pointer = %p\n", &n);
	printf("Address stored in node pointer = %p\n", n);
	printf("Address of info = %p\n", &n->info);
	printf("Value stored at info = %d\n", n->info);
	printf("Address of next = %p\n", &n->next);
	printf("Value stored in next = %p\n", n->next);
	return;
}

// create list from array
// inputs: 
// 	arr: int array
//	len: length (int) of array
// returns:
//	pointer to the first node of list

struct node* create_list_from_array(int arr[], int len) {
	
	struct node *head = NULL;	// head node address
	struct node *tail = NULL;	// last node address
	int 		i;
	
	for (i=0; i<len; i++) { 		// iterate through the array
		
		if (i==0) {
			// special case for the first node
			head = tail = create_node(arr[i]);
		} else {
			// for other cases, assign a new node
			// at tail->next and then move tail 
			// to that node
			tail->next = create_node(arr[i]);
			// advance tail to the next node
			// so that it really points to the
			// last node
			tail = tail->next;
		}
	}
	
	return(head);
}

// Display a list	 
void display_list(struct node *list) {

	struct node *cursor;		// pointer to move through
								// the elements of list
				
	// recurse cursore through the elements on the list
	// from head to tail (until next is NULL)				
	for(cursor = list; cursor != NULL; cursor = cursor->next) 
		display_node(cursor);
		
	return;
}

// Display a list	 
void examine_list(struct node *list) {

	struct node *cursor;		// pointer to move through
								// the elements of list
	
	int count = 1;				// Node counter
				
	// recurse cursore through the elements on the list
	// from head to tail (until next is NULL)				
	for(cursor = list; cursor != NULL; cursor = cursor->next, count++) {
		printf("\n====== Node %d ======\n", count);
		examine_node(cursor);
	}
	return;
}							

// Adds a node
// Inputs:
//		list: the list head
//		inf: (int) info 
//		pos: (int) position at which the new
//				node is to be added.
//				if pos > the number of nodes of the list
//				we add the new info at the end of the list.
void add_node(struct node *list, int inf, int pos) {

	struct node *cursor;
	struct node *tmp;
	int count;
	
	// creates new node
	tmp = create_node(inf);			
		
	// We will iterate through list using cursor, while 
	// at the same time increasing node count by 1
	// until count == pos or cursor->next == NULL
	for(count = 1, cursor = list; 
		count < pos && cursor->next != NULL;
		cursor = cursor->next, count++);
	
	
	if (cursor->next == NULL ) { 	
		// i.e. we are at the last node
		// or pos >= length of list
		// just add tmp to the end
		cursor->next = tmp;
	} else {
		// i.e. pos is within the range of the 
		// list length 
		// it means cursor is at pos-1
		// we replace cursore->next with tmp
		// pushing cursor->next to tmp->next
		tmp->next = cursor->next; 
		cursor->next = tmp;
	}
	
	return;
}	
	  
	  
	  

void main() {
	
	struct node *list = NULL;
	int array[] = {10, 20, 30, 40};
	int p;
	
	list = create_list_from_array(array, 4);
	display_list(list);
	
	printf("\n\n>>>> Adding node \n");
	printf("Pos: ");
	scanf("%d", &p);
	add_node(list, 100, p);
	display_list(list);
	
	return;
}
