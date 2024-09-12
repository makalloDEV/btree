#include <string>
#include <iostream>
#include <Windows.h>
#include <vector>
#include <cmath>

using namespace std;


class BinTree
{
public:
	BinTree();

	class Node
	{
	public:
		int data;
		Node* pRight;
		Node* pLeft;

		Node(int data = 0, Node* pRight = nullptr, Node* pLeft = nullptr)
		{
			this->data = data;
			this->pRight = pRight;
			this->pLeft = pLeft;
		}
	};


	Node* head;
	int size;
	bool add(int data);
	void print();
	void cleart(Node* node);
	bool isEmpty(vector <int> values);
	vector <vector <int>> give_values();
	void set_frame();
	void set_last_frame();
};

BinTree::BinTree() 

{
	set_frame();
}

void BinTree::set_frame()
{
	head = nullptr;
	size = 0;

	head = new Node(-1);

	head->pLeft = new Node(-1);
	head->pRight = new Node(-1);

	head->pLeft->pLeft = new Node(-1);
	head->pLeft->pRight = new Node(-1);
	head->pRight->pLeft = new Node(-1);
	head->pRight->pRight = new Node(-1);

	head->pLeft->pLeft->pLeft = new Node(-1);
	head->pLeft->pLeft->pRight = new Node(-1);
	head->pLeft->pRight->pLeft = new Node(-1);
	head->pLeft->pRight->pRight = new Node(-1);
	head->pRight->pLeft->pLeft = new Node(-1);
	head->pRight->pLeft->pRight = new Node(-1);
	head->pRight->pRight->pLeft = new Node(-1);
	head->pRight->pRight->pRight = new Node(-1);

	head->pLeft->pLeft->pLeft->pLeft = new Node(-1);
	head->pLeft->pLeft->pLeft->pRight = new Node(-1);
	head->pLeft->pLeft->pRight->pLeft = new Node(-1);
	head->pLeft->pLeft->pRight->pRight = new Node(-1);
	head->pLeft->pRight->pLeft->pLeft = new Node(-1);
	head->pLeft->pRight->pLeft->pRight = new Node(-1);
	head->pLeft->pRight->pRight->pLeft = new Node(-1);
	head->pLeft->pRight->pRight->pRight = new Node(-1);
	head->pRight->pLeft->pLeft->pLeft = new Node(-1);
	head->pRight->pLeft->pLeft->pRight = new Node(-1);
	head->pRight->pLeft->pRight->pLeft = new Node(-1);
	head->pRight->pLeft->pRight->pRight = new Node(-1);
	head->pRight->pRight->pLeft->pLeft = new Node(-1);
	head->pRight->pRight->pLeft->pRight = new Node(-1);
	head->pRight->pRight->pRight->pLeft = new Node(-1);
	head->pRight->pRight->pRight->pRight = new Node(-1);

	head->pLeft->pLeft->pLeft->pLeft->pLeft = new Node(-1);
	head->pLeft->pLeft->pLeft->pLeft->pRight = new Node(-1);
	head->pLeft->pLeft->pLeft->pRight->pLeft = new Node(-1);
	head->pLeft->pLeft->pLeft->pRight->pRight = new Node(-1);
	head->pLeft->pLeft->pRight->pLeft->pLeft = new Node(-1);
	head->pLeft->pLeft->pRight->pLeft->pRight = new Node(-1);
	head->pLeft->pLeft->pRight->pRight->pLeft = new Node(-1);
	head->pLeft->pLeft->pRight->pRight->pRight = new Node(-1);
	head->pLeft->pRight->pLeft->pLeft->pLeft = new Node(-1);
	head->pLeft->pRight->pLeft->pLeft->pRight = new Node(-1);
	head->pLeft->pRight->pLeft->pRight->pLeft = new Node(-1);
	head->pLeft->pRight->pLeft->pRight->pRight = new Node(-1);
	head->pLeft->pRight->pRight->pLeft->pLeft = new Node(-1);
	head->pLeft->pRight->pRight->pLeft->pRight = new Node(-1);
	head->pLeft->pRight->pRight->pRight->pLeft = new Node(-1);
	head->pLeft->pRight->pRight->pRight->pRight = new Node(-1);
	head->pRight->pLeft->pLeft->pLeft->pLeft = new Node(-1);
	head->pRight->pLeft->pLeft->pLeft->pRight = new Node(-1);
	head->pRight->pLeft->pLeft->pRight->pLeft = new Node(-1);
	head->pRight->pLeft->pLeft->pRight->pRight = new Node(-1);
	head->pRight->pLeft->pRight->pLeft->pLeft = new Node(-1);
	head->pRight->pLeft->pRight->pLeft->pRight = new Node(-1);
	head->pRight->pLeft->pRight->pRight->pLeft = new Node(-1);
	head->pRight->pLeft->pRight->pRight->pRight = new Node(-1);
	head->pRight->pRight->pLeft->pLeft->pLeft = new Node(-1);
	head->pRight->pRight->pLeft->pLeft->pRight = new Node(-1);
	head->pRight->pRight->pLeft->pRight->pLeft = new Node(-1);
	head->pRight->pRight->pLeft->pRight->pRight = new Node(-1);
	head->pRight->pRight->pRight->pLeft->pLeft = new Node(-1);
	head->pRight->pRight->pRight->pLeft->pRight = new Node(-1);
	head->pRight->pRight->pRight->pRight->pLeft = new Node(-1);
	head->pRight->pRight->pRight->pRight->pRight = new Node(-1);



}


void BinTree::set_last_frame()
{
	head->pLeft->pLeft->pLeft->pLeft->pLeft = new Node(-1);
	head->pLeft->pLeft->pLeft->pLeft->pRight = new Node(-1);
	head->pLeft->pLeft->pLeft->pRight->pLeft = new Node(-1);
	head->pLeft->pLeft->pLeft->pRight->pRight = new Node(-1);
	head->pLeft->pLeft->pRight->pLeft->pLeft = new Node(-1);
	head->pLeft->pLeft->pRight->pLeft->pRight = new Node(-1);
	head->pLeft->pLeft->pRight->pRight->pLeft = new Node(-1);
	head->pLeft->pLeft->pRight->pRight->pRight = new Node(-1);
	head->pLeft->pRight->pLeft->pLeft->pLeft = new Node(-1);
	head->pLeft->pRight->pLeft->pLeft->pRight = new Node(-1);
	head->pLeft->pRight->pLeft->pRight->pLeft = new Node(-1);
	head->pLeft->pRight->pLeft->pRight->pRight = new Node(-1);
	head->pLeft->pRight->pRight->pLeft->pLeft = new Node(-1);
	head->pLeft->pRight->pRight->pLeft->pRight = new Node(-1);
	head->pLeft->pRight->pRight->pRight->pLeft = new Node(-1);
	head->pLeft->pRight->pRight->pRight->pRight = new Node(-1);
	head->pRight->pLeft->pLeft->pLeft->pLeft = new Node(-1);
	head->pRight->pLeft->pLeft->pLeft->pRight = new Node(-1);
	head->pRight->pLeft->pLeft->pRight->pLeft = new Node(-1);
	head->pRight->pLeft->pLeft->pRight->pRight = new Node(-1);
	head->pRight->pLeft->pRight->pLeft->pLeft = new Node(-1);
	head->pRight->pLeft->pRight->pLeft->pRight = new Node(-1);
	head->pRight->pLeft->pRight->pRight->pLeft = new Node(-1);
	head->pRight->pLeft->pRight->pRight->pRight = new Node(-1);
	head->pRight->pRight->pLeft->pLeft->pLeft = new Node(-1);
	head->pRight->pRight->pLeft->pLeft->pRight = new Node(-1);
	head->pRight->pRight->pLeft->pRight->pLeft = new Node(-1);
	head->pRight->pRight->pLeft->pRight->pRight = new Node(-1);
	head->pRight->pRight->pRight->pLeft->pLeft = new Node(-1);
	head->pRight->pRight->pRight->pLeft->pRight = new Node(-1);
	head->pRight->pRight->pRight->pRight->pLeft = new Node(-1);
	head->pRight->pRight->pRight->pRight->pRight = new Node(-1);
}


bool BinTree::add(int data)
{

	if (size == 0)
	{
		head->data = data;
		size++;
		return true;
	}
	else
	{
		Node* curr = this->head;

		while (true)
		{


			if (data >= curr->data)
			{

				if (curr->pRight->data < 0)
				{

					curr->pRight->data = data;
					vector <vector <int>> values = give_values();

					if (not isEmpty(values[5]))
					{
						set_last_frame();
						return false;
					}

					size++;
					return true;
				}
				else
				{
					curr = curr->pRight;
				}
			}

			else if (data <= curr->data)
			{

				if (curr->pLeft->data < 0)
				{
					curr->pLeft->data = data;
					vector <vector <int>> values = give_values();

					if (not isEmpty(values[5]))
					{
						set_last_frame();
						return false;
					}

					size++;
					return true;
				}
				else
				{
					curr = curr->pLeft;
				}
			}
		}
	}
}

bool BinTree::isEmpty(vector <int> values)
{
	bool Empty = true;

	for (int i = 0; i < values.size(); i++)
	{
		if (values[i] != -1) {
			Empty = false;
			return Empty;
		}
	}
	return Empty;
}


vector <vector <int>> BinTree::give_values()
{
	
	Node* curr = this->head;
	vector<Node*> tree_vector;
	tree_vector.push_back(this->head);


	vector <Node*> current_nodes;
	int deep = 0;

	vector <vector <int>> values;
	vector <int> current_values;

	while (tree_vector.size() != 0)
	{
		current_nodes.clear();
		deep++;

		for (int i = 0; i < tree_vector.size(); i++)
		{
			current_values.push_back(tree_vector[i]->data);

			if (tree_vector[i]->pLeft != nullptr)
			{
				current_nodes.push_back(tree_vector[i]->pLeft);
			}

			if (tree_vector[i]->pRight != nullptr)
			{
				current_nodes.push_back(tree_vector[i]->pRight);
			}

		}

		values.push_back(current_values);
		tree_vector = current_nodes;
		current_values.clear();
	}

	return values;
}

void BinTree::print()
{

	vector <vector <int>> values = give_values();

	for (int i = 0; i < values.size(); i++)
	{
		if (values[i].size() != 1) {
			cout << endl;
		}
		cout << endl;
		for (int j = 0; j < values[i].size(); j++)
		{
			if (values[i].size() == 1) {

				if (isEmpty(values[i]) == true)
				{
					cout << "Дерево пустое!" << endl << endl;
					return;
				}

				for (int n = 0; n < 60; n++) {
					cout << " ";
				}
				if (values[i][j] != -1)
				{
					cout << values[i][j];
				}
				else {
					cout << "__";
				}
			}

			if (values[i].size() == 2) {

				if (isEmpty(values[i]) == true)
				{
					return;
				}

				for (int n = 0; n < 30; n++) {
					cout << " ";
				}
				if (values[i][j] != -1)
				{
					cout << values[i][j];
				}
				else {
					cout << "__";
				}

				for (int n = 0; n < 32; n++) {
					cout << " ";
				}
			}

			if (values[i].size() == 4) {

				if (isEmpty(values[i]) == true)
				{
					return;
				}

				if (isEmpty(values[i]) == true)
				{
					return;
				}

				for (int n = 0; n < 15; n++) {
					cout << " ";
				}

				if (values[i][j] != -1)
				{
					cout << values[i][j];
				}
				else {
					cout << "__";
				}

				for (int n = 0; n < 15; n++) {
					cout << " ";
				}

			}

			if (values[i].size() == 8) {

				if (isEmpty(values[i]) == true)
				{
					return;
				}

				for (int n = 0; n < 7; n++) {
					cout << " ";
				}
				if (values[i][j] != -1)
				{
					cout << values[i][j];
				}
				else {
					cout << "__";
				}

				for (int n = 0; n < 7; n++) {
					cout << " ";
				}

			}

			if (values[i].size() == 16) {

				if (isEmpty(values[i]) == true)
				{
					return;
				}

				for (int n = 0; n < 3; n++) {
					cout << " ";
				}
				if (values[i][j] != -1)
				{
					cout << values[i][j];
				}
				else {
					cout << "__";
				}

				for (int n = 0; n < 3; n++) {
					cout << " ";
				}

			}

		}

	}

	cout << endl;
	cout << endl;
}


void BinTree::cleart(Node* node)
{
if (node == nullptr) 
{
	return;
}

cleart(node->pLeft);
cleart(node->pRight);

delete node;

node = nullptr;
set_frame();

}

void clear() {
	cout << "\x1B[2J\x1B[H";
}

int main()
{
	setlocale(LC_ALL, "RU");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
    BinTree bt;

    while (true) {
        string point;
		cout << "0.Выйти из программы\n1.Добавить элемент в бинарное дерево\n2.Просмотреть дерево (прямой обход)\n3.Очистить дерево\n" << endl;
        cin >> point;
        if (point == "0")
        {
            clear();
            exit(0);
        }
        if (point == "1")
        {
            clear();
            int data;
            string next;
			bool success;
            cout << "Введите число" << endl;
            cin >> data;
			success = bt.add(data);
            clear();
			
			if (success)
			{
				cout << "Элемент успешно добавлен!" << endl;
			}
			else
			{
				cout << "Достигнута максимальная глубина или размер дерева!" << endl << "Попробуйте вставить в дерево другое число или очистите старое дерево для работы с новым!" << endl;
			}
            cout << "Введите любой символ, чтобы продолжить: " << endl;
            cin >> next;
            clear();
        }
        if (point == "2")
        {
            clear();
            string next;
			bt.print();
            cout << "Введите любой символ, чтобы продолжить: " << endl;
            cin >> next;
            clear();
        }
        if (point == "3")
        {
            string next;
            if (bt.size != 0)
            {
				bt.cleart(bt.head);
                clear();
                cout << "Дерево успешно очищено!" << endl;
                cout << "Введите любой символ, чтобы продолжить: " << endl;
                cin >> next;
                clear();
            }
            else
            {
                clear();
                cout << "Дерево и так пустое!" << endl;
                cout << "Введите любой символ, чтобы продолжить: " << endl;
                cin >> next;
                clear();
            }
        }
		else {
			clear();
		}
    }

}

