/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKParticipantChange.h>
#import <libobjc.A.dylib/EKOwnerIDProviding.h>

@class EKObjectID;

@interface EKOrganizerChange : EKParticipantChange <EKOwnerIDProviding> {

	EKObjectID* _ownerID;

}

@property (nonatomic,readonly) EKObjectID * ownerID;              //@synthesize ownerID=_ownerID - In the implementation block
+(int)entityType;
+(void)fetchOrganizerChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchOrganizerChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchOrganizerChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)ownerID;
-(id)initWithChangeProperties:(id)arg1 ;
@end

