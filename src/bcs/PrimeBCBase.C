#include "PrimeBCBase.h"

defineLegacyParams(PrimeBCBase);

InputParameters
PrimeBCBase::validParams()
{
  return DirichletBCBase::validParams();
}

PrimeBCBase::PrimeBCBase(const InputParameters & parameters) : DirichletBCBase(parameters) {}

Real
PrimeBCBase::computeQpValue()
{
  return bcValue();
}
