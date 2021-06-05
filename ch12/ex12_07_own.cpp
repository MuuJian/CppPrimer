#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

std::shared_ptr<std::vector<int>> dynamic_vector_generator_sptr();

void dynamic_vector_processor_sptr(std::shared_ptr<std::vector<int>> sptr_vi);

void dynamic_vector_printer_sptr(
	const std::shared_ptr<std::vector<int>> sptr_vi);

shared_ptr<vector<int>> dynamic_vector_generator_sptr()
{
	return make_shared<vector<int>>();
}

void dynamic_vector_processor_sptr(shared_ptr<vector<int>> sptr_vi)
{
	int i;
	cout << "plz enter:\n";
	while(cin >> i && i != 999)
		sptr_vi -> push_back(i);
}

void dynamic_vector_printer_sptr(shared_ptr<vector<int>> sptr_vi)
{
	for(const auto& i: *sptr_vi)
		cout << i << " ";
}


int main()
{
	auto sptr = dynamic_vector_generator_sptr();
	dynamic_vector_processor_sptr(sptr);
	dynamic_vector_printer_sptr(sptr);

	return 0;
}