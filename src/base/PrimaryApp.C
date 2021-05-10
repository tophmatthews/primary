#include "PrimaryApp.h"
#include "Moose.h"
#include "AppFactory.h"
#include "ModulesApp.h"
#include "MooseSyntax.h"

InputParameters
PrimaryApp::validParams()
{
  InputParameters params = MooseApp::validParams();

  // Do not use legacy material output, i.e., output properties on INITIAL as well as TIMESTEP_END
  params.set<bool>("use_legacy_material_output") = false;

  return params;
}

PrimaryApp::PrimaryApp(InputParameters parameters) : MooseApp(parameters)
{
  PrimaryApp::registerAll(_factory, _action_factory, _syntax);
}

PrimaryApp::~PrimaryApp() {}

void
PrimaryApp::registerAll(Factory & f, ActionFactory & af, Syntax & syntax)
{
  ModulesApp::registerAll(f, af, syntax);
  Registry::registerObjectsTo(f, {"PrimaryApp"});
  Registry::registerActionsTo(af, {"PrimaryApp"});

  /* register custom execute flags, action syntax, etc. here */
}

void
PrimaryApp::registerApps()
{
  registerApp(PrimaryApp);
}

/***************************************************************************************************
 *********************** Dynamic Library Entry Points - DO NOT MODIFY ******************************
 **************************************************************************************************/
extern "C" void
PrimaryApp__registerAll(Factory & f, ActionFactory & af, Syntax & s)
{
  PrimaryApp::registerAll(f, af, s);
}
extern "C" void
PrimaryApp__registerApps()
{
  PrimaryApp::registerApps();
}
