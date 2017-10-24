/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlanarExtent.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcPlanarExtent 
IfcPlanarExtent::IfcPlanarExtent() {}
IfcPlanarExtent::IfcPlanarExtent( int id ) { m_entity_id = id; }
IfcPlanarExtent::~IfcPlanarExtent() {}
shared_ptr<IfcPPObject> IfcPlanarExtent::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPlanarExtent> copy_self( new IfcPlanarExtent() );
	if( m_SizeInX ) { copy_self->m_SizeInX = dynamic_pointer_cast<IfcLengthMeasure>( m_SizeInX->getDeepCopy(options) ); }
	if( m_SizeInY ) { copy_self->m_SizeInY = dynamic_pointer_cast<IfcLengthMeasure>( m_SizeInY->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPlanarExtent::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPLANAREXTENT" << "(";
	if( m_SizeInX ) { m_SizeInX->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_SizeInY ) { m_SizeInY->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPlanarExtent::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPlanarExtent::toString() const { return L"IfcPlanarExtent"; }
void IfcPlanarExtent::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPlanarExtent, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_SizeInX = IfcLengthMeasure::createObjectFromSTEP( args[0], map );
	m_SizeInY = IfcLengthMeasure::createObjectFromSTEP( args[1], map );
}
void IfcPlanarExtent::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcGeometricRepresentationItem::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "SizeInX", m_SizeInX ) );
	vec_attributes.push_back( std::make_pair( "SizeInY", m_SizeInY ) );
}
void IfcPlanarExtent::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcGeometricRepresentationItem::getAttributesInverse( vec_attributes_inverse );
}
void IfcPlanarExtent::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcGeometricRepresentationItem::setInverseCounterparts( ptr_self_entity );
}
void IfcPlanarExtent::unlinkFromInverseCounterparts()
{
	IfcGeometricRepresentationItem::unlinkFromInverseCounterparts();
}
