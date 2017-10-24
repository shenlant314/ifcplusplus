/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcApproval.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcProperty.h"
#include "ifcpp/IFC4/include/IfcResourceApprovalRelationship.h"
#include "ifcpp/IFC4/include/IfcResourceObjectSelect.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcResourceApprovalRelationship 
IfcResourceApprovalRelationship::IfcResourceApprovalRelationship() {}
IfcResourceApprovalRelationship::IfcResourceApprovalRelationship( int id ) { m_entity_id = id; }
IfcResourceApprovalRelationship::~IfcResourceApprovalRelationship() {}
shared_ptr<IfcPPObject> IfcResourceApprovalRelationship::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcResourceApprovalRelationship> copy_self( new IfcResourceApprovalRelationship() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_RelatedResourceObjects.size(); ++ii )
	{
		auto item_ii = m_RelatedResourceObjects[ii];
		if( item_ii )
		{
			copy_self->m_RelatedResourceObjects.push_back( dynamic_pointer_cast<IfcResourceObjectSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_RelatingApproval ) { copy_self->m_RelatingApproval = dynamic_pointer_cast<IfcApproval>( m_RelatingApproval->getDeepCopy(options) ); }
	return copy_self;
}
void IfcResourceApprovalRelationship::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCRESOURCEAPPROVALRELATIONSHIP" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_RelatedResourceObjects.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcResourceObjectSelect>& type_object = m_RelatedResourceObjects[ii];
		if( type_object )
		{
			type_object->getStepParameter( stream, true );
		}
		else
		{
			stream << "$";
		}
	}
	stream << ")";
	stream << ",";
	if( m_RelatingApproval ) { stream << "#" << m_RelatingApproval->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcResourceApprovalRelationship::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcResourceApprovalRelationship::toString() const { return L"IfcResourceApprovalRelationship"; }
void IfcResourceApprovalRelationship::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 4 ){ std::stringstream err; err << "Wrong parameter count for entity IfcResourceApprovalRelationship, expecting 4, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
	m_Description = IfcText::createObjectFromSTEP( args[1], map );
	readSelectList( args[2], m_RelatedResourceObjects, map );
	readEntityReference( args[3], m_RelatingApproval, map );
}
void IfcResourceApprovalRelationship::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcResourceLevelRelationship::getAttributes( vec_attributes );
	if( m_RelatedResourceObjects.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> RelatedResourceObjects_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_RelatedResourceObjects.begin(), m_RelatedResourceObjects.end(), std::back_inserter( RelatedResourceObjects_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "RelatedResourceObjects", RelatedResourceObjects_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "RelatingApproval", m_RelatingApproval ) );
}
void IfcResourceApprovalRelationship::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcResourceLevelRelationship::getAttributesInverse( vec_attributes_inverse );
}
void IfcResourceApprovalRelationship::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcResourceLevelRelationship::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcResourceApprovalRelationship> ptr_self = dynamic_pointer_cast<IfcResourceApprovalRelationship>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcResourceApprovalRelationship::setInverseCounterparts: type mismatch" ); }
	for( size_t i=0; i<m_RelatedResourceObjects.size(); ++i )
	{
		shared_ptr<IfcProperty>  RelatedResourceObjects_IfcProperty = dynamic_pointer_cast<IfcProperty>( m_RelatedResourceObjects[i] );
		if( RelatedResourceObjects_IfcProperty )
		{
			RelatedResourceObjects_IfcProperty->m_HasApprovals_inverse.push_back( ptr_self );
		}
	}
	if( m_RelatingApproval )
	{
		m_RelatingApproval->m_ApprovedResources_inverse.push_back( ptr_self );
	}
}
void IfcResourceApprovalRelationship::unlinkFromInverseCounterparts()
{
	IfcResourceLevelRelationship::unlinkFromInverseCounterparts();
	for( size_t i=0; i<m_RelatedResourceObjects.size(); ++i )
	{
		shared_ptr<IfcProperty>  RelatedResourceObjects_IfcProperty = dynamic_pointer_cast<IfcProperty>( m_RelatedResourceObjects[i] );
		if( RelatedResourceObjects_IfcProperty )
		{
			std::vector<weak_ptr<IfcResourceApprovalRelationship> >& HasApprovals_inverse = RelatedResourceObjects_IfcProperty->m_HasApprovals_inverse;
			for( auto it_HasApprovals_inverse = HasApprovals_inverse.begin(); it_HasApprovals_inverse != HasApprovals_inverse.end(); )
			{
				shared_ptr<IfcResourceApprovalRelationship> self_candidate( *it_HasApprovals_inverse );
				if( self_candidate.get() == this )
				{
					it_HasApprovals_inverse= HasApprovals_inverse.erase( it_HasApprovals_inverse );
				}
				else
				{
					++it_HasApprovals_inverse;
				}
			}
		}
	}
	if( m_RelatingApproval )
	{
		std::vector<weak_ptr<IfcResourceApprovalRelationship> >& ApprovedResources_inverse = m_RelatingApproval->m_ApprovedResources_inverse;
		for( auto it_ApprovedResources_inverse = ApprovedResources_inverse.begin(); it_ApprovedResources_inverse != ApprovedResources_inverse.end(); )
		{
			shared_ptr<IfcResourceApprovalRelationship> self_candidate( *it_ApprovedResources_inverse );
			if( self_candidate.get() == this )
			{
				it_ApprovedResources_inverse= ApprovedResources_inverse.erase( it_ApprovedResources_inverse );
			}
			else
			{
				++it_ApprovedResources_inverse;
			}
		}
	}
}
