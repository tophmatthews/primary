#include "PrimaryBCBase.h"

defineLegacyParams(PrimaryBCBase);

InputParameters
PrimaryBCBase::validParams()
{
  return DirichletBCBase::validParams();
}

PrimaryBCBase::PrimaryBCBase(const InputParameters & parameters) : DirichletBCBase(parameters) {}

Real
PrimaryBCBase::computeQpValue()
{
  return bcValue();
}
