#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

vector<int>* dynamic_vector_generator()
{
	return new vector<int>();
}

void dynamic_vector_processor(vector<int>* ptr_v)
{
	int i;
	cout << "plz enter:\n";
	while(cin >> i && i != 999)
		ptr_v -> push_back(i);
}

void dynamic_vector_printer(const vector<int>* ptr_v)
{
	for(auto& i: *ptr_v)
		cout << i << " ";
}

int main()
{
	vector<int> *v = dynamic_vector_generator();
	dynamic_vector_processor(v);
	dynamic_vector_printer(v);
	
	delete v;
	return 0;
}