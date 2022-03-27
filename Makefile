exe=	sistema
obj= 	main.o								\
		classes/Juego.o 					\
		classes/Partida.o 					\
		classes/PartidaIndividual.o 		\
		classes/PartidaMultijugador.o		\
		datatypes/DtFechaHora.o				\
		datatypes/DtJuego.o					\
		datatypes/DtJugador.o				\
		datatypes/DtPartida.o				\
		datatypes/DtPartidaIndividual.o		\
		datatypes/DtPartidaMultijugador.o	\

all: $(obj)
	g++ $(obj) -o $(exe)
	@ echo "\nEjecutar con: ./$(exe)\n"

$(obj): %.o: %.cpp

clean: 
	@ rm -rf $(obj) $(exec) src/main 
	@ echo "Archivos de compilación eliminados"

