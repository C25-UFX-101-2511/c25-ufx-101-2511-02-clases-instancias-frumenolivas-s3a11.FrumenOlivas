// Test definitions. Do NOT edit this file!

#define CATCH_CONFIG_MAIN // defines main() automatically

#include <catch2/catch.hpp>

#include "../Alumno.hpp"

TEST_CASE("Ex1", "[Probando constructor por default]")
{
    Alumno a;
    SECTION("Verificando sus atributos iniciales")
    {
        REQUIRE(a.getMatricula()=="A000000");
        REQUIRE(a.getNombre()=="RICARDO RAFAEL QUINTERO MEZA");
        REQUIRE(a.getEdad()==18);
        REQUIRE(a.getCarrera()=="ITC");
    }
}

TEST_CASE("Ex2", "[Probando constructor con parametros iniciales]")
{
    Alumno a("A178940", "LUZ LOPEZ CISNEROS", 19, "IC");
    SECTION("Verificando sus atributos iniciales")
    {
        REQUIRE(a.getMatricula()=="A178940");
        REQUIRE(a.getNombre()=="LUZ LOPEZ CISNEROS");
        REQUIRE(a.getEdad()==19);
        REQUIRE(a.getCarrera()=="IC");
    }
}

TEST_CASE("Ex3", "[Probando setters]")
{
    Alumno a("A178940", "LUZ LOPEZ CISNEROS", 19, "IC");
    SECTION("Verificando cambios en los atributos")
    {
        a.setMatricula("A178936");
        a.setNombre("CAROLINA CASTRO HERRERA");
        a.setEdad(20);
        a.setCarrera("IMT");


        REQUIRE(a.getMatricula()=="A178936");
        REQUIRE(a.getNombre()=="CAROLINA CASTRO HERRERA");
        REQUIRE(a.getEdad()==20);
        REQUIRE(a.getCarrera()=="IMT");
    }
}

TEST_CASE("Ex4", "[Probando Imprimir alumno]")
{
    Alumno a("A178940", "LUZ LOPEZ CISNEROS", 19, "IC");
    SECTION("Mostrando en consola los datos del alumno")
    {
        a.imprimeAlumno();

        REQUIRE(true);
    }
}

TEST_CASE("Ex5", "[Probando el cumpleaños del alumno]")
{
    Alumno a("A178940", "LUZ LOPEZ CISNEROS", 19, "IC");
    a.cumpleAnios();
    SECTION("Festejando al alumno por su cumpleaños")
    {
        std::cout << "Felicidades " << a.getNombre() << " por tu cumpleaños No. " 
        << a.getEdad() << " !\n";

        REQUIRE(a.getEdad()==20);
    }
}