/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface HMCameraAudioCodec : NSObject <NSSecureCoding> {

	unsigned long long _audioCodec;

}

@property (nonatomic,readonly) unsigned long long audioCodec;              //@synthesize audioCodec=_audioCodec - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)isValid:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)audioCodec;
-(id)initWithAudioCodecType:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

