#include <iostream>
#include <string>
#include "RBTree.h"

using namespace std;


int main() {
	Map <string, float> bst;
	bst.insert("A", 38.5);
	bst.insert("B", 0.6);
	bst.insert("C", 1);
	bst.insert("D", 0);
	bst.insert("E", 100.0);
	bst.insert("F", 69.9);
	bst.printTree();
	cout << "Remove key E:" << endl;
	cout << "Print tree after removing: " << endl;
	bst.remove("E");
	bst.printTree();
	cout << "Clear the tree." << endl;
	cout << "Print result: " << endl;
	bst.clear();
	bst.printTree();
	return 0;
}
