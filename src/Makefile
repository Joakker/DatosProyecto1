PROG		= predictor
CXXFLAGS	= -g -O0
DEPS		= main.o Trie/Trie.o

%.o: %.cpp
	$(CXX) -c $< -o $@

$(PROG): $(DEPS)
	$(CXX) $^ -o $@ $(CXXFLAGS)