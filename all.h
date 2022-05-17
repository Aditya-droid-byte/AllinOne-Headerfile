#define PI 3.14
#include<iostream>
using namespace std;
//----------------------------------------arithmatic----------------------------//
int arithmatics(char n, int a, int b){
	char add='a';
	char sub='s';
	char mul='m';
	char div='d';
	char mods='M';
	if(add==n){	
	   return a+b;
	}
	else if(sub==n){
	   return a-b;
	}
	else if(mul==n){
	   return a*b;
	}
	else if(div==n){
	   return a/b;
	}
	else if(mods==n){
        return a%b;
	}
	return -1;
}
//---------------------------------oddeven------------------------------//
#include<iostream>
using namespace std;
void oddEven(int n){
 if(n%2==0){
   cout<<"even";
 }
 else{
   cout<<"odd";
 }
}
//////////////////////////print 1 to n -----------------------------------//
void printRange(int n){
	for(int i=1;i<=n;i++){
	    cout<<i<<endl;
	}
	//return;
}
//----------------------------relational-----------------------------------//
int relational(char n, int a , int b){
	char compare1='g';
	char compare2='s';
	char compare3='e';
	char compare4='L';
	char compare5='G';
	char compare6='n';
	if(n==compare1){
	   if(a>b){
		return a;
	   }
	   else{
		return b;
	   }
	}
	else if(n==compare2){
	   if(a<b){
		return a;
	   }
	   else{
		return b;
	   }
	}
	else if(n==compare3){
	   if(a==b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	else if(n==compare4){
	   if(a<=b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	else if(n==compare5){
	   if(a>=b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	else if(n==compare6){
	   if(a!=b){
		return 0;
	   }
	   else{
		return -1;
	   }
	}
	return -1;
}
//-----------------------------------circle radius circumference----------------------//
float circle(char n,float r){
 char compare1='c';
 char compare2='a';
 if(n==compare1){
  return PI*(2*r);
 }
 else if(n==compare2){
  return PI*(r*r);
 }

 return 0;
}
//-------------------------------------square side area---------------------------------//
int square(char n, int side=0, int perimeter=0){
	char area = 'a';
	char perimeter1='p';
	if(n==area){
		return side * side;
	}
	else if(n==perimeter1){
		return 4 * side;
	}
	return 0;
}
//-------------------------------rectangle side area-----------------------------------//
int rectangle(char n, int l, int b){
	char area = 'a';
	char perimeter = 'p';
	if(n==area){
		return l*b;
	}
	else if(n==perimeter){
		return 2 * (l+b);
	}
	return 0;
}

class Node {
	public :
	int data; // to store the data stored

	Node *next; // to store the address of next pointer

	Node(int data) {

		this -> data = data;

		next = NULL;

	}
};
//-------------------------------PRINT LINKEDLIST------------------------------------//
void print(Node *head) {
	Node *tmp = head;
	while(tmp != NULL) {	
		cout << tmp->data << “ “;
		tmp = tmp->next;
	}
	cout << endl;
}

//-----------------------------TAKE INPUT IN LINKEDLIST------------------------------//
Node* takeInput() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) { // -1 is used for terminating
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = tail -> next;
// OR
// tail = newNode;
		}
		cin >> data;
	}
	return head;
}


//-------------------------------INSERT NODE IN LINKEDLIST-----------------------------//
Node* insertNode(Node *head, int i, int data) {
	Node *newNode = new Node(data);
	int count = 0;
	Node *temp = head;
	if(i == 0) { //Case 2
		newNode -> next = head;
		head = newNode;
		return head;
	}
	while(temp != NULL && count < i - 1) { //Case 3
		temp = temp -> next;
		count++;
	}
	if(temp != NULL) {
		Node *a = temp -> next;
		temp -> next = newNode;
		newNode -> next = a;
	}
	return head; //Returns the new head pointer after insertion
}

//---------------------------REVERSE A LINKED LIST--------------------//
Node* reverseLL(Node *head) {
	if(head == NULL || head -> next == NULL) { //Base case
	return head;
	}
	Node *smallAns = reverseLL(head -> next); // Recursive call
	Node *temp = smallAns; // small answer that
	while(temp -> next != NULL) { // stores the reversed
		temp = temp -> next; // list by traversing the
	} // reversed list and
	// then appending the
	temp -> next = head; // next element to it.
	head -> next = NULL;
	return smallAns;
}

//---------------------------STACK---------PUSH POP TOP-------------//

#include <climits>
template <typename T> // Templates initialised
class StackUsingArray {
	T *data; // Template type of data used

	int nextIndex;

	int capacity;	

	public :

	StackUsingArray() {


		data = new T[4];

		nextIndex = 0;

		capacity = 4;

	}
// return the number of elements present in my stack

	int size() {

		return nextIndex;

	}
bool isEmpty() {
return nextIndex == 0;
}
// insert element

  void push(T element) {

    if(nextIndex == capacity) {

      T *newData = new T[2 * capacity];

      for(int i = 0; i < capacity; i++) {

        newData[i] = data[i];

      }
 
      capacity *= 2;

      delete [] data;

			data = newData;

		}

		data[nextIndex] = element;

		nextIndex++;

	}
// delete element

	T pop() {

		if(isEmpty()) {

			cout << "Stack is empty " << endl;

			return 0;

		}

		nextIndex--;

		return data[nextIndex];

	}
// For extracting top element
T top() {

	if(isEmpty()) {

		cout << "Stack is empty " << endl;

		return 0;

	}

	return data[nextIndex - 1];

}

};


//------------------------------------------QUEUE PUSH POP TOP---------------------------//



template <typename T>
class QueueUsingArray {
	T *data;
	int nextIndex;
	int firstIndex;
	int size;
	int capacity;
	public :
	QueueUsingArray(int s) {
		data = new T[s];
		nextIndex = 0;
		firstIndex = -1;
		size = 0;
		capacity = s;
	}

	int getSize() {

		return size;

	}

	bool isEmpty() {

		return size == 0;

	}

	void enqueue(T element) {

		if(size == capacity) { // When size becomes full

			T *newData = new T[2 * capacity]; // we simply doubled the
// capacity

			int j = 0;

			for(int i = firstIndex; i < capacity; i++) { // Now copied the

		//		Elements to new one

				newData[j] = data[i];

				j++;

			}

			for(int i = 0; i < firstIndex; i++) { // Overcoming the initial

				// cyclic insertion by copying

				// the elements linearly

				newData[j] = data[i];	

				j++;

			}

			delete [] data;

			data = newData;

			firstIndex = 0;

			nextIndex = capacity;

			capacity *= 2; // Updated here as well
//cout << "Queue Full ! " << endl;
// return;
}

		data[nextIndex] = element;

		nextIndex = (nextIndex + 1) % capacity ;

		if(firstIndex == -1) {

			firstIndex = 0;

		}

		size++;

	}

	T front() {

		if(isEmpty()) {

			cout << "Queue is empty ! " << endl;

			return 0;

		}

		return data[firstIndex];

	}

	T dequeue() {

		if(isEmpty()) {

			cout << "Queue is empty ! " << endl;

			return 0;

		}

		T ans = data[firstIndex];

		firstIndex = (firstIndex + 1) % capacity;

		size--;

		if(size == 0) {

			firstIndex = -1;

			nextIndex = 0;

		}

		return ans;

	}
}





//------------------BINARY TREE CLASS -----------------//
class BinaryTreeNode {

	public:

	T data; // To store data

	BinaryTreeNode* left; // for storing the reference to left pointer

	BinaryTreeNode* right; // for storing the reference to right pointer
// Constructor

	BinaryTreeNode(T data) {

		this->data = data; // Initializes data of the node

		left = NULL; // initializes left and right pointers to NULL

		right = NULL;

	}
// Destructor

	~BinaryTreeNode() {

		delete left; // Deletes the left pointer

		delete right; // Deletes the right pointer

	} // As it ends, deletes the node itself
};



//-------------TAKE INPUT RECURSIVELY------------------//
void printTree(BinaryTreeNode<int>* root) {

	if (root == NULL) { // Base case

		return;

	}

	cout << root->data << ":"; // printing the data at root node

	if (root->left != NULL) { // checking if left not NULL, then print it’s data also

		cout << "L" << root->left->data;

	}

	if (root->right != NULL) { // checking if right not NULL, then print it’s data also

		cout << "R" << root->right->data;

	}

	cout << endl;
	printTree(root->left); // Now recursively, call on the left and right subtrees	
	printTree(root->right);
}

//-------------------TAKE INPUT LEVELWISE--------------------------//

BinaryTreeNode<int>* takeInput() {

	int rootData;

	cout << "Enter data" << endl;

	cin >> rootData; // taking data as input

	if (rootData == -1) { // if the data is -1, means NULL pointer

	return NULL;

}
// Dynamically create the root Node which calls constructor of the same class

	BinaryTreeNode<int>* root = new BinaryTreeNode<int>(rootData);
// Recursively calling over left subtree

	BinaryTreeNode<int>* leftChild = takeInput();
// Recursively calling over right subtree

	BinaryTreeNode<int>* rightChild = takeInput();

	root->left = leftChild; // now allotting left and right childs to the root node

	root->right = rightChild;

	return root;

}

//----------------INorder traversal-----------------------//

void inorder(BinaryTreeNode<int>* root) {

	if (root == NULL) { // Base case when node’s value is NULL

		return;

	}

	inorder(root->left); //Recursive call over left part as it needs
// to be printed first

	cout << root->data << " "; // Now printed root’s data

	inorder(root->right); // Finally a recursive call made over right subtree
}


//--------------------
