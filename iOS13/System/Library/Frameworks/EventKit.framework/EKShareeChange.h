/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/

#import <EventKit/EKObjectChange.h>
#import <libobjc.A.dylib/EKOwnerIDProviding.h>

@class EKObjectID;

@interface EKShareeChange : EKObjectChange <EKOwnerIDProviding> {

	EKObjectID* _ownerID;

}

@property (nonatomic,readonly) EKObjectID * ownerID;              //@synthesize ownerID=_ownerID - In the implementation block
+(int)entityType;
+(void)fetchShareeChangesInStore:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchShareeChangesInSource:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(void)fetchShareeChangesInCalendar:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(EKObjectID *)ownerID;
-(id)initWithChangeProperties:(id)arg1 ;
@end
