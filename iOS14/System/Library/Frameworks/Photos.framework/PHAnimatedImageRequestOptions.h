/*
* Generated on Thursday, January 14, 2021 at 2:22:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/Photos-Structs.h>
#import <Photos/PHImageRequestOptions.h>

@interface PHAnimatedImageRequestOptions : PHImageRequestOptions {

	BOOL _allowPreCaching;
	BOOL _useSharedImageDecoding;

}

@property (assign,nonatomic) BOOL allowPreCaching;                     //@synthesize allowPreCaching=_allowPreCaching - In the implementation block
@property (assign,nonatomic) BOOL useSharedImageDecoding;              //@synthesize useSharedImageDecoding=_useSharedImageDecoding - In the implementation block
-(id)init;
-(void)setAllowPreCaching:(BOOL)arg1 ;
-(BOOL)useSharedImageDecoding;
-(void)setUseSharedImageDecoding:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)allowPreCaching;
@end

