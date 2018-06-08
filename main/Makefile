CXX = g++ -std=c++11
INCLUDE = -I../include/
SOURCES = ../src/
CFLAGS = -g -c

all: main.exe

main.exe: main.o user.o food.o menu.o food_user.o order.o credit_card.o restaurant.o
	$(CXX) $(^) -o $(@)

main.o: main.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

food.o: $(SOURCES)food.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

user.o: $(SOURCES)user.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

menu.o: $(SOURCES)menu.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

food_user.o: $(SOURCES)food_user.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

order.o: $(SOURCES)order.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

credit_card.o: $(SOURCES)credit_card.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

restaurant.o: $(SOURCES)restaurant.cpp
	$(CXX) $(^) $(CFLAGS) $(INCLUDE)

clean:
	rm -f *.o *.exe