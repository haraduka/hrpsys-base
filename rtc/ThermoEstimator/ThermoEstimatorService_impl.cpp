#include "ThermoEstimatorService_impl.h"
#include "ThermoEstimator.h"

ThermoEstimatorService_impl::ThermoEstimatorService_impl() : m_thermoestimator(NULL)
{
}

ThermoEstimatorService_impl::~ThermoEstimatorService_impl()
{
}

CORBA::Boolean ThermoEstimatorService_impl::setParam(const OpenHRP::ThermoEstimatorService::ThermoEstimatorParam& i_param)
{
    return m_thermoestimator->setParam(i_param);
};

CORBA::Boolean ThermoEstimatorService_impl::getParam(OpenHRP::ThermoEstimatorService::ThermoEstimatorParam& i_param)
{
    return m_thermoestimator->getParam(i_param);
};

CORBA::Boolean ThermoEstimatorService_impl::setTemp(const OpenHRP::ThermoEstimatorService::DblSequence& temp)
{
    return m_thermoestimator->setTemp(temp);
};

CORBA::Boolean ThermoEstimatorService_impl::getTemp(OpenHRP::ThermoEstimatorService::DblSequence_out temp)
{
    temp = new OpenHRP::ThermoEstimatorService::DblSequence();
    return m_thermoestimator->getTemp(*temp);
};

CORBA::Boolean ThermoEstimatorService_impl::reset()
{
    return m_thermoestimator->reset();
};

void ThermoEstimatorService_impl::thermoestimator(ThermoEstimator *i_thermoestimator)
{
    m_thermoestimator = i_thermoestimator;
}

