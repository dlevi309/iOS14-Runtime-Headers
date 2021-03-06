/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
*/

#import <libobjc.A.dylib/CKEphemeralReadableEventSequence.h>
#import <libobjc.A.dylib/CKEphemeralWritableEventSequence.h>

@interface CKEphemeralEventSequence : NSObject <CKEphemeralReadableEventSequence, CKEphemeralWritableEventSequence> {

	 queue;

}
-(id)first;
-(id)init;
-(id)eventsBetween:(id)arg1 and:(id)arg2 ;
-(id)eventsWithIdentifier:(id)arg1 ;
-(void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)last;
-(BOOL)appendEvent:(id)arg1 ;
@end

