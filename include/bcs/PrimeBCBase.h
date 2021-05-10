#pragma once

#include "DirichletBCBase.h"

class PrimeBCBase;

template <>
InputParameters validParams<PrimeBCBase>();

class PrimeBCBase : public DirichletBCBase
{
public:
  static InputParameters validParams();

  PrimeBCBase(const InputParameters & parameters);

protected:
  virtual Real computeQpValue() override;
  virtual Real bcValue() = 0;
};
