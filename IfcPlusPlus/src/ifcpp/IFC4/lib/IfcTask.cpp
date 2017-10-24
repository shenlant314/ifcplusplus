/* Code generated by IfcQuery EXPRESS generator, www.ifcquery.com */
#include <sstream>
#include <limits>

#include "ifcpp/model/IfcPPException.h"
#include "ifcpp/model/IfcPPAttributeObject.h"
#include "ifcpp/model/IfcPPGuid.h"
#include "ifcpp/reader/ReaderUtil.h"
#include "ifcpp/writer/WriterUtil.h"
#include "ifcpp/IFC4/include/IfcBoolean.h"
#include "ifcpp/IFC4/include/IfcGloballyUniqueId.h"
#include "ifcpp/IFC4/include/IfcIdentifier.h"
#include "ifcpp/IFC4/include/IfcInteger.h"
#include "ifcpp/IFC4/include/IfcLabel.h"
#include "ifcpp/IFC4/include/IfcOwnerHistory.h"
#include "ifcpp/IFC4/include/IfcRelAggregates.h"
#include "ifcpp/IFC4/include/IfcRelAssigns.h"
#include "ifcpp/IFC4/include/IfcRelAssignsToProcess.h"
#include "ifcpp/IFC4/include/IfcRelAssociates.h"
#include "ifcpp/IFC4/include/IfcRelDeclares.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByObject.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByProperties.h"
#include "ifcpp/IFC4/include/IfcRelDefinesByType.h"
#include "ifcpp/IFC4/include/IfcRelNests.h"
#include "ifcpp/IFC4/include/IfcRelSequence.h"
#include "ifcpp/IFC4/include/IfcTask.h"
#include "ifcpp/IFC4/include/IfcTaskTime.h"
#include "ifcpp/IFC4/include/IfcTaskTypeEnum.h"
#include "ifcpp/IFC4/include/IfcText.h"

// ENTITY IfcTask 
IfcTask::IfcTask() {}
IfcTask::IfcTask( int id ) { m_entity_id = id; }
IfcTask::~IfcTask() {}
shared_ptr<IfcPPObject> IfcTask::getDeepCopy( IfcPPCopyOptions& options )
{
	shared_ptr<IfcTask> copy_self( new IfcTask() );
	if( m_GlobalId )
	{
		if( options.create_new_IfcGloballyUniqueId ) { copy_self->m_GlobalId = shared_ptr<IfcGloballyUniqueId>(new IfcGloballyUniqueId( createGUID32_wstr().c_str() ) ); }
		else { copy_self->m_GlobalId = dynamic_pointer_cast<IfcGloballyUniqueId>( m_GlobalId->getDeepCopy(options) ); }
	}
	if( m_OwnerHistory )
	{
		if( options.shallow_copy_IfcOwnerHistory ) { copy_self->m_OwnerHistory = m_OwnerHistory; }
		else { copy_self->m_OwnerHistory = dynamic_pointer_cast<IfcOwnerHistory>( m_OwnerHistory->getDeepCopy(options) ); }
	}
	if( m_Name ) { copy_self->m_Name = dynamic_pointer_cast<IfcLabel>( m_Name->getDeepCopy(options) ); }
	if( m_Description ) { copy_self->m_Description = dynamic_pointer_cast<IfcText>( m_Description->getDeepCopy(options) ); }
	if( m_ObjectType ) { copy_self->m_ObjectType = dynamic_pointer_cast<IfcLabel>( m_ObjectType->getDeepCopy(options) ); }
	if( m_Identification ) { copy_self->m_Identification = dynamic_pointer_cast<IfcIdentifier>( m_Identification->getDeepCopy(options) ); }
	if( m_LongDescription ) { copy_self->m_LongDescription = dynamic_pointer_cast<IfcText>( m_LongDescription->getDeepCopy(options) ); }
	if( m_Status ) { copy_self->m_Status = dynamic_pointer_cast<IfcLabel>( m_Status->getDeepCopy(options) ); }
	if( m_WorkMethod ) { copy_self->m_WorkMethod = dynamic_pointer_cast<IfcLabel>( m_WorkMethod->getDeepCopy(options) ); }
	if( m_IsMilestone ) { copy_self->m_IsMilestone = dynamic_pointer_cast<IfcBoolean>( m_IsMilestone->getDeepCopy(options) ); }
	if( m_Priority ) { copy_self->m_Priority = dynamic_pointer_cast<IfcInteger>( m_Priority->getDeepCopy(options) ); }
	if( m_TaskTime ) { copy_self->m_TaskTime = dynamic_pointer_cast<IfcTaskTime>( m_TaskTime->getDeepCopy(options) ); }
	if( m_PredefinedType ) { copy_self->m_PredefinedType = dynamic_pointer_cast<IfcTaskTypeEnum>( m_PredefinedType->getDeepCopy(options) ); }
	return copy_self;
}
void IfcTask::getStepLine( std::stringstream& stream ) const
{
	stream << "#" << m_entity_id << "= IFCTASK" << "(";
	if( m_GlobalId ) { m_GlobalId->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_OwnerHistory ) { stream << "#" << m_OwnerHistory->m_entity_id; } else { stream << "*"; }
	stream << ",";
	if( m_Name ) { m_Name->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Description ) { m_Description->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_ObjectType ) { m_ObjectType->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Identification ) { m_Identification->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_LongDescription ) { m_LongDescription->getStepParameter( stream ); } else { stream << "*"; }
	stream << ",";
	if( m_Status ) { m_Status->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_WorkMethod ) { m_WorkMethod->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_IsMilestone ) { m_IsMilestone->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_Priority ) { m_Priority->getStepParameter( stream ); } else { stream << "$"; }
	stream << ",";
	if( m_TaskTime ) { stream << "#" << m_TaskTime->m_entity_id; } else { stream << "$"; }
	stream << ",";
	if( m_PredefinedType ) { m_PredefinedType->getStepParameter( stream ); } else { stream << "$"; }
	stream << ");";
}
void IfcTask::getStepParameter( std::stringstream& stream, bool ) const { stream << "#" << m_entity_id; }
const std::wstring IfcTask::toString() const { return L"IfcTask"; }
void IfcTask::readStepArguments( const std::vector<std::wstring>& args, const std::map<int,shared_ptr<IfcPPEntity> >& map )
{
	const size_t num_args = args.size();
	if( num_args != 13 ){ std::stringstream err; err << "Wrong parameter count for entity IfcTask, expecting 13, having " << num_args << ". Entity ID: " << m_entity_id << std::endl; throw IfcPPException( err.str().c_str() ); }
	m_GlobalId = IfcGloballyUniqueId::createObjectFromSTEP( args[0], map );
	readEntityReference( args[1], m_OwnerHistory, map );
	m_Name = IfcLabel::createObjectFromSTEP( args[2], map );
	m_Description = IfcText::createObjectFromSTEP( args[3], map );
	m_ObjectType = IfcLabel::createObjectFromSTEP( args[4], map );
	m_Identification = IfcIdentifier::createObjectFromSTEP( args[5], map );
	m_LongDescription = IfcText::createObjectFromSTEP( args[6], map );
	m_Status = IfcLabel::createObjectFromSTEP( args[7], map );
	m_WorkMethod = IfcLabel::createObjectFromSTEP( args[8], map );
	m_IsMilestone = IfcBoolean::createObjectFromSTEP( args[9], map );
	m_Priority = IfcInteger::createObjectFromSTEP( args[10], map );
	readEntityReference( args[11], m_TaskTime, map );
	m_PredefinedType = IfcTaskTypeEnum::createObjectFromSTEP( args[12], map );
}
void IfcTask::getAttributes( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes )
{
	IfcProcess::getAttributes( vec_attributes );
	vec_attributes.push_back( std::make_pair( "Status", m_Status ) );
	vec_attributes.push_back( std::make_pair( "WorkMethod", m_WorkMethod ) );
	vec_attributes.push_back( std::make_pair( "IsMilestone", m_IsMilestone ) );
	vec_attributes.push_back( std::make_pair( "Priority", m_Priority ) );
	vec_attributes.push_back( std::make_pair( "TaskTime", m_TaskTime ) );
	vec_attributes.push_back( std::make_pair( "PredefinedType", m_PredefinedType ) );
}
void IfcTask::getAttributesInverse( std::vector<std::pair<std::string, shared_ptr<IfcPPObject> > >& vec_attributes_inverse )
{
	IfcProcess::getAttributesInverse( vec_attributes_inverse );
}
void IfcTask::setInverseCounterparts( shared_ptr<IfcPPEntity> ptr_self_entity )
{
	IfcProcess::setInverseCounterparts( ptr_self_entity );
}
void IfcTask::unlinkFromInverseCounterparts()
{
	IfcProcess::unlinkFromInverseCounterparts();
}
