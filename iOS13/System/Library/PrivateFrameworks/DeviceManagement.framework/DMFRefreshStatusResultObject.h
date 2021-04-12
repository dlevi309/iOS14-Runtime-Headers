/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSNumber;

@interface DMFRefreshStatusResultObject : CATTaskResultObject {

	NSNumber* _numberOfUpdates;

}

@property (nonatomic,copy) NSNumber * numberOfUpdates;              //@synthesize numberOfUpdates=_numberOfUpdates - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)numberOfUpdates;
-(void)setNumberOfUpdates:(NSNumber *)arg1 ;
@end
