/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcVertex.h"

// ENTITY IfcVertex 
IfcVertex::IfcVertex() {}
IfcVertex::IfcVertex( int id ) { m_entity_id = id; }
IfcVertex::~IfcVertex() {}
shared_ptr<IfcPPObject> IfcVertex::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcVertex> copy_self( new IfcVertex() );
	return copy_self;
}
void IfcVertex::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCVERTEX" << "(";
	stream << ");";
}
void IfcVertex::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcVertex::toString() const { return L"IfcVertex"; }
void IfcVertex::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
}
void IfcVertex::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcTopologicalRepresentationItem::getAttributes( vec_attributes );
}
void IfcVertex::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcTopologicalRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcVertex::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcTopologicalRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcVertex::unlinkFromInverseCounterparts()
{
	IfcTopologicalRepresentationItem::unlinkFromInverseCounterparts();
}
