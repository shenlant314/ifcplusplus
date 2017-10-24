/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBSplineCurveForm.h"
#include "ifcpp/IFC4/include/IfcCartesianPoint.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcKnotType.h"
#include "ifcpp/IFC4/include/IfcLogical.h"
#include "ifcpp/IFC4/include/IfcParameterValue.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcRationalBSplineCurveWithKnots.h"
#include "ifcpp/IFC4/include/IfcReal.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcRationalBSplineCurveWithKnots 
IfcRationalBSplineCurveWithKnots::IfcRationalBSplineCurveWithKnots() {}
IfcRationalBSplineCurveWithKnots::IfcRationalBSplineCurveWithKnots( int id ) { m_entity_id = id; }
IfcRationalBSplineCurveWithKnots::~IfcRationalBSplineCurveWithKnots() {}
shared_ptr<IfcPPObject> IfcRationalBSplineCurveWithKnots::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRationalBSplineCurveWithKnots> copy_self( new IfcRationalBSplineCurveWithKnots() );
	if( m_Degree ) { copy_self->m_Degree = dynamic_pointer_cast<IfcInteger>( m_Degree->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_ControlPointsList.size(); ++ii )
	{
		auto item_ii = m_ControlPointsList[ii];
		if( item_ii )
		{
			copy_self->m_ControlPointsList.push_back( dynamic_pointer_cast<IfcCartesianPoint>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_CurveForm ) { copy_self->m_CurveForm = dynamic_pointer_cast<IfcBSplineCurveForm>( m_CurveForm->getDeepCopy(options) ); }
	if( m_ClosedCurve ) { copy_self->m_ClosedCurve = dynamic_pointer_cast<IfcLogical>( m_ClosedCurve->getDeepCopy(options) ); }
	if( m_SelfIntersect ) { copy_self->m_SelfIntersect = dynamic_pointer_cast<IfcLogical>( m_SelfIntersect->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_KnotMultiplicities.size(); ++ii )
	{
		auto item_ii = m_KnotMultiplicities[ii];
		if( item_ii )
		{
			copy_self->m_KnotMultiplicities.push_back( dynamic_pointer_cast<IfcInteger>(item_ii->getDeepCopy(options) ) );
		}
	}
	for( size_t ii=0; ii<m_Knots.size(); ++ii )
	{
		auto item_ii = m_Knots[ii];
		if( item_ii )
		{
			copy_self->m_Knots.push_back( dynamic_pointer_cast<IfcParameterValue>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_KnotSpec ) { copy_self->m_KnotSpec = dynamic_pointer_cast<IfcKnotType>( m_KnotSpec->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_WeightsData.size(); ++ii )
	{
		auto item_ii = m_WeightsData[ii];
		if( item_ii )
		{
			copy_self->m_WeightsData.push_back( dynamic_pointer_cast<IfcReal>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcRationalBSplineCurveWithKnots::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRATIONALBSPLINECURVEWITHKNOTS" << "(";
	if( m_Degree ) { m_Degree->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_ControlPointsList );
	stream << ",";
	if( m_CurveForm ) { m_CurveForm->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ClosedCurve ) { m_ClosedCurve->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_SelfIntersect ) { m_SelfIntersect->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeNumericTypeList( stream, m_KnotMultiplicities );
	stream << ",";
	writeNumericTypeList( stream, m_Knots );
	stream << ",";
	if( m_KnotSpec ) { m_KnotSpec->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeNumericTypeList( stream, m_WeightsData );
	stream << ");";
}
void IfcRationalBSplineCurveWithKnots::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRationalBSplineCurveWithKnots::toString() const { return L"IfcRationalBSplineCurveWithKnots"; }
void IfcRationalBSplineCurveWithKnots::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 9 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRationalBSplineCurveWithKnots, expecting 9, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Degree = IfcInteger::createObjectFromSTEP( args[0], map );
	readEntityReferenceList( args[1], m_ControlPointsList, map );
	m_CurveForm = IfcBSplineCurveForm::createObjectFromSTEP( args[2], map );
	m_ClosedCurve = IfcLogical::createObjectFromSTEP( args[3], map );
	m_SelfIntersect = IfcLogical::createObjectFromSTEP( args[4], map );
	readTypeOfIntList( args[5], m_KnotMultiplicities );
	readTypeOfRealList( args[6], m_Knots );
	m_KnotSpec = IfcKnotType::createObjectFromSTEP( args[7], map );
	readTypeOfRealList( args[8], m_WeightsData );
}
void IfcRationalBSplineCurveWithKnots::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcBSplineCurveWithKnots::getAttributes( vec_attributes );
	if( m_WeightsData.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> WeightsData_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_WeightsData.begin(), m_WeightsData.end(), std::back_inserter( WeightsData_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "WeightsData", WeightsData_vec_object ) );
	}
}
void IfcRationalBSplineCurveWithKnots::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcBSplineCurveWithKnots::getAttributesInverse( vec_attributes_inverse );
}
void IfcRationalBSplineCurveWithKnots::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcBSplineCurveWithKnots::setInverseCounterparts( ptr_self_entity );
}
void IfcRationalBSplineCurveWithKnots::unlinkFromInverseCounterparts()
{
	IfcBSplineCurveWithKnots::unlinkFromInverseCounterparts();
}
