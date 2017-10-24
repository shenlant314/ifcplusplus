/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement3D.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcProfileDef.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"
#include "ifcpp/IFC4/include/IfcSweptSurface.h"

// ENTITY IfcSweptSurface 
IfcSweptSurface::IfcSweptSurface() {}
IfcSweptSurface::IfcSweptSurface( int id ) { m_entity_id = id; }
IfcSweptSurface::~IfcSweptSurface() {}
shared_ptr<IfcPPObject> IfcSweptSurface::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcSweptSurface> copy_self( new IfcSweptSurface() );
	if( m_SweptCurve )
	{
		if( options.shallow_copy_IfcProfileDef ) { copy_self->m_SweptCurve = m_SweptCurve; }
		else { copy_self->m_SweptCurve = dynamic_pointer_cast<IfcProfileDef>( m_SweptCurve->getDeepCopy(options) ); }
	}
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement3D>( m_Position->getDeepCopy(options) ); }
	return copy_self;
}
void IfcSweptSurface::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCSWEPTSURFACE" << "(";
	if( m_SweptCurve ) { stream << "#" << m_SweptCurve->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "$"; }
	stream << ");";
}
void IfcSweptSurface::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcSweptSurface::toString() const { return L"IfcSweptSurface"; }
void IfcSweptSurface::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 2 ){ std::stringstream err; err << "Wrong parameter count for entity IfcSweptSurface, expecting 2, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_SweptCurve, map );
	readEntityReference( args[1], m_Position, map );
}
void IfcSweptSurface::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcSurface::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "SweptCurve", m_SweptCurve ) );
	vec_attributes.push_back( std::make_pair( "Position", m_Position ) );
}
void IfcSweptSurface::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcSurface::getAttributesInverse( vec_attributes_inverse );
}
void IfcSweptSurface::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcSurface::setInverseCounterparts( ptr_self_entity );
}
void IfcSweptSurface::unlinkFromInverseCounterparts()
{
	IfcSurface::unlinkFromInverseCounterparts();
}
