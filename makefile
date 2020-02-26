all:length_of_last_word.cpp
	g++ length_of_last_word.cpp -o last_word
	./last_word

clean:
	rm last_word
