// -*- mode: c++; indent-tabs-mode: t; tab-width: 4; c-basic-offset: 4; -*-
#ifndef __THERMO_ESTIMATOR_SERVICE_H__
#define __THERMO_ESTIMATOR_SERVICE_H__

#include "hrpsys/idl/ThermoEstimatorService.hh"

using namespace OpenHRP;

class ThermoEstimator;

class ThermoEstimatorService_impl
    : public virtual POA_OpenHRP::ThermoEstimatorService,
      public virtual PortableServer::RefCountServantBase
{
public:
    ThermoEstimatorService_impl();
    virtual ~ThermoEstimatorService_impl();

    CORBA::Boolean setParam(const OpenHRP::ThermoEstimatorService::ThermoEstimatorParam& i_param);
    CORBA::Boolean getParam(OpenHRP::ThermoEstimatorService::ThermoEstimatorParam& i_param);
    CORBA::Boolean setTemp(const OpenHRP::ThermoEstimatorService::DblSequence& temp);
    CORBA::Boolean getTemp(OpenHRP::ThermoEstimatorService::DblSequence_out temp);
    CORBA::Boolean reset();
    void thermoestimator(ThermoEstimator *i_thermoestimator);

private:
    ThermoEstimator *m_thermoestimator;
};

#endif
