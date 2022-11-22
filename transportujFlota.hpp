#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    unsigned int no_zaglowce  = 0;
    unsigned int transported_towar = 0;
    Stocznia stocznia;

    while (transported_towar < towar) {

        Statek* statek = stocznia();
        no_zaglowce += dynamic_cast< Zaglowiec* >(statek) != nullptr;
        transported_towar += statek->transportuj();
        delete statek;
    }

    return no_zaglowce;
}