/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcGeometricRepresentationItem.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcGeometricRepresentationItem 
IfcGeometricRepresentationItem::IfcGeometricRepresentationItem() {}
IfcGeometricRepresentationItem::IfcGeometricRepresentationItem( int id ) { m_entity_id = id; }
IfcGeometricRepresentationItem::~IfcGeometricRepresentationItem() {}
shared_ptr<IfcPPObject> IfcGeometricRepresentationItem::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcGeometricRepresentationItem> copy_self( new IfcGeometricRepresentationItem() );
	return copy_self;
}
void IfcGeometricRepresentationItem::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCGEOMETRICREPRESENTATIONITEM" << "(";
	stream << ");";
}
void IfcGeometricRepresentationItem::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcGeometricRepresentationItem::toString() const { return L"IfcGeometricRepresentationItem"; }
void IfcGeometricRepresentationItem::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
}
void IfcGeometricRepresentationItem::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcRepresentationItem::getAttributes( vec_attributes );
}
void IfcGeometricRepresentationItem::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcGeometricRepresentationItem::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcGeometricRepresentationItem::unlinkFromInverseCounterparts()
{
	IfcRepresentationItem::unlinkFromInverseCounterparts();
}
