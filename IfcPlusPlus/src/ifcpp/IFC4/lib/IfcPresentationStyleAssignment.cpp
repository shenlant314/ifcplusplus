/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcPresentationStyleAssignment.h"
#include "ifcpp/IFC4/include/IfcPresentationStyleSelect.h"

// ENTITY IfcPresentationStyleAssignment 
IfcPresentationStyleAssignment::IfcPresentationStyleAssignment() {}
IfcPresentationStyleAssignment::IfcPresentationStyleAssignment( int id ) { m_entity_id = id; }
IfcPresentationStyleAssignment::~IfcPresentationStyleAssignment() {}
shared_ptr<IfcPPObject> IfcPresentationStyleAssignment::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcPresentationStyleAssignment> copy_self( new IfcPresentationStyleAssignment() );
	for( size_t ii=0; ii<m_Styles.size(); ++ii )
	{
		auto item_ii = m_Styles[ii];
		if( item_ii )
		{
			copy_self->m_Styles.push_back( dynamic_pointer_cast<IfcPresentationStyleSelect>(item_ii->getDeepCopy(options) ) );
		}
	}
	return copy_self;
}
void IfcPresentationStyleAssignment::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCPRESENTATIONSTYLEASSIGNMENT" << "(";
	stream << "(";
	for( size_t ii = 0; ii < m_Styles.size(); ++ii )
	{
		if( ii > 0 )
		{
			stream << ",";
		}
		const shared_ptr<IfcPresentationStyleSelect>& type_object = m_Styles[ii];
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
	stream << ");";
}
void IfcPresentationStyleAssignment::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcPresentationStyleAssignment::toString() const { return L"IfcPresentationStyleAssignment"; }
void IfcPresentationStyleAssignment::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 1 ){ std::stringstream err; err << "Wrong parameter count for entity IfcPresentationStyleAssignment, expecting 1, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	readSelectList( args[0], m_Styles, map );
}
void IfcPresentationStyleAssignment::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	if( m_Styles.size() > 0 )
	{
		shared_ptr<IfcPPAttributeObjectVector> Styles_vec_object( new IfcPPAttributeObjectVector() );
		std::copy( m_Styles.begin(), m_Styles.end(), std::back_inserter( Styles_vec_object->m_vec ) );
		vec_attributes.push_back( std::make_pair( "Styles", Styles_vec_object ) );
	}
}
void IfcPresentationStyleAssignment::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
}
void IfcPresentationStyleAssignment::setInverseCounterparts( shared_ptr<IfcPPEntity> )
{
}
void IfcPresentationStyleAssignment::unlinkFromInverseCounterparts()
{
}
