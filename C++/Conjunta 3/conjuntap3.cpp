#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iomanip>
#include <numeric> 

using namespace std;

const int NUM_ARTICULOS = 10;
const int NUM_SUCURSALES = 4;
const string NOMBRES_ARTICULOS[NUM_ARTICULOS] = {"Laptop", "Mouse", "Teclado", "Monitor", "Laptop", "Impresora", "Mouse", "Webcam", "Teclado", "Monitor"};
const double PRECIOS_ARTICULOS[NUM_ARTICULOS] = {1200.00, 25.00, 45.00, 250.00, 1200.00, 180.00, 25.00, 60.00, 45.00, 250.00};
const int CANTIDADES_ARTICULOS[NUM_ARTICULOS][NUM_SUCURSALES] = {
    {5, 0, 0, 0}, {0, 15, 0, 0}, {0, 0, 8, 0}, {0, 0, 0, 3},
    {0, 2, 0, 0}, {4, 0, 0, 0}, {0, 0, 20, 0}, {0, 0, 0, 6},
    {10, 0, 0, 0}, {0, 7, 0, 0}
};

struct Articulo {
    string nombre;
    double precio;
    vector<int> cantidadesVendidas; 
};

void leerDatos(vector<Articulo>& articulos) {
    for (int i = 0; i < NUM_ARTICULOS; i++) {
        articulos[i].nombre = NOMBRES_ARTICULOS[i];
        articulos[i].precio = PRECIOS_ARTICULOS[i];
        articulos[i].cantidadesVendidas = vector<int>(NUM_SUCURSALES);
        
        for (int j = 0; j < NUM_SUCURSALES; j++) {
            articulos[i].cantidadesVendidas[j] = CANTIDADES_ARTICULOS[i][j];
        }
    }
}

void calcularTotales(const vector<Articulo>& articulos, double& recaudacionTotalEmpresa, double recaudacionesSucursal[NUM_SUCURSALES], int& cantidadesSucursalSur, int& cantidadTecladoNorte) {
    recaudacionTotalEmpresa = 0;
    for (const auto& articulo : articulos) {
        double recaudacionArticulo = 0;
        
        for (int j = 0; j < NUM_SUCURSALES; j++) {
            int cantidadVendida = articulo.cantidadesVendidas[j];
            recaudacionArticulo += cantidadVendida * articulo.precio;
            recaudacionesSucursal[j] += cantidadVendida * articulo.precio;

            if (j == 2) { // Sucursal Sur
                cantidadesSucursalSur += cantidadVendida;
            }
            if (articulo.nombre == "Teclado" && j == 0) { // Sucursal Norte
                cantidadTecladoNorte = cantidadVendida;
            }
        }
        recaudacionTotalEmpresa += recaudacionArticulo;
    }
}

int obtenerSucursalMayorRecaudacion(const double recaudacionesSucursal[NUM_SUCURSALES]) {
    int sucursalMayor = 0;
    for (int i = 1; i < NUM_SUCURSALES; i++) {
        if (recaudacionesSucursal[i] > recaudacionesSucursal[sucursalMayor]) {
            sucursalMayor = i;
        }
    }
    return sucursalMayor;
}

void guardarEnArchivo(const string& archivo, const vector<Articulo>& articulos, double recaudacionTotalEmpresa, const double recaudacionesSucursal[NUM_SUCURSALES], int cantidadesSucursalSur, int cantidadTecladoNorte) {
    ofstream outFile(archivo);
    
    if (outFile.is_open()) {
        outFile << left << setw(5) << "ID" << setw(15) << "PRODUCTO" << setw(15) << "CANTIDAD TOTAL" 
                << setw(10) << "PRECIO" << setw(18) << "NORTE" << setw(15) << "CENTRO" 
                << setw(15) << "SUR" << setw(15) << "ESTE" << endl;
        outFile << "-------------------------------------------------------------------------------" << endl;

        int id = 1;
        for (const auto& articulo : articulos) {
            outFile << left << setw(5) << id++ << setw(15) << articulo.nombre << setw(15) 
                    << accumulate(articulo.cantidadesVendidas.begin(), articulo.cantidadesVendidas.end(), 0) 
                    << setw(10) << fixed << setprecision(2) << articulo.precio;
            for (int j = 0; j < NUM_SUCURSALES; j++) {
                outFile << setw(15) << articulo.cantidadesVendidas[j];
            }
            outFile << endl;
        }

        outFile << "\nRecaudacion total de la empresa: " << fixed << setprecision(2) << recaudacionTotalEmpresa << endl;
        outFile << "Recaudacion total por sucursal:\n";
        outFile << "Norte: " << fixed << setprecision(2) << recaudacionesSucursal[0] << endl;
        outFile << "Centro: " << fixed << setprecision(2) << recaudacionesSucursal[1] << endl;
        outFile << "Sur: " << fixed << setprecision(2) << recaudacionesSucursal[2] << endl;
        outFile << "Este: " << fixed << setprecision(2) << recaudacionesSucursal[3] << endl;

        outFile << "\nSucursal con mayor recaudacion: ";
        switch (obtenerSucursalMayorRecaudacion(recaudacionesSucursal)) {
            case 0: outFile << "Norte"; break;
            case 1: outFile << "Centro"; break;
            case 2: outFile << "Sur"; break;
            case 3: outFile << "Este"; break;
        }

        outFile << "\nCantidad total de articulos vendidos en Sur: " << cantidadesSucursalSur << endl;
        outFile << "Cantidad de teclados vendidos en Norte: " << cantidadTecladoNorte << endl;

        outFile.close(); 
    } else {
        cerr << "No se pudo abrir el archivo para escribir." << endl;
    }
}

int main() {
    vector<Articulo> articulos(NUM_ARTICULOS);
    double recaudacionTotalEmpresa = 0;
    double recaudacionesSucursal[NUM_SUCURSALES] = {0}; 
    int cantidadesSucursalSur = 0;
    int cantidadTecladoNorte = 0;

    leerDatos(articulos);
    calcularTotales(articulos, recaudacionTotalEmpresa, recaudacionesSucursal, cantidadesSucursalSur, cantidadTecladoNorte);
    guardarEnArchivo("consolidado.txt", articulos, recaudacionTotalEmpresa, recaudacionesSucursal, cantidadesSucursalSur, cantidadTecladoNorte);

    cout << "La informacion se ha guardado en el archivo consolidado.txt" << endl;
    return 0;
}
