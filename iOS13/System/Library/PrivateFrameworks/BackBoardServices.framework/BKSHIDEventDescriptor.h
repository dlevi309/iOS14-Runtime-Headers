/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BKSHIDEventDescriptor : NSObject <NSSecureCoding, BSDescriptionProviding, NSCopying> {

	unsigned _hidEventType;

}

@property (nonatomic,readonly) unsigned hidEventType;               //@synthesize hidEventType=_hidEventType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)descriptorForHIDEvent:(IOHIDEventRef)arg1 ;
+(id)descriptorWithEventType:(unsigned)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)initWithEventType:(unsigned)arg1 ;
-(BOOL)describes:(id)arg1 ;
-(id)descriptorByAddingSenderIDToMatchCriteria:(unsigned long long)arg1 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(unsigned)hidEventType;
@end

