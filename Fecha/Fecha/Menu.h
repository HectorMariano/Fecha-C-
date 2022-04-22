#pragma once
#include <string>
#include <iostream>
#include "Fecha.h"

using namespace std;

class Menu{

	public:
		void FechaInicial() {
			int dia, mes, anio;
			int validacion = 0;

			do {
				std::cout << "Bienvenido al programa de manejo de fechas" << std::endl;
				std::cout << "Para empezar, ingrese una fecha. Comenzando por el dia: ";
				std::cin >> dia;
				if (dia < 0 || dia>31) {
					std::cout << "\nDia invalido. Intentelo de nuevo..." << std::endl;
					system("pause");
					system("cls");
				}
				else {
					validacion = 1;
				}
			} while (validacion == 0);

			do {
				std::cout << "\nIngrese el mes de la fecha: ";
				std::cin >> mes;
				if (mes < 1 || mes > 12) {
					std::cout << "\nMes invalido. Intentelo de nuevo..." << std::endl;
					system("pause");
					system("cls");
				}
				else {
					validacion = 0;
				}
			} while (validacion == 1);

			char c = 164;
			do {
				std::cout << "\nIngrese el a" << c << "o de la fecha : ";
				std::cin >> anio;
				if (anio < 0) {
					std::cout << "\nA" << c << "o invalido. Intentelo de nuevo..." << std::endl;
					system("pause");
					system("cls");
				}
				else {
					validacion = 1;
				}
			} while (validacion == 0);

			Fecha dia_1(dia, mes, anio);
			system("cls");
			ImprimirMenu(dia_1);
		}

		void ImprimirMenu(Fecha dia) {
			int reinicio = 0;

			do {
				int opcion;

				std::cout << "Fecha Registrada: ";
				dia.ImprimirDia();

				std::cout << "\n\nOpciones de Configuracion de la Fecha" << std::endl;
				std::cout << "1. Agregar un dia" << std::endl;
				std::cout << "2. Agregar un num. determinado de dias" << std::endl;
				std::cout << "3. Eliminar un dia" << std::endl;
				std::cout << "4. Eliminar un determinado num. de dias" << std::endl;
				std::cout << "5. Salir" << std::endl;
				std::cout << "Opciones Seleccionada: ";
				std::cin >> opcion;

				switch (opcion) {
				case 1:
					dia.AgregarDia();
					std::cout << "\n\nOperacion satisfactoria" << std::endl;
					system("pause");
					system("cls");
					break;

				case 2:
					int dias_extra;

					do {
						std::cout << "\n\nIngrese el numero de dias a agregar: ";
						std::cin >> dias_extra;

						if (dias_extra < 0) {
							std::cout << "Ingrese una opcion valida" << std::endl;
							system("pause");
							system("cls");
						}
					} while (dias_extra < 0);

					dia.AgregarDias_Especificos(dias_extra);
					std::cout << "\nOperacion satisfactoria" << std::endl;
					system("pause");
					system("cls");
					break;

				case 3:
					dia.EliminarDia();
					std::cout << "\n\nOperacion satisfactoria" << std::endl;
					system("pause");
					system("cls");
					break;

				case 4:
					int dias_menos;

					do {
						std::cout << "\n\nIngrese el numero de dias a eliminar: ";
						std::cin >> dias_menos;

						if (dias_menos < 0) {
							std::cout << "Ingrese una opcion valida" << std::endl;
							system("pause");
							system("cls");
						}
					} while (dias_menos < 0);

					dia.EliminarDia_Especificos(dias_menos);
					std::cout << "\nOperacion satisfactoria" << std::endl;
					system("pause");
					system("cls");
					break;
				
				case 5:
					reinicio = 1;
					break;
				

				default:
					std::cout << "Opcion incorrecta. Ingrese una opcion valida" << std::endl;
					system("pause");
					system("cls");
					break;
				}
			} while (reinicio == 0);

			std::cout << "\n\nGracias por usar el programa" << std::endl;
			system("pause");

		}


};

