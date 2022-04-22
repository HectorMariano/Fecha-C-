#pragma once
#include <string>
#include <iostream>

class Fecha{
private:
	int dia, mes, anio;

public:
	Fecha(int dia_aux, int mes_aux, int anio_aux) : dia(dia_aux), mes(mes_aux), anio(anio_aux) {};

	void AgregarDia() {
		dia = dia++;
		do {
			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
				if (dia > 31) {
					int aux = dia - 31;
					dia = aux;
					mes++;
					if (mes > 12) {
						mes = 1;
						anio++;
					}
				}
			}

			if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
				if (dia > 30) {
					int aux = dia - 30;
					dia = aux;
					mes++;
				}
			}

			if (mes == 2) {

				if (anio % 4 == 0 && anio % 100 != 0) {
					if (dia > 29) {
						int aux = dia - 29;
						dia = aux;
						mes++;
					}
				}

				else if (anio % 400 == 0) {
					if (dia > 29) {
						int aux = dia - 29;
						dia = aux;
						mes++;
					}
				}

				else if (dia > 28) {
					int aux = dia - 28;
					dia = aux;
					mes++;
				}
			}

		} while (dia > 31);
	}

	void AgregarDias_Especificos(int mas_dias) {
		dia += mas_dias;
		
		do {
			if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
				if (dia > 31) {
					int aux = dia - 31;
					dia = aux;
					mes++;
					if (mes > 12) {
						mes = 1;
						anio++;
					}
				}
			}

			if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
				if (dia > 30) {
					int aux = dia - 30;
					dia = aux;
					mes++;
				}
			}

			if (mes == 2) {

				if (anio % 4 == 0 && anio % 100 != 0) {
					if (dia > 29) {
						int aux = dia - 29;
						dia = aux;
						mes++;
					}
				}

				else if (anio % 400 == 0) {
					if (dia > 29) {
						int aux = dia - 29;
						dia = aux;
						mes++;
					}
				}

				else if (dia > 28) {
					int aux = dia - 28;
					dia = aux;
					mes++;
				}
			}

		}while (dia > 31);
	}

	void EliminarDia() {
		dia--;

		if (mes == 1 || mes == 2 || mes == 4 || mes == 6 || mes == 8 || mes == 9 || mes == 11) {
			if (dia < 1) {
				int aux = 31 + dia;
				dia = aux;
				mes--;

				if (mes < 1) {
					mes = 12;
					anio--;
				}
			}
		}

		if (mes == 5 || mes == 7 || mes == 10 || mes == 12) {
			if (dia < 1) {
				int aux = 30 + dia;
				dia = aux;
				mes--;
			}
		}

		if (mes == 3) {
			if (anio % 4 == 0 && anio % 100 != 0) {
				if (dia < 1) {
					int aux = 29 + dia;
					dia = aux;
					mes--;
				}
			}
			if (anio % 400 == 0) {
				if (dia < 1) {
					int aux = 29 + dia;
					dia = aux;
					mes--;
				}
			}
			if (dia < 1) {
				int aux = 28 + dia;
				dia = aux;
				mes--;
			}
		}

		/*if (mes == 2) {
			 if (dia < 1) {
				int aux = 31 + dia;
				dia = aux;
				mes--;
			}
		}*/
	}

	void EliminarDia_Especificos(int menos_dias) {
		dia -= menos_dias;

		do {
			if (mes == 1 || mes == 2 || mes == 4 || mes == 6 || mes == 8 || mes == 9 || mes == 11) {
				if (dia < 1) {
					int aux = 31 + dia;
					dia = aux;
					mes--;

					if (mes < 1) {
						mes = 12;
						anio--;
					}
				}
			}

			if (mes == 5 || mes == 7 || mes == 10 || mes == 12) {
				if (dia < 1) {
					int aux = 30 + dia;
					dia = aux;
					mes--;
				}
			}

			if (mes == 3) {
				if (anio % 4 == 0 && anio % 100 != 0) {
					if (dia < 1) {
						int aux = 29 + dia;
						dia = aux;
						mes--;
					}
				}
				if (anio % 400 == 0) {
					if (dia < 1) {
						int aux = 29 + dia;
						dia = aux;
						mes--;
					}
				}
				if (dia < 1) {
					int aux = 28 + dia;
					dia = aux;
					mes--;
				}
			}
		} while (dia < 1);
	}

	void  ImprimirDia() {
		std::cout << dia << "/" << mes << "/" << anio;
	}

};

