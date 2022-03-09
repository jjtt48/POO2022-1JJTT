all: compilar
compilar: mascota propietario propietarioxMascota sistema main
	g++ -o Salida Propietario.o Mascota.o PropietarioxMascota.o Sistema.o Main.o
mascota: Mascota.cpp Mascota.h
	g++ -c Mascota.cpp
propietario: Propietario.cpp Propietario.h 
	g++ -c Propietario.cpp

propietarioxMascota: PropietarioxMascota.cpp Mascota.h Propietario.h
	g++ -c PropietarioxMascota.cpp
sistema: Propietario.h Mascota.h PropietarioxMascota.h Sistema.cpp Sistema.h 
	g++ -c Sistema.cpp
main: Main.cpp
	g++ -c Main.cpp
clean: #Comando para borrar los o.
	@echo "Cleaning Compilation..."
	del *.o