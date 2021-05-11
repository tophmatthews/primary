#pragma once

#include "DirichletBCBase.h"

class PrimaryBCBase;

template <>
InputParameters validParams<PrimaryBCBase>();

class PrimaryBCBase : public DirichletBCBase
{
public:
  static InputParameters validParams();

  PrimaryBCBase(const InputParameters & parameters);

protected:
  virtual Real computeQpValue() override;
  virtual Real bcValue() = 0;
};
