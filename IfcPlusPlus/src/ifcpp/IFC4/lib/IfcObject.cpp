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
#include "ifcpp/IFC4/include/IfcObject.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcObject 
IfcObject::IfcObject() {}
IfcObject::IfcObject( int id ) { m_entity_id = id; }
IfcObject::~IfcObject() {}
shared_ptr<IfcPPObject> IfcObject::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcObject> copy_self( new IfcObject() );
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
	return copy_self;
}
void IfcObject::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCOBJECT" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcObject::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcObject::toString() const { return L"IfcObject"; }
void IfcObject::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 5 ){ std::stringstream err; err << "Wrong parameter count for entity IfcObject, expecting 5, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
}
void IfcObject::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcObjectDefinition::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "ObjectType", m_ObjectType ) );
}
void IfcObject::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcObjectDefinition::getAttributesInverse( vec_attributes_inverse );
	if( m_IsDeclaredBy_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> IsDeclaredBy_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_IsDeclaredBy_inverse.size(); ++i )
		{
			if( !m_IsDeclaredBy_inverse[i].expired() )
			{
				IsDeclaredBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelDefinesByObject>( m_IsDeclaredBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsDeclaredBy_inverse", IsDeclaredBy_inverse_vec_obj ) );
	}
	if( m_Declares_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Declares_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_Declares_inverse.size(); ++i )
		{
			if( !m_Declares_inverse[i].expired() )
			{
				Declares_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelDefinesByObject>( m_Declares_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "Declares_inverse", Declares_inverse_vec_obj ) );
	}
	if( m_IsTypedBy_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> IsTypedBy_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_IsTypedBy_inverse.size(); ++i )
		{
			if( !m_IsTypedBy_inverse[i].expired() )
			{
				IsTypedBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelDefinesByType>( m_IsTypedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsTypedBy_inverse", IsTypedBy_inverse_vec_obj ) );
	}
	if( m_IsDefinedBy_inverse.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> IsDefinedBy_inverse_vec_obj( new IfcPPAttributeObjectVector() );
		for( size_t i=0; i<m_IsDefinedBy_inverse.size(); ++i )
		{
			if( !m_IsDefinedBy_inverse[i].expired() )
			{
				IsDefinedBy_inverse_vec_obj->m_vec.push_back( shared_ptr<IfcRelDefinesByProperties>( m_IsDefinedBy_inverse[i] ) );
			}
		}
		vec_attributes_inverse.push_back( std::make_pair( "IsDefinedBy_inverse", IsDefinedBy_inverse_vec_obj ) );
	}
}
void IfcObject::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcObjectDefinition::setInverseCounterparts( ptr_self_entity );
}
void IfcObject::unlinkFromInverseCounterparts()
{
	IfcObjectDefinition::unlinkFromInverseCounterparts();
}
