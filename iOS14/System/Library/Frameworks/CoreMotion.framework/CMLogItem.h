/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface CMLogItem : NSObject <NSSecureCoding, NSCopying> {

	id _internalLogItem;

}

@property (nonatomic,readonly) double timestamp; 
+(BOOL)supportsSecureCoding;
-(id)initWithTimestamp:(double)arg1 ;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

