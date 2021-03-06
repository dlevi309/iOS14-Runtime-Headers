/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSDisplayConfigurationRequest.h>

@interface FBSMutableDisplayConfigurationRequest : FBSDisplayConfigurationRequest

@property (assign,nonatomic) long long overscanCompensation; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (assign,nonatomic) CGSize nativePixelSize; 
@property (assign,nonatomic) double refreshRate; 
@property (assign,nonatomic) long long hdrMode; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOverscanCompensation:(long long)arg1 ;
-(void)setNativePixelSize:(CGSize)arg1 ;
-(void)setRefreshRate:(double)arg1 ;
-(void)setHdrMode:(long long)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
@end

