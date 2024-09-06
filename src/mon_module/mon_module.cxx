#include "mon_module.h"
#include <pybind11/pybind11.h>

PYBIND11_MODULE(mon_module, m) {
    pybind11::class_<MaClasse>(m, "MaClasse")
        .def(pybind11::init<int>())
        .def("getValeur", &MaClasse::getValeur);
}

// -------------------------------------------------

MaClasse::MaClasse(int val) : valeur(val) {

}

int MaClasse::getValeur() const {
    return valeur;
}
