#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
#include <iomanip>
#include <fstream>
#include <sstream>
#include <ctime>
#include <algorithm>
using namespace std;

#include "sistema.hpp"
#include "usuario.hpp"
// Função principal
int main() {
    Sistema sistema;
    sistema.carregarUsuarios();
    sistema.exibirMenuInicial();
    return 0;
}