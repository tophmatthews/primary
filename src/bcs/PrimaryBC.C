#include "PrimaryBC.h"

registerMooseObject("PrimaryApp", PrimaryBC);

defineLegacyParams(PrimaryBC);

InputParameters
PrimaryBC::validParams()
{
  return PrimaryBCBase::validParams();
}

PrimaryBC::PrimaryBC(const InputParameters & parameters) : PrimaryBCBase(parameters) {}

Real
PrimaryBC::bcValue()
{
  return 1.0;
}
