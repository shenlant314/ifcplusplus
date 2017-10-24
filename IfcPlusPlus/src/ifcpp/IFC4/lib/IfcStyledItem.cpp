/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcRepresentationItem.h"
#include "ifcpp/IFC4/include/IfcStyleAssignmentSelect.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcStyledItem 
IfcStyledItem::IfcStyledItem() {}
IfcStyledItem::IfcStyledItem( int id ) { m_entity_id = id; }
IfcStyledItem::~IfcStyledItem() {}
shared_ptr<IfcPPObject> IfcStyledItem::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcStyledItem> copy_self( new IfcStyledItem() );
	if( m_Item ) { copy_self->m_Item = dynamic_pointer_cast<IfcRepresentationItem>( m_Item->getDeepCopy(options) ); }
	for( size_t ii=0; ii<m_Styles.size(); ++ii )
	{
		auto item_ii = m_Styles[ii];
		if( item_ii )
		{
			copy_self->m_Styles.push_back( dynamic_pointer_cast<IfcStyleAssignmentSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcStyledItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSTYLEDITEM" << "(";
	if( m_Item ) { stream << "#" << m_Item->m_entity_id; } else { stream << "$"; }
	stream << ",";
	stream << "(";
	for( size_t ii = 0; ii < m_Styles.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcStyleAssignmentSelect>& type_object = m_Styles[ii];
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
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcStyledItem::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcStyledItem::toString() const { return L"IfcStyledItem"; }
void IfcStyledItem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 3 ){ std::stringstream err; err << "Wrong parameter count for entity IfcStyledItem, expecting 3, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Item, map );
	readSelectList( args[1], m_Styles, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
}
void IfcStyledItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Item", m_Item ) );
	if( m_Styles.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Styles_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_Styles.begin(), m_Styles.end(), std::back_inserter( Styles_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Styles", Styles_vec_object ) );
	}
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
}
void IfcStyledItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcStyledItem::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRepresentationItem::setInverseCounterparts( ptr_self_entity );
	shared_ptr<IfcStyledItem> ptr_self = dynamic_pointer_cast<IfcStyledItem>( ptr_self_entity );
	if( !ptr_self ) { throw IfcPPException( "IfcStyledItem::setInverseCounterparts: type mismatch" ); }
	if( m_Item )
	{
		m_Item->m_StyledByItem_inverse.push_back( ptr_self );
	}
}
void IfcStyledItem::unlinkFromInverseCounterparts()
{
	IfcRepresentationItem::unlinkFromInverseCounterparts();
	if( m_Item )
	{
		std::vector<weak_ptr<IfcStyledItem> >& StyledByItem_inverse = m_Item->m_StyledByItem_inverse;
		for( auto it_StyledByItem_inverse = StyledByItem_inverse.begin(); it_StyledByItem_inverse != StyledByItem_inverse.end(); )
		{
			shared_ptr<IfcStyledItem> self_candidate( *it_StyledByItem_inverse );
			if( self_candidate.get() == this )
			{
				it_StyledByItem_inverse= StyledByItem_inverse.erase( it_StyledByItem_inverse );
			}
			else
			{
				++it_StyledByItem_inverse;
			}
		}
	}
}
