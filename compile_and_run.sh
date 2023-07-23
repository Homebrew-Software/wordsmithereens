g++ -c src/main.cpp -c src/player.cpp \
&& g++ main.o player.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system \
&& ./sfml-app
