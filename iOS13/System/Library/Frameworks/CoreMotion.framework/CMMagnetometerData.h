/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/

#import <CoreMotion/CoreMotion-Structs.h>
#import <CoreMotion/CMLogItem.h>

@interface CMMagnetometerData : CMLogItem {

	id _internal;

}

@property (nonatomic,readonly) SCD_Struct_CM316 magneticField; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(SCD_Struct_CM316)magneticField;
-(id)initWithMagneticField:(SCD_Struct_CM1)arg1 andTimestamp:(double)arg2 ;
@end

