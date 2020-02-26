#include <iostream>

std::string get_last_word(const std::string& str){
	if(str.length() == 0){
		std::cerr << "There is no string !" << std::endl;
		return " ";
	}
	int len = str.length();
	int i = len;
	while (i > -1 && str[i] != ' '){
		i--;
	}
	int last_word_size = 0;
	std::string last_word;
	for(int k = i + 1; k < len; k++){
		last_word += str[k];
		last_word_size++;
	}
	std::cout << "the last words length is " 
		<< last_word_size << std::endl;
	return last_word;
}

int main()
{
	std::string str;
	std::cout << "Enter a string ";
	std::cout << std::endl;
	std::getline(std::cin, str);
	std::cout << get_last_word(str);
	std::cout << std::endl;
}



