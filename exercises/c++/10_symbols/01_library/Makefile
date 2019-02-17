CXX = c++

SRC = source/hello.cc
OBJ = $(SRC:.cc=.o)

libhello.so: $(OBJ)
	$(CXX) -shared -o $@ $^

%.o:%.cc
	$(CXX) -fpic -o $@ -c $< -Iinclude

clean:
	@rm -f *~ */*~ libhello.so source/*.o

.PHONY: clean all format
