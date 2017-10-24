/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAdvancedBrep.h"
#include "ifcpp/IFC4/include/IfcClosedShell.h"
#include "ifcpp/IFC4/include/IfcPresentationLayerAssignment.h"
#include "ifcpp/IFC4/include/IfcStyledItem.h"

// ENTITY IfcAdvancedBrep 
IfcAdvancedBrep::IfcAdvancedBrep() {}
IfcAdvancedBrep::IfcAdvancedBrep( int id ) { m_entity_id = id; }
IfcAdvancedBrep::~IfcAdvancedBrep() {}
shared_ptr<IfcPPObject> IfcAdvancedBrep::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcAdvancedBrep> copy_self( new IfcAdvancedBrep() );
	if( m_Outer ) { copy_self->m_Outer = dynamic_pointer_cast<IfcClosedShell>( m_Outer->getDeepCopy(options) ); }
	return copy_self;
}
void IfcAdvancedBrep::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCADVANCEDBREP" << "(";
	if( m_Outer ) { stream << "#" << m_Outer->m_entity_id; } else { stream << "*"; }
	stream << ");";
}
void IfcAdvancedBrep::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcAdvancedBrep::toString() const { return L"IfcAdvancedBrep"; }
void IfcAdvancedBrep::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcAdvancedBrep, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readEntityReference( args[0], m_Outer, map );
}
void IfcAdvancedBrep::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcManifoldSolidBrep::getAttributes( vec_attributes );
}
void IfcAdvancedBrep::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcManifoldSolidBrep::getAttributesInverse( vec_attributes_inverse );
}
void IfcAdvancedBrep::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcManifoldSolidBrep::setInverseCounterparts( ptr_self_entity );
}
void IfcAdvancedBrep::unlinkFromInverseCounterparts()
{
	IfcManifoldSolidBrep::unlinkFromInverseCounterparts();
}
