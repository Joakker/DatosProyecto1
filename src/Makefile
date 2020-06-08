PROG		= predictor
CXXFLAGS	= -g -O0
DEPS		= main.o Trie/Trie.o Controlador/Controlador.o #Predictor/Predictor.o

%.o: %.cpp
	$(CXX) -c $< -o $@

$(PROG): $(DEPS)
	$(CXX) $^ -o $@ $(CXXFLAGS)