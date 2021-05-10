#pragma once

#include "PrimeBCBase.h"

class PrimeBC;

template <>
InputParameters validParams<PrimeBC>();

class PrimeBC : public PrimeBCBase
{
public:
  static InputParameters validParams();

  PrimeBC(const InputParameters & parameters);

protected:
  virtual Real bcValue() override;
};
