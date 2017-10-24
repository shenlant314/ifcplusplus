/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcAxis2Placement2D.h"
#include "ifcpp/IFC4/include/IfcExternalReferenceRelationship.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcNonNegativeLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcPlaneAngleMeasure.h"
#include "ifcpp/IFC4/include/IfcPositiveLengthMeasure.h"
#include "ifcpp/IFC4/include/IfcProfileProperties.h"
#include "ifcpp/IFC4/include/IfcProfileTypeEnum.h"
#include "ifcpp/IFC4/include/IfcTShapeProfileDef.h"

// ENTITY IfcTShapeProfileDef 
IfcTShapeProfileDef::IfcTShapeProfileDef() {}
IfcTShapeProfileDef::IfcTShapeProfileDef( int id ) { m_entity_id = id; }
IfcTShapeProfileDef::~IfcTShapeProfileDef() {}
shared_ptr<IfcPPObject> IfcTShapeProfileDef::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTShapeProfileDef> copy_self( new IfcTShapeProfileDef() );
	if( m_ProfileType ) { copy_self->m_ProfileType = dynamic_pointer_cast<IfcProfileTypeEnum>( m_ProfileType->getDeepCopy(options) ); }
	if( m_ProfileName ) { copy_self->m_ProfileName = dynamic_pointer_cast<IfcLabel>( m_ProfileName->getDeepCopy(options) ); }
	if( m_Position ) { copy_self->m_Position = dynamic_pointer_cast<IfcAxis2Placement2D>( m_Position->getDeepCopy(options) ); }
	if( m_Depth ) { copy_self->m_Depth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_Depth->getDeepCopy(options) ); }
	if( m_FlangeWidth ) { copy_self->m_FlangeWidth = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_FlangeWidth->getDeepCopy(options) ); }
	if( m_WebThickness ) { copy_self->m_WebThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_WebThickness->getDeepCopy(options) ); }
	if( m_FlangeThickness ) { copy_self->m_FlangeThickness = dynamic_pointer_cast<IfcPositiveLengthMeasure>( m_FlangeThickness->getDeepCopy(options) ); }
	if( m_FilletRadius ) { copy_self->m_FilletRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_FilletRadius->getDeepCopy(options) ); }
	if( m_FlangeEdgeRadius ) { copy_self->m_FlangeEdgeRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_FlangeEdgeRadius->getDeepCopy(options) ); }
	if( m_WebEdgeRadius ) { copy_self->m_WebEdgeRadius = dynamic_pointer_cast<IfcNonNegativeLengthMeasure>( m_WebEdgeRadius->getDeepCopy(options) ); }
	if( m_WebSlope ) { copy_self->m_WebSlope = dynamic_pointer_cast<IfcPlaneAngleMeasure>( m_WebSlope->getDeepCopy(options) ); }
	if( m_FlangeSlope ) { copy_self->m_FlangeSlope = dynamic_pointer_cast<IfcPlaneAngleMeasure>( m_FlangeSlope->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTShapeProfileDef::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTSHAPEPROFILEDEF" << "(";
	if( m_ProfileType ) { m_ProfileType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ProfileName ) { m_ProfileName->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Position ) { stream << "#" << m_Position->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Depth ) { m_Depth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeWidth ) { m_FlangeWidth->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WebThickness ) { m_WebThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeThickness ) { m_FlangeThickness->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FilletRadius ) { m_FilletRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeEdgeRadius ) { m_FlangeEdgeRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WebEdgeRadius ) { m_WebEdgeRadius->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WebSlope ) { m_WebSlope->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_FlangeSlope ) { m_FlangeSlope->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTShapeProfileDef::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTShapeProfileDef::toString() const { return L"IfcTShapeProfileDef"; }
void IfcTShapeProfileDef::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 12 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTShapeProfileDef, expecting 12, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_ProfileType = IfcProfileTypeEnum::createObjectFromSTEP( args[0], map );
	m_ProfileName = IfcLabel::createObjectFromSTEP( args[1], map );
	readEntityReference( args[2], m_Position, map );
	m_Depth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[3], map );
	m_FlangeWidth = IfcPositiveLengthMeasure::createObjectFromSTEP( args[4], map );
	m_WebThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[5], map );
	m_FlangeThickness = IfcPositiveLengthMeasure::createObjectFromSTEP( args[6], map );
	m_FilletRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[7], map );
	m_FlangeEdgeRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[8], map );
	m_WebEdgeRadius = IfcNonNegativeLengthMeasure::createObjectFromSTEP( args[9], map );
	m_WebSlope = IfcPlaneAngleMeasure::createObjectFromSTEP( args[10], map );
	m_FlangeSlope = IfcPlaneAngleMeasure::createObjectFromSTEP( args[11], map );
}
void IfcTShapeProfileDef::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcParameterizedProfileDef::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Depth", m_Depth ) );
	vec_attributes.push_back( std::make_pair( "FlangeWidth", m_FlangeWidth ) );
	vec_attributes.push_back( std::make_pair( "WebThickness", m_WebThickness ) );
	vec_attributes.push_back( std::make_pair( "FlangeThickness", m_FlangeThickness ) );
	vec_attributes.push_back( std::make_pair( "FilletRadius", m_FilletRadius ) );
	vec_attributes.push_back( std::make_pair( "FlangeEdgeRadius", m_FlangeEdgeRadius ) );
	vec_attributes.push_back( std::make_pair( "WebEdgeRadius", m_WebEdgeRadius ) );
	vec_attributes.push_back( std::make_pair( "WebSlope", m_WebSlope ) );
	vec_attributes.push_back( std::make_pair( "FlangeSlope", m_FlangeSlope ) );
}
void IfcTShapeProfileDef::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcParameterizedProfileDef::getAttributesInverse( vec_attributes_inverse );
}
void IfcTShapeProfileDef::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcParameterizedProfileDef::setInverseCounterparts( ptr_self_entity );
}
void IfcTShapeProfileDef::unlinkFromInverseCounterparts()
{
	IfcParameterizedProfileDef::unlinkFromInverseCounterparts();
}
