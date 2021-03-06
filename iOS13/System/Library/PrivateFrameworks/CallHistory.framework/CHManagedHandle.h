/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
*/

#import <CoreData/NSManagedObject.h>

@class CHHandle, NSString, NSSet;

@interface CHManagedHandle : NSManagedObject

@property (nonatomic,readonly) CHHandle * chHandle; 
@property (nonatomic,copy) NSString * normalizedValue; 
@property (assign,nonatomic) short type; 
@property (nonatomic,retain) NSString * value; 
@property (nonatomic,retain) NSSet * localParticipantCalls; 
@property (nonatomic,retain) NSSet * remoteParticipantCalls; 
+(id)fetchRequest;
+(id)managedHandlesForHandles:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)managedHandleForHandle:(id)arg1 inManagedObjectContext:(id)arg2 ;
-(CHHandle *)chHandle;
-(id)copyWithContext:(id)arg1 ;
@end

