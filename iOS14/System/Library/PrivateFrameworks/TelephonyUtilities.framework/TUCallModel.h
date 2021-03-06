/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TUCallModel : NSObject <NSCopying, NSSecureCoding> {

	BOOL _supportsHolding;
	BOOL _supportsGrouping;
	BOOL _supportsUngrouping;
	BOOL _supportsDTMF;
	BOOL _supportsUnambiguousMultiPartyState;
	BOOL _supportsAddCall;
	BOOL _supportsSendingToVoicemail;

}

@property (assign,nonatomic) BOOL supportsHolding;                                 //@synthesize supportsHolding=_supportsHolding - In the implementation block
@property (assign,nonatomic) BOOL supportsGrouping;                                //@synthesize supportsGrouping=_supportsGrouping - In the implementation block
@property (assign,nonatomic) BOOL supportsUngrouping;                              //@synthesize supportsUngrouping=_supportsUngrouping - In the implementation block
@property (assign,nonatomic) BOOL supportsDTMF;                                    //@synthesize supportsDTMF=_supportsDTMF - In the implementation block
@property (assign,nonatomic) BOOL supportsUnambiguousMultiPartyState;              //@synthesize supportsUnambiguousMultiPartyState=_supportsUnambiguousMultiPartyState - In the implementation block
@property (assign,nonatomic) BOOL supportsAddCall;                                 //@synthesize supportsAddCall=_supportsAddCall - In the implementation block
@property (assign,nonatomic) BOOL supportsSendingToVoicemail;                      //@synthesize supportsSendingToVoicemail=_supportsSendingToVoicemail - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)supportsHolding;
-(BOOL)supportsUngrouping;
-(BOOL)supportsDTMF;
-(BOOL)supportsUnambiguousMultiPartyState;
-(BOOL)supportsAddCall;
-(BOOL)supportsSendingToVoicemail;
-(void)setSupportsHolding:(BOOL)arg1 ;
-(void)setSupportsGrouping:(BOOL)arg1 ;
-(void)setSupportsUngrouping:(BOOL)arg1 ;
-(void)setSupportsDTMF:(BOOL)arg1 ;
-(void)setSupportsUnambiguousMultiPartyState:(BOOL)arg1 ;
-(void)setSupportsAddCall:(BOOL)arg1 ;
-(void)setSupportsSendingToVoicemail:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)supportsGrouping;
-(BOOL)isEqual:(id)arg1 ;
@end

