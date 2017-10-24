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
#include "ifcpp/IFC4/include/IfcObjectDefinition.h"
#include "ifcpp/IFC4/include/IfcObjectTypeEnum.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToResource.h"
#include "ifcpp/IFC4/include/IfcResource.h"
#include "ifcpp/IFC4/include/IfcResourceSelect.h"
#include "ifcpp/IFC4/include/IfcText.h"
#include "ifcpp/IFC4/include/IfcTypeResource.h"

// ENTITY IfcRelAssignsToResource 
IfcRelAssignsToResource::IfcRelAssignsToResource() {}
IfcRelAssignsToResource::IfcRelAssignsToResource( int id ) { m_entity_id = id; }
IfcRelAssignsToResource::~IfcRelAssignsToResource() {}
shared_ptr<IfcPPObject> IfcRelAssignsToResource::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcRelAssignsToResource> copy_self( new IfcRelAssignsToResource() );
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
	for( size_t ii=0; ii<m_RelatedObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedObjects.push_back( dynamic_pointer_cast<IfcObjectDefinition>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatedObjectsType ) { copy_self->m_RelatedObjectsType = dynamic_pointer_cast<IfcObjectTypeEnum>( m_RelatedObjectsType->getDeepCopy(options) ); }
	if( m_RelatingResource ) { copy_self->m_RelatingResource = dynamic_pointer_cast<IfcResourceSelect>( m_RelatingResource->getDeepCopy(options) ); }
	return copy_self;
}
void IfcRelAssignsToResource::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRELASSIGNSTORESOURCE" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	writeEntityList( stream, m_RelatedObjects );
	stream << ",";
	if( m_RelatedObjectsType ) { m_RelatedObjectsType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_RelatingResource ) { m_RelatingResource->getStepParameter( stream, true ); } else { stream << "$" ; }
	stream << ");";
}
void IfcRelAssignsToResource::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcRelAssignsToResource::toString() const { return L"IfcRelAssignsToResource"; }
void IfcRelAssignsToResource::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 7 ){ std::stringstream err; err << "Wrong parameter count for entity IfcRelAssignsToResource, expecting 7, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	readEntityReferenceList( args[4], m_RelatedObjects, map );
	m_RelatedObjectsType = IfcObjectTypeEnum::createObjectFromSTEP( args[5], map );
	m_RelatingResource = IfcResourceSelect::createObjectFromSTEP( args[6], map );
}
void IfcRelAssignsToResource::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRelAssigns::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "RelatingResource", m_RelatingResource ) );
}
void IfcRelAssignsToResource::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRelAssigns::getAttributesInverse( vec_attributes_inverse );
}
void IfcRelAssignsToResource::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRelAssigns::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcRelAssignsToResource> ptr_self = dynamic_pointer_cast<IfcRelAssignsToResource>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcRelAssignsToResource::setInverseCounterparts: type mismatch" ); }
	shared_ptr<IfcResource>  RelatingResource_IfcResource = dynamic_pointer_cast<IfcResource>( m_RelatingResource );
	if( RelatingResource_IfcResource )
	{
		RelatingResource_IfcResource->m_ResourceOf_inverse.push_back( ptr_self );
	}
	shared_ptr<IfcTypeResource>  RelatingResource_IfcTypeResource = dynamic_pointer_cast<IfcTypeResource>( m_RelatingResource );
	if( RelatingResource_IfcTypeResource )
	{
		RelatingResource_IfcTypeResource->m_ResourceOf_inverse.push_back( ptr_self );
	}
}
void IfcRelAssignsToResource::unlinkFromInverseCounterparts()
{
	IfcRelAssigns::unlinkFromInverseCounterparts();
	shared_ptr<IfcResource>  RelatingResource_IfcResource = dynamic_pointer_cast<IfcResource>( m_RelatingResource );
	if( RelatingResource_IfcResource )
	{
		std::vector<weak_ptr<IfcRelAssignsToResource> >& ResourceOf_inverse = RelatingResource_IfcResource->m_ResourceOf_inverse;
		for( auto it_ResourceOf_inverse = ResourceOf_inverse.begin(); it_ResourceOf_inverse != ResourceOf_inverse.end(); )
		{
			shared_ptr<IfcRelAssignsToResource> self_candidate( *it_ResourceOf_inverse );
			if( self_candidate.get() == this )
			{
				it_ResourceOf_inverse= ResourceOf_inverse.erase( it_ResourceOf_inverse );
			}
			else
			{
				++it_ResourceOf_inverse;
			}
		}
	}
	shared_ptr<IfcTypeResource>  RelatingResource_IfcTypeResource = dynamic_pointer_cast<IfcTypeResource>( m_RelatingResource );
	if( RelatingResource_IfcTypeResource )
	{
		std::vector<weak_ptr<IfcRelAssignsToResource> >& ResourceOf_inverse = RelatingResource_IfcTypeResource->m_ResourceOf_inverse;
		for( auto it_ResourceOf_inverse = ResourceOf_inverse.begin(); it_ResourceOf_inverse != ResourceOf_inverse.end(); )
		{
			shared_ptr<IfcRelAssignsToResource> self_candidate( *it_ResourceOf_inverse );
			if( self_candidate.get() == this )
			{
				it_ResourceOf_inverse= ResourceOf_inverse.erase( it_ResourceOf_inverse );
			}
			else
			{
				++it_ResourceOf_inverse;
			}
		}
	}
}
