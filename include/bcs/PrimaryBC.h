#pragma once

#include "PrimaryBCBase.h"

class PrimaryBC;

template <>
InputParameters validParams<PrimaryBC>();

class PrimaryBC : public PrimaryBCBase
{
public:
  static InputParameters validParams();

  PrimaryBC(const InputParameters & parameters);

protected:
  virtual Real bcValue() override;
};
