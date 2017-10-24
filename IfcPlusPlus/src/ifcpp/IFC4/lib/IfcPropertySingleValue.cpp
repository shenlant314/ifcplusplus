/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcComplexProperty.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcPropertyDependencyRelationship.h"
#include "ifcpp/IFC4/include/IfcPropertySet.h"
#include "ifcpp/IFC4/include/IfcPropertySingleValue.h"
#include "ifcpp/IFC4/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4/include/IfcResourceConstraintRelationship.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcUnit.h"
#include "ifcpp/IFC4/include/IfcValue.h"

// ENTITY IfcPropertySingleValue 
IfcPropertySingleValue::IfcPropertySingleValue() {}
IfcPropertySingleValue::IfcPropertySingleValue( int id ) { m_entity_id = id; }
IfcPropertySingleValue::~IfcPropertySingleValue() {}
shared_ptr<IfcPPObject> IfcPropertySingleValue::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPropertySingleValue> copy_self( new IfcPropertySingleValue() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcIdentifier>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_NominalValue ) { copy_self->m_NominalValue = dynamic_pointer_cast<IfcValue>( m_NominalValue->getDeepCopy(options) ); }
	if( m_Unit ) { copy_self->m_Unit = dynamic_pointer_cast<IfcUnit>( m_Unit->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPropertySingleValue::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPROPERTYSINGLEVALUE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_NominalValue ) { m_NominalValue->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ",";
	if( m_Unit ) { m_Unit->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcPropertySingleValue::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPropertySingleValue::toString() const { return L"IfcPropertySingleValue"; }
void IfcPropertySingleValue::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPropertySingleValue, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcIdentifier::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	m_NominalValue = IfcValue::createObjectFromSTEP( args[2], map );
	m_Unit = IfcUnit::createObjectFromSTEP( args[3], map );
}
void IfcPropertySingleValue::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSimpleProperty::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "NominalValue", m_NominalValue ) );
	vec_attributes.push_back( std::make_pair( "Unit", m_Unit ) );
}
void IfcPropertySingleValue::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSimpleProperty::getAttributesInverse( vec_attributes_inverse );
}
void IfcPropertySingleValue::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSimpleProperty::setInverseCounterparts( ptr_self_entity );
}
void IfcPropertySingleValue::unlinkFromInverseCounterparts()
{
	IfcSimpleProperty::unlinkFromInverseCounterparts();
}
