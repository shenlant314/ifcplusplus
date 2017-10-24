/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcDoor.h"
#include "ifcpp/IFC4/include/IfcDoorTypeEnum.h"
#include "ifcpp/IFC4/include/IfcDoorTypeOperationEnum.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcObjectPlacement.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProductRepresentation.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProduct.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelConnectsElements.h"
#include "ifcpp/IFC4/include/IfcRelConnectsWithRealizingElements.h"
#include "ifcpp/IFC4/include/IfcRelContainedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelCoversBldgElements.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelFillsElement.h"
#include "ifcpp/IFC4/include/IfcRelInterferesElements.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelProjectsElement.h"
#include "ifcpp/IFC4/include/IfcRelReferencedInSpatialStructure.h"
#include "ifcpp/IFC4/include/IfcRelSpaceBoundary.h"
#include "ifcpp/IFC4/include/IfcRelVoidsElement.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcDoor 
IfcDoor::IfcDoor() {}
IfcDoor::IfcDoor( int id ) { m_entity_id = id; }
IfcDoor::~IfcDoor() {}
shared_ptr<IfcPPObject> IfcDoor::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcDoor> copy_self( new IfcDoor() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_ObjectPlacement ) { copy_self->m_ObjectPlacement = dynamic_pointer_cast<IfcObjectPlacement>( m_ObjectPlacement->getDeepCopy(options) ); }
	if( m_Representation ) { copy_self->m_Representation = dynamic_pointer_cast<IfcProductRepresentation>( m_Representation->getDeepCopy(options) ); }
	if( m_Tag ) { copy_self->m_Tag = dynamic_pointer_cast<IfcIdentifier>( m_Tag->getDeepCopy(options) ); }
	if( m_OverallHeight ) { copy_self->m_OverallHeight = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallHeight->getDeepCopy(options) ); }
	if( m_OverallWidth ) { copy_self->m_OverallWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_OverallWidth->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcDoorTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	if( m_OperationType ) { copy_self->m_OperationType = dynamic_pointer_cast<IfcDoorTypeOperationEnum>( m_OperationType->getDeepCopy(options) ); }
	if( m_UserDefinedOperationType ) { copy_self->m_UserDefinedOperationType = dynamic_pointer_cast<IfcLabel>( m_UserDefinedOperationType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcDoor::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCDOOR" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectPlacement ) { stream << "#" << m_ObjectPlacement->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Representation ) { stream << "#" << m_Representation->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Tag ) { m_Tag->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OverallHeight ) { m_OverallHeight->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OverallWidth ) { m_OverallWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_OperationType ) { m_OperationType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_UserDefinedOperationType ) { m_UserDefinedOperationType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcDoor::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcDoor::toString() const { return L"IfcDoor"; }
void IfcDoor::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 13 ){ std::stringstream err; err << "Wrong parameter count for entity IfcDoor, expecting 13, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReference( args[5], m_ObjectPlacement, map );
	readEntityReference( args[6], m_Representation, map );
	m_Tag = IfcIdentifier::createObjectFromSTEP( args[7], map );
	m_OverallHeight = IfcPositiveLengthMeasure::createObjectFromSTEP( args[8], map );
	m_OverallWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[9], map );
	m_PredefinedType = IfcDoorTypeEnum::createObjectFromSTEP( args[10], map );
	m_OperationType = IfcDoorTypeOperationEnum::createObjectFromSTEP( args[11], map );
	m_UserDefinedOperationType = IfcLabel::createObjectFromSTEP( args[12], map );
}
void IfcDoor::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcBuildingElement::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "OverallHeight", m_OverallHeight ) );
	vec_attributes.push_back( std::make_pair( "OverallWidth", m_OverallWidth ) );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
	vec_attributes.push_back( std::make_pair( "OperationType", m_OperationType ) );
	vec_attributes.push_back( std::make_pair( "UserDefinedOperationType", m_UserDefinedOperationType ) );
}
void IfcDoor::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcBuildingElement::getAttributesInverse( vec_attributes_inverse );
}
void IfcDoor::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcBuildingElement::setInverseCounterparts( ptr_self_entity );
}
void IfcDoor::unlinkFromInverseCounterparts()
{
	IfcBuildingElement::unlinkFromInverseCounterparts();
}
