/*
* Generated on Thursday, January 14, 2021 at 2:24:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriOntology.framework/SiriOntology
*/

#import <SiriOntology/SiriOntology-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface USOGraph : NSObject <NSSecureCoding> {

	unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph> >* _usoGraph;

}
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)getRoot;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCppUsoGraph:(unique_ptr<siri::ontology::UsoGraph, std::__1::default_delete<siri::ontology::UsoGraph> >*)arg1 ;
-(id)createOperatorNode:(const OntologyNodeName*)arg1 ;
-(id)createEntityNode:(const OntologyNodeName*)arg1 ;
-(id)createTaskNode:(const OntologyNodeName*)arg1 verb:(const OntologyVerbName*)arg2 ;
-(id)createStringNode:(id)arg1 ;
-(id)createIntNode:(id)arg1 ;
-(UsoRootNode*)getCppRootNode;
-(UsoGraph*)getCppGraph;
@end

