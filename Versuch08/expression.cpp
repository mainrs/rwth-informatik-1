/*
 * Praktikum Informatik 1 MMXVII
 * Versuch 8: Taschenrechner
 *
 * Datei:  expression.cpp
 * Inhalt: Sourcedatei Abstrakte Klasse Expression
 */

#include "expression.h"
#include <iostream>

Expression::Expression()
{
	std::cout << "Created Expression@" << this << std::endl;
}

Expression::~Expression()
{
//	std::cout << "Deleted Expression@" << this << std::endl;
}
