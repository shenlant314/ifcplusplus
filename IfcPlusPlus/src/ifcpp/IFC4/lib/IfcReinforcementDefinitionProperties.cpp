/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcReinforcementDefinitionProperties.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByTemplate.h"
#include "ifcpp/IFC4/include/IfcSectionReinforcementProperties.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeObject.h"

// ENTITY IfcReinforcementDefinitionProperties 
IfcReinforcementDefinitionProperties::IfcReinforcementDefinitionProperties() {}
IfcReinforcementDefinitionProperties::IfcReinforcementDefinitionProperties( int id ) { m_entity_id = id; }
IfcReinforcementDefinitionProperties::~IfcReinforcementDefinitionProperties() {}
shared_ptr<IfcPPObject> IfcReinforcementDefinitionProperties::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcReinforcementDefinitionProperties> copy_self( new IfcReinforcementDefinitionProperties() );
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
	if( m_DefinitionType ) { copy_self->m_DefinitionType = dynamic_pointer_cast<IfcLabel>( m_DefinitionType->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_ReinforcementSectionDefinitions.size(); ++ii )
	{
		auto item_ii = m_ReinforcementSectionDefinitions[ii];
		if( item_ii )
		{
			copy_self->m_ReinforcementSectionDefinitions.push_back( dynamic_pointer_cast<IfcSectionReinforcementProperties>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcReinforcementDefinitionProperties::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCREINFORCEMENTDEFINITIONPROPERTIES" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_DefinitionType ) { m_DefinitionType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	writeEntityList( stream, m_ReinforcementSectionDefinitions );
	stream << ");";
}
void IfcReinforcementDefinitionProperties::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcReinforcementDefinitionProperties::toString() const { return L"IfcReinforcementDefinitionProperties"; }
void IfcReinforcementDefinitionProperties::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 6 ){ std::stringstream err; err << "Wrong parameter count for entity IfcReinforcementDefinitionProperties, expecting 6, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_DefinitionType = IfcLabel::createObjectFromSTEP( args[4], map );
	readEntityReferenceList( args[5], m_ReinforcementSectionDefinitions, map );
}
void IfcReinforcementDefinitionProperties::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcPreDefinedPropertySet::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "DefinitionType", m_DefinitionType ) );
	if( m_ReinforcementSectionDefinitions.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> ReinforcementSectionDefinitions_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_ReinforcementSectionDefinitions.begin(), m_ReinforcementSectionDefinitions.end(), std::back_inserter( ReinforcementSectionDefinitions_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "ReinforcementSectionDefinitions", ReinforcementSectionDefinitions_vec_object ) );
	}
}
void IfcReinforcementDefinitionProperties::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcPreDefinedPropertySet::getAttributesInverse( vec_attributes_inverse );
}
void IfcReinforcementDefinitionProperties::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcPreDefinedPropertySet::setInverseCounterparts( ptr_self_entity );
}
void IfcReinforcementDefinitionProperties::unlinkFromInverseCounterparts()
{
	IfcPreDefinedPropertySet::unlinkFromInverseCounterparts();
}
