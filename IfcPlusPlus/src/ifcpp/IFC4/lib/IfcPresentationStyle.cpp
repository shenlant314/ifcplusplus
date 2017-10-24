/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcPresentationStyle.h"

// ENTITY IfcPresentationStyle 
IfcPresentationStyle::IfcPresentationStyle() {}
IfcPresentationStyle::IfcPresentationStyle( int id ) { m_entity_id = id; }
IfcPresentationStyle::~IfcPresentationStyle() {}
shared_ptr<IfcPPObject> IfcPresentationStyle::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPresentationStyle> copy_self( new IfcPresentationStyle() );
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	return copy_self;
}
void IfcPresentationStyle::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPRESENTATIONSTYLE" << "(";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcPresentationStyle::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPresentationStyle::toString() const { return L"IfcPresentationStyle"; }
void IfcPresentationStyle::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPresentationStyle, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_Name = IfcLabel::createObjectFromSTEP( args[0], map );
}
void IfcPresentationStyle::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	vec_attributes.push_back( std::make_pair( "Name", m_Name ) );
}
void IfcPresentationStyle::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcPresentationStyle::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcPresentationStyle::unlinkFromInverseCounterparts()
{
}
