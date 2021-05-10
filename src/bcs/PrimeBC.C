#include "PrimeBC.h"

registerMooseObject("PrimaryApp", PrimeBC);

defineLegacyParams(PrimeBC);

InputParameters
PrimeBC::validParams()
{
  return PrimeBCBase::validParams();
}

PrimeBC::PrimeBC(const InputParameters & parameters) : PrimeBCBase(parameters) {}

Real
PrimeBC::bcValue()
{
  return 1.0;
}
