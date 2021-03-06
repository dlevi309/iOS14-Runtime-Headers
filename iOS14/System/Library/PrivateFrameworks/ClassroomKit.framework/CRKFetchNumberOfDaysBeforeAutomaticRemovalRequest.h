/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class DMFControlGroupIdentifier;

@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalRequest : CATTaskRequest {

	DMFControlGroupIdentifier* _groupIdentifier;

}

@property (nonatomic,retain) DMFControlGroupIdentifier * groupIdentifier;              //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)setGroupIdentifier:(DMFControlGroupIdentifier *)arg1 ;
-(DMFControlGroupIdentifier *)groupIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

